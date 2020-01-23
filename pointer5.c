    #include<stdio.h>  
    int main(){  
    int a[10] = {1100, 206, 30, 409, 59, 601},i,j,temp,x,y; 
    int *ptr=a;
    for (i = 0; i < 6; i++) { 
  
        for (j = i + 1; j < 6; j++) { 
             /*access the elements of the array using (pointer + index) format.
            x=*(ptr + j),y=*(ptr + i);
            printf("x=%d,y=%d\n",x,y);*/
            if ( x< y) { 
  
                temp = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = temp; 
            } 
        } 
    } 
    for (i = 0; i < 6; i++) 
        printf("%d ", *(ptr + i)); 

    return 0;
    }  
