#include <stdio.h>

int main()
{
    int i,a,b,c,n;
    printf("enter first number and second number");
    scanf("%d%d",&a,&b);
    
    printf("enter limit for fibbonacci series");
    scanf("%d",&n);
    printf("fibonacci series is\n");
    printf("%d\t%d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }

    return 0;
}

