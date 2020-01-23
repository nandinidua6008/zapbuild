  #include<stdio.h>
void main() 
{ 
    int a=5,*p,**pp;
    p=&a;
    pp=&p;
    
    printf("address of a is %d\n",p);
    printf("address of p is %d\n",pp);
    printf("address of pp is %d\n",&pp);
    
    printf("value of a is %d\n",a);
    printf("value stored at p %d\n",*p);
    printf("value stored at pp is %d\n",**pp);
    
} 
