/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void quick(int a[],int n,int beg,int end,int *locptr){
    int left,right,temp;
    left=beg;
    right=end;
    *locptr=beg;
    step2:
    while(a[locptr]<=a[right]&&locptr!=right){
        right--;
    }
    if(locptr==right){
        return;
    }
    if(a[locptr]>a[right]){
        temp=a[locptr];
        a[locptr]=a[right];
        a[right]=temp;
        locptr=right;
    }
    goto step3;
    step3:
    while(a[left]<=a[locptr]&&left!=locptr){
        left++;
    }
    if(locptr==left){
        return;
    }
    if(a[left]>a[locptr]){
        temp=a[left];
        a[left]=a[locptr];
        a[locptr]=temp;
        locptr=left;
    }
    goto step2;
}
void quick_sort(int a[],int n){
    int top=-1,beg,end,loc;
    int lower[10],upper[10];
    if(n>1){
        top=top++;
        lower[top]=0;
        upper[top]=n-1;
    }
    while(top!=-1){
        beg=lower[top];
        end=upper[top];
        top--;
        quick(a,n,beg,end,&loc);
        if(beg<loc-1){
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if(loc+1<end){
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }
    }
}
int main()
{
    int i,size,a[12]={44,33,11,55,77,90,40,60,99,22,88,66};
    size=sizeof(a)/sizeof(a[0]);
    quick_sort(a,size);
    for(i=0;i<size;i++){
    printf("%d\t",a[i]);
    }
    return 0;
}

