#include<stdio.h>
int main(){
    int i;
    char s[10]={'n','a','n','d','i','n','i'};
    for (i=0;s[i]!='\0';i++){
        printf("%d %c\n",i,s[i]);
    }
    return 0;
}
