    #include<stdio.h>  
    void main(){
        int i,j,k,n;
        printf("enter limit\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
             k=1;
            for(j=1;j<=(n*2)-1;j++){
               
                if((j>=(n+1)-i)&&(j<=(n-1)+i))
               { printf("%d",k);
                j<n?k++:k--;}
                else{
                printf(" ");
                }
            }
            printf("\n");
        }
    }
