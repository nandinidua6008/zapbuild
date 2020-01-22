#include<stdio.h>    
 
void main(){
    int a[]={2,46,9,10,12,15,14,20,25,27,35,38,55};
    int n = sizeof(a) / sizeof(a[0]);
    int num,isum=0;
    printf("enter a number");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]%num==0){
            sum=sum+a[i];
        }
    }
    printf("sum of values in array that is divisible by %d is",num);
    printf("\n%d",sum);
}
