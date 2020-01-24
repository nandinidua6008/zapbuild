    #include<stdio.h>  
    void main ()  
    {  
        char s[3][10];
        int i;
        printf("Enter 3 string? \n");  
        for(i=1;i<=3;i++)
        {
        gets(&s[i][0]);  
        }
       printf("\nstring entered is \n");
        for(i=1;i<=3;i++)
        printf("%s\n",s[i]);
    }  
