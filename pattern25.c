
#include <stdio.h>

int main()
{
    int i,j,k,n;
    char p;
    for(i=1;i<=6;i++){
        
        for(j=1;j<=i;j++){
            if(j%2!=0){
                printf("1");
            }
            else{
                printf("0");
            }
        }printf("\n");
    }

    return 0;
}

