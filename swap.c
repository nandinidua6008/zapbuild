#include<stdio.h>
void main()
{
int a,b,c;
printf("enter 2 number");
scanf("%d,%d",&a,&b);
printf("a=%d b=%d",a,b);

c=a;
a=b;
b=c;

printf("values after swapping is a=%d b=%d",a,b);

}
