#include<stdio.h>
void main()
{
    char str[10],*ptr;
    printf("enter a string of length 10\n");
    gets(str);
    ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        *ptr++;
    }
}
