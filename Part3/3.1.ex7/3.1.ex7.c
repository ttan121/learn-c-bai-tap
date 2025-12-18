#include <stdio.h>
void result()
{
    int tong=36;
    int tong_c=100;
    for (int g=0; g<=tong; g++)
    {
        int c=tong-g;
        if ((g*2 + c*4) == tong_c)
            printf("Co %i con ga %i con cho\n", g, c);
    }
}
int main()
{
    result();
    return 0;
}