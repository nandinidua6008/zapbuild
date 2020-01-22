#include<stdio.h>
void main(){
int a=153,sum=0,rem,temp;
temp=a;
while (a>0){
rem=a%10;
sum=sum+rem*rem*rem;
a=a/10;
}
if (sum==temp){
printf("armstrong number");
}
else{
printf("not armstrong number");
}
}
