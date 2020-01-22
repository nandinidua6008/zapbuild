#include <stdio.h>
int main()
{
    int a[]={6,61,363,456,678,46,15,45,52,435,554},n,esum=0,osum=0,i;
    for(i=0;i<11;i++){
        
        if(a[i]%2==0){
            esum+=a[i];
        }
        else{
            osum+=a[i];
        }
    }
    printf("sum of even numbers are: %d\n",esum);
    printf("sum of odd numbers are: %d",osum);
    return 0;
}

