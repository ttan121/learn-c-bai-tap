#include <stdio.h>
#include <string.h>  // Thư viện xử lý chuỗi (strlen)
#include <windows.h> // Thư viện cho gotoxy, Sleep
#include <conio.h>   // Thư viện để dùng getch() nếu cần
// Hàm đưa con trỏ đến vị trí (x, y)
void gotoxy(short x, short y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    char mes[200];
    printf("Nhap dong chu can chay: ");
    // Dùng fgets thay scanf để nhập được cả dấu cách
    fgets(mes, sizeof(mes), stdin); 
    // Xóa ký tự xuống dòng (\n) ở cuối chuỗi do fgets để lại (để in cho đẹp)
    mes[strcspn(mes, "\n")] = 0;
    short chieu_rong_man_hinh = 80;
    short do_dai_chuoi = strlen(mes);
    // Xóa màn hình một lần trước khi bắt đầu chạy để mất dòng "Nhap dong chu..."
    system("cls"); 
    // LOGIC CHUYỂN ĐỘNG
    for (short i = 0; i < chieu_rong_man_hinh - do_dai_chuoi; i++)
    {
        // Bước 1: Đến vị trí i
        gotoxy(i, 10); // Cho chạy ở dòng 10 cho dễ nhìn
        // Bước 2: In chuỗi
        printf("%s", mes);
        // Bước 3: Dừng lại để mắt kịp nhìn (0.1 giây)
        Sleep(100); 
        // Bước 4: Xóa chuỗi cũ để chuẩn bị in chuỗi mới
        // MẸO: Thay vì system("cls") gây giật màn hình, ta xóa đúng dòng đó thôi
        // Bằng cách quay lại vị trí cũ và in khoảng trắng đè lên
        gotoxy(i, 10);
        for(int j=0; j < do_dai_chuoi; j++) printf(" "); 
    }
    return 0; // Return phải nằm ngoài vòng lặp
}