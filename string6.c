
#include<stdio.h> 
int main() 
{ 
  char *str1 = "geeks"; 
  char *str2 = "forgeeks"; 
  char *temp = str1; 
 printf("before swapping\nstr1 is %s, str2 is %s\n", str1, str2); 
  str1 = str2; 
  str2 = temp;
  printf("after swapping\nstr1 is %s, str2 is %s\n", str1, str2); 
  getchar(); 
  return 0; 
} 

