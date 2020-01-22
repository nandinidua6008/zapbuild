    #include<stdio.h>  
    void main(){
        int i,j,sum;
        for(i=1;i<=10;i++){
            for(j=1;j<=10;j++){
                sum=i*j;
                printf("%d\t",sum);
            }
            printf("\n");
        }
    }
