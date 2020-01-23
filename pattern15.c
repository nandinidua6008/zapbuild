#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("enter limit");
    scanf("%d",&n);
   k=(n*2)-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n*2)-1;j++){
            
            if(j>=i&&j<=k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        k=k-1;
    }
}
