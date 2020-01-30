#include <stdio.h>

int main()
{
    int i,size,temp,j,a[9]={31,45,11,89,55,19,21,8,40};
    size=sizeof(a)/sizeof(a[0]);
    for(i=1;i<size;i++){
        temp=a[i];
        for(j=i-1;j>=0&&temp<a[j];j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    for(i=0;i<size;i++){
    printf("%d\t",a[i]);
    }
    return 0;
}
