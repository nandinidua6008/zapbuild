    #include<stdio.h>  
    void main(){
        int i,j,x;
        char k;
        for(i=1;i<=4;i++)
        {
        k='A',x=1;
            for(j=1;j<=8;j++)
            {
                if(j>=5-i&&j<=4+i)
                {
                    if(j<=4){
                        printf("%c",k);
                        k++;
                        
                    }
                    else{
                        printf("%d",x);
                        x++;
                    }
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
