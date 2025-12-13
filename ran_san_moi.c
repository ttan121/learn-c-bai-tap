#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

// Kích thước màn hình game
#define WIDTH 40
#define HEIGHT 20

// Mã phím
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ESC 27

typedef enum { STOP = 0, LEFT, RIGHT, UP, DOWN } Direction;

// Biến toàn cục
int gameOver;
int x, y;               // Tọa độ đầu rắn
int fruitX, fruitY;     // Tọa độ mồi
int score;
int tailX[100], tailY[100]; // ĐÃ SỬA: Phải là mảng để lưu vị trí các đốt
int nTail;              // Độ dài đuôi
Direction dir;

// Hàm đưa con trỏ đến vị trí (x,y) để vẽ đè, tránh xóa màn hình (giảm giật)
void GoToXY(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = (SHORT)x;
    coord.Y = (SHORT)y;
    SetConsoleCursorPosition(hConsole, coord);
}

void HideCursor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = FALSE;
    cursorInfo.dwSize = 100;
    SetConsoleCursorInfo(hConsole, &cursorInfo);
}

void Setup() {
    gameOver = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;

    srand((unsigned int)time(NULL));
    fruitX = rand() % (WIDTH - 2) + 1;
    fruitY = rand() % (HEIGHT - 2) + 1;

    score = 0;
    nTail = 0;
    HideCursor();
}

void Draw() {
    GoToXY(0, 0); // Đưa con trỏ về góc trái trên cùng

    // Vẽ cạnh trên
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    // Vẽ thân bàn cờ
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0) printf("#"); // Tường trái

            if (i == y && j == x)
                printf("O"); // Đầu rắn
            else if (i == fruitY && j == fruitX)
                printf("F"); // Mồi
            else {
                int isTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // Thân rắn
                        isTail = 1;
                        break;
                    }
                }
                if (!isTail) printf(" ");
            }

            if (j == WIDTH - 1) printf("#"); // Tường phải
        }
        printf("\n");
    }

    // Vẽ cạnh dưới
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    printf("Score: %d\n", score);
    printf("Controls: ARROW KEYS to move. 'x' to quit.\n");
}

void Input() {
    if (_kbhit()) {
        int key = _getch();

        // Kiểm tra phím chức năng (Mũi tên trả về 2 mã: 0/224 rồi đến mã phím)
        if (key == 0 || key == 224) { // ĐÃ SỬA: Thêm dấu ||
            int arrow = _getch();
            switch (arrow) {
                case KEY_LEFT:  if(dir != RIGHT) dir = LEFT; break;
                case KEY_RIGHT: if(dir != LEFT) dir = RIGHT; break;
                case KEY_UP:    if(dir != DOWN) dir = UP; break;
                case KEY_DOWN:  if(dir != UP) dir = DOWN; break;
            }
        } else {
            if (key == 'x' || key == KEY_ESC) { // ĐÃ SỬA: Thêm dấu ||
                gameOver = 1;
            }
        }
    }
}

void Logic() {
    // 1. Cập nhật vị trí đuôi (Logic khó nhất)
    // Đốt đầu tiên của đuôi (tailX[0]) sẽ lấy vị trí cũ của đầu rắn
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;

    tailX[0] = x;
    tailY[0] = y;

    // Các đốt sau nối đuôi đốt trước
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    // 2. Di chuyển đầu rắn
    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
        default: break;
    }

    // 3. Xử lý rắn đi xuyên tường (Optional: Nếu muốn đâm tường chết thì giữ nguyên code cũ)
    // Code dưới đây làm rắn đi xuyên tường (từ trái qua phải)
    /*
    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;
    */

    // Code hiện tại: Đâm tường chết
    if (x >= WIDTH || x < 0 || y >= HEIGHT || y < 0) { // ĐÃ SỬA: Thêm dấu ||
        gameOver = 1;
    }

    // 4. Va chạm thân
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    // 5. Ăn mồi
    if (x == fruitX && y == fruitY) {
        score += 10;
        if (nTail < 100) nTail++; // Tăng dài đuôi
        fruitX = rand() % (WIDTH - 2) + 1; // Sinh mồi mới
        fruitY = rand() % (HEIGHT - 2) + 1;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // Tốc độ game
    }

    // Màn hình kết thúc
    system("cls");
    printf("\n\n");
    printf("    ############################\n");
    printf("    #        GAME OVER         #\n");
    printf("    ############################\n");
    printf("    #   Final Score: %-8d  #\n", score);
    printf("    ############################\n\n");

    while (_kbhit()) _getch(); // Xóa bộ đệm bàn phím
    printf("Press any key to exit...");
    _getch();
    return 0;
}
