#include <stdio.h>
int main()
{
    int a[5]={11,2,73,4,5},i,temp,j;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array  is \n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

