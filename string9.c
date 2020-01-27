    #include <stdio.h> 
    #include<string.h>
    int main()  
    {  
        int i, len,count=0;  
        char str[] = "nandini dua";  
          
        
        len = strlen(str);  
          
        for(i=0;i<len;i++){
            if(str[i]!=' '){
            count++;
            }
        }
        printf("total no of characters are %d ",count);
        return 0;  
    }  
