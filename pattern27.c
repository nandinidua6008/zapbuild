
#include <stdio.h>

int main()
{
    int i,j;
    char a;
    for(i=1;i<=4;i++)
    {
        a=64+i;
        for(j=1;j<=i;j++){
            if(j<=i)
            printf("%c",a--);
            else
            printf(" ");
          
        }
        printf("\n");
     
    }
    return 0;
}
