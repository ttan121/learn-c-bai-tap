#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%i",&n);
    _Bool check=true;
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            check=false;
            break;
        }
    }
    if (check==true) printf("Yes\n");
    else printf("No\n");
    return 0;
}
