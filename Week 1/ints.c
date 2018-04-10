#include<stdio.h>
#include<cs50.h>

int main(void){
    
    int x = get_int();
    printf("First number: %i\n", x);
    
    int y = get_int();
    printf("First number: %i\n", y);
    
    //Arthimetic Operations
    
    printf("%i plus %i is %i\n",x,y,x+y);
    printf("%i minus %i is %i\n",x,y,x-y);
    printf("%i multiply %i is %i\n",x,y,x*y);
    printf("%i Divide %i is %i\n",x,y,x/y);
    
}
