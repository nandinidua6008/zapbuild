#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5},b[]={1,2,3,4,5},c[5],sum=0,i;
    for(i=0;i<5;i++){
        c[i]=a[i]+b[i];
        
    }
    printf("sum of array1 and array 2 is \n");
   for(i=0;i<5;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}

