    #include<stdio.h>  
    int main(){    
    int a,b,c,i,j,temp1,temp2,n;    
    printf("Enter 2 number for fibonacci:\n");    
    scanf("%d%d",&a,&b);
    printf("Enter a number for fibonacci limit:\n");    
    scanf("%d",&n);
    temp1=a;
    temp2=b;
    for(i=1;i<=n;i++){
        a=temp1,b=temp2;
        printf("%d",b);
        for(j=1;j<i;j++){
           c=a+b;
           printf("\t%d",c);
           a=b;b=c;
        }
        printf("\n");
    }
    return 0;  
     }    
