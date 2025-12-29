#include <stdio.h>

struct Point
{
    double x;
    double y;
};
void sum(struct Point *p1, struct Point *p2)
{
    struct Point sum;
    sum.x = p1->x + p2->x;
    sum.y = p1->y + p2->y;
    printf("Tong hai toa do la: (%.2f, %.2f)\n", sum.x, sum.y);
}
int main()
{
    struct Point p1, p2;
    printf("Nhap toa do diem thu nhat (x1, y1): ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Nhap toa do diem thu hai (x2, y2): ");
    scanf("%lf %lf", &p2.x, &p2.y);
    sum(&p1, &p2);
    return 0;
}
