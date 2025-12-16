#include <stdio.h>

int main()
{
    double m, p, c;
    while (1)
    {
        printf("Please enter the grades of Maths:\n");
        scanf("%lf",&m);
        printf("Please enter the grades of Physics:\n");
        scanf("%lf",&p);
        printf("Please enter the grades of Chemistry:\n");
        scanf("%lf",&c);
        if (m>=0 && p>=0 && c>=0 && m<=10 && p<=10 && c<=10)
        {
            if ((m+p+c)>=15 && m>=4 && p>=4 && c>=4)
            {
                printf("Passed!\n");
                if (m>=5 && p>=5 && c>=5)
                    printf("Good at all courses\n");
                else
                    printf("Not good at all courses\n");
            }
            else
                printf("False\n");
            break;
        }
        else printf("Error value please re-enter value ! \n");
    }
    return 0;
}
