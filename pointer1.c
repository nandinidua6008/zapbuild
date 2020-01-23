#include<stdio.h>
void main()
{
    int a=5,*p;
    p=&a;
    printf("value of a is %d\n",a);
    printf("address of a is %d\n",&a);
    printf("value that pointer is pointing is %d\n",*p);
    printf("address stored in pointer is %d\n",p);
    printf("address of pointer is %d",&p);
    
    *p=10;
    printf("new value of pointer is %d\n",*p);
    printf("value of a is %d\n",a);
}
