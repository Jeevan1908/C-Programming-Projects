
#include<stdio.h>

int main()
{
    float a,b;
    char ch;
    printf("enter the problem");  
    scanf("%f %c %f",&a, &ch, &b);
    switch(ch)
    {
        case'+':
        {
            printf("%f",a+b);
            break;
        }
        case'-':
        {
            printf("%f",a-b);
            break;
        }
        case'*':
        {
            printf("%f",a*b);
            break;
        }
        case'/':
        {
            printf("%f",a/b);
            break;
        }
        default:
        {
        printf("invalid character");
        }
    }
    
    
    return 0;
}
