
#include <stdio.h>

int main()
{
    int i,j,k,n;
    char p;
    for(i=1;i<=4;i++){
        n=1;  
        p='A';
        for(j=1;j<=7;j++){
            if(j>=5-i&&j<=3+i){
        
                j<=4?printf("%d",n):printf("%c",p);
                j<=4?n++:p++;
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }

    return 0;
}

