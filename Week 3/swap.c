#include <cs50.h>

int main(void){
    
    printf("x is %i, y is %i\n", x , y);
    swap( &x , &y);
    printf("X is %i, y is %i\n", x , y);
}

//comparing using the addresses of a and b
void swap(int *a, int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}