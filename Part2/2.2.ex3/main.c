#include <stdio.h>

int main()
{
        double x, y;
        char c='0';
        printf("Enter numbers x: \n");
        while(scanf("%lf",&x)!=1)
        {
            printf("x is not numbers please re-enter x:\n");
            while(getchar()!='\n');
        }
        printf("Enter numbers y: \n");
        while(scanf("%lf",&y)!=1)
        {
            printf("y is not float numbers re-enter y:\n");
            while(getchar()!='\n');
        }
        printf("Enter char (+, -, *, /) c:\n");
        while (1)
        {
            scanf(" %c", &c);
            if(c=='+' || c=='-' || c=='*' || c=='/') break;
                printf("c is not char (+,-,*,/) please re-enter c:\n");
            while(getchar()!='\n');
        }
            switch (c)
            {
                case '+': printf("%.3lf + %.3lf = %.3lf\n",x,y,(x+y)); break;
                case '-': printf("%.3lf - %.3lf = %.3lf\n",x,y,(x-y)); break;
                case '*': printf("%.3lf * %.3lf = %.3lf\n",x,y,(x*y)); break;
            }
        if (c=='/' && y!=0) printf("%.3lf/%.3lf =%.3lf",x,y,(x/y));
        else if (c=='/') printf("%.3lf/%.3lf=error !\n",x,y);
        return 0;
        }
