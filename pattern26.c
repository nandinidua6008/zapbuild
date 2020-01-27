
#include <stdio.h>

int main()
{
    int i,j,k,m=0;
    for(i=1;i<=21;i++)
    {
        i<=11?m++:m--;
        k=m-1;
        for(j=1;j<=21;j++){
            
            if(j>=12-m&&j<=10+m)
            {
                
                printf(" %d",j<11?k++%10:k--%10);
                
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        
    }
    return 0;
}

