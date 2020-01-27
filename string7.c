    #include <stdio.h>  
    #include <string.h>  
    #include <stdbool.h>  
       
    int main()  
    {  
        char s[]="naman";
        int l=strlen(s),i,flag=1,j;
       
        for(i=0;i<l/2;i++)
        {  
            j=s[l-i-1];
           
            if(s[i] != j)
            {  
                flag = 0;  
                break;  
            }  
        }
        if(flag==1)  
        printf("Given string is palindrome");  
        else  
        printf("Given string is not a palindrome");  
        return 0;  
    }  
