    #include<stdio.h>  
    void main(){
        int i,j,k,n,t;
        printf("enter limit\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
             k=1,t=1;
            for(j=1;j<=(n*2)-1;j++){
               
                if((j>=(n+1)-i)&&(j<=(n-1)+i)&&t)
               {
                   printf("%d",k);
                   k++;
                   t=0;
               }
                else{
                printf(" ");
                t=1;
                }
            }
            printf("\n");
        }
    }
