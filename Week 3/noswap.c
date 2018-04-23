#include<stdio.h>
//initialising the swap funcitons here because we are using it before actually defining the function
void swap(int a, int b);

int main(void){
    
    int x = 1;
    int y = 2;
    
    //printing the actual values
    printf("x is %i, y is %i\n",x,y);
    
    //applying the funciton swap
    swap(x,y);
    
    //printing the swapped values
    printf("x is %i, y is %i\n",x,y);
}

//defining the swap function
void swap(int a, int b){
    
    int temp = a;
    a = b;
    b = temp;
   
}

//program doesnt work as we cannot compare
// 2 strings in C. 