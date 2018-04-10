#include<stdio.h>
#include<cs50.h>

int square(int x);

int main(void){
    
    int x = get_int("x: ");
    
    printf("%i\n", square(x));
}


int square(int x){
    return x*x;
}