  #include<stdio.h>
int main() 
{ 
    int x[5]={10,20,30,40,50}; 
    int *ptr=&x;
    int i;
    
    for(i=1;i<5;i++)
    {
        printf("address in pointer is %d\n",ptr);
        printf("value in pointer is %d\n",*ptr);
        
        ptr++;
    }
    
    return 0; 
} 
