  #include<stdio.h>
void main() 
{ 
    int a=5,b=10,*p=&a,*q=&b;
    printf("before swapping a=%d,b=%d\n",*p,*q);
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("after swapping a=%d b=%d",*p,*q);
    
} 
