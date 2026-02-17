#include <stdio.h>
int main()
{
    char op;
    int a,b;
    printf("enter an operator (+,-,*,/,%)\n");
    scanf("%c",&op);
    printf ("\n enter any two values\n");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case'+':
        printf("\n addition=%d",(a+b));
        break;
        case'-':("\n subtraction=%d",(a-b));
        break;
        case'*':
        printf("\n multiplication =%d",(a*b));
        break;
        case'/':
        printf("\n division=%d",(a/b));
        break;
        case'%':
        printf("\n remainder=%d",(a%b));
        break;
        default:
        printf("\n enter correct operator");
    }
    return 0;
    }