#include<stdio.h>
void main(){
    int i,j,k=0,n;
    printf("enter limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        i<=(n/2)+1?k++:k--;
        for(j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }
}
