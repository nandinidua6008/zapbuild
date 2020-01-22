#include<stdio.h>
void main(){
int sum,num,temp,rem;
printf("enter a  number");
scanf("%d",&num);
temp=num;
while(num>0){
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
if(sum==temp){
printf("palindrome number");
}
else
{printf("not palindrome number");

}
}
