#include <stdio.h>
void resul ()
{
    int so_co=100;
    for (int trau_dung=0; trau_dung<=100; trau_dung++)
    {
        for (int trau_nam=0; trau_nam<=100; trau_nam++)
        {
            int trau_gia=100-(trau_dung+trau_nam);
            if ((trau_dung + trau_nam + trau_gia) == 100 &&
            ((trau_dung * 5) + (trau_nam * 3) + ((1.0/3.0) * trau_gia) == so_co))
                printf("so trau dung la %i so trau nam la %i so trau gia la %i\n", trau_dung, trau_nam, trau_gia);
        }
    }
}
int main()
{
    resul();
    return 0;
}