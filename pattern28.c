#include <stdio.h>

int main()
{
    int i,j,k=0;
    for(i=1;i<=9;i++){
        i<=5?k++:k--;
        for(j=1;j<=14;j++){
            if(j>=6-k&&j<=4+k||j>=14-k&&j<=15-k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }

    return 0;
}
