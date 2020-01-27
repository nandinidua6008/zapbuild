
#include <stdio.h>

int main()
{
    int a[]={4,43,13,32,24},i,j,temp;
    int l=sizeof(a)/sizeof(a[0]);
    temp=a;
    for(i=0;i<l;i++){
        for(j=i+1;j<l;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<l;i++){
        printf("%d ",a[i]);
    }
    return 0;
}


