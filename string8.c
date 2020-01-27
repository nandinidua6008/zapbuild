#include<stdio.h>
#include<string.h>
#include<iostream>
int main()
{
    int index = 0;    
    char str[]= "geeksforgeeks"; 
    int m=strlen(str);
    int j;  
   
   for (int i=0; i<=m; i++) {
        for (j=0; j<i; j++){
           if (str[i] == str[j]) 
           break; 
        }
        if (j == i) 
        str[index++] = str[i]; 
   } 
    printf("%s",str);
   return 0;
}
