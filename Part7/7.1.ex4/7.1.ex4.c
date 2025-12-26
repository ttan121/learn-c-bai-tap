#include <stdio.h>
//#include <string.h>
int do_dai(char s[])
{
    int i=0;
    for(int j=0; s[j] != '\0'; j++)
        i++;
    return i;
}
void xau_hoa(char s[])
{
    for(int i=0; s[i] != '\0'; i++)
    {
        if (s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
    for(int i=0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
}
void xau_thuong(char s[])
{
    for(int i=0; s[i] != '\0'; i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        s[i]+=32;
    }
    for(int i=0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    printf("\n");
}
int xau_loai_trai(char s[])
{
    int i=0;
    while (s[i]==' ')
        i++;
    return i;
}
int xau_loai_phai(char s[], int start)
{
    int b=do_dai(s)-1;
    int a=do_dai(s);
    for(int j=b; s[j]==' ' && j>=start; j--)
        a--;
    return a;
}
void xau_loai_giua(char s[], int start, int end)
{

    for (int i=start; i<=end; i++)
    {
        if(s[i] != ' ')
            printf("%c", s[i]);
    }
    printf("\n");
}
int sotu(char s[])
{
    int st = xau_loai_trai(s);
    int ed = xau_loai_phai(s, st);
    int skt=0;
    int s_t=0;
    for(int i=st; i<=ed; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            skt++;
        else if (s[i]==' ' || s[i]=='\0')
        {
            if (skt>1)
                s_t++;
            skt=0;
        }
    }
    return s_t;
}
int sotu_T(char s[])
{
    int st = xau_loai_trai(s);
    int ed = xau_loai_phai(s, st);
    int skt=0;
    int s_t=0;
    for(int i=st; i<=ed; i++)
    {
        if (skt==0)
        {
            if (s[i] == 84)
                skt++;
        }
        else if (skt>=1)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                skt++;
            else if (s[i]==' ' || s[i]=='\0')
            {
                if(skt>1)
                    s_t++;
                skt=0;
            }
        }
    }
    return s_t;
}
int sotu_TH(char s[])
{
    int st = xau_loai_trai(s);
    int ed = xau_loai_phai(s, st);
    int skt=0;
    int s_t=0;
    for(int i=st; i<=ed; i++)
    {
        if (skt==0)
        {
            if (s[i] == 84 && s[i+1] == 72)
                skt+=2;
        }
        else if (skt>=2)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                skt++;
            else if (s[i]==' ' || s[i]=='\0')
            {
                s_t++;
                skt=0;
            }
        }
    }
    return s_t;
}

int main()
{
    char s[10000];
    printf("Nhap vao mot chuoi (toi da 10000 ki tu): ");
    scanf("%[^\n]", s);

    do_dai(s);
    int so_tu=sotu(s);
    int so_tu_T=sotu_T(s);
    int so_tu_TH=sotu_TH(s);

    printf("\nDo dai cua chuoi la: %i\n", do_dai(s));

    printf("\nXau da viet hoa la: ");
    xau_hoa(s);

    printf("\nXau da viet thuong la: ");
    xau_thuong(s);

    
    printf("\nXau da loai bo khoang trang ben trai la: ");
    for (int i=xau_loai_trai(s); s[i] != '\0'; i++)
        printf("%c", s[i]);

    printf("\nXau da loai bo khoang trang ben phai la: ");
    for (int i=xau_loai_trai(s); i<xau_loai_phai(s, xau_loai_trai(s)); i++)
        printf("%c", s[i]);

    printf("\nXau loai bo toan bo ki tu trang o giua la: ");
    xau_loai_giua(s, xau_loai_trai(s), xau_loai_phai(s, xau_loai_trai(s)));

    printf("\nXau co %i tu", so_tu);

    printf("\nXau co %i tu bat dau bang 'T'", so_tu_T);

    printf("\nXau co %i tu bat dau bang \"TH\" ", so_tu_TH);
}