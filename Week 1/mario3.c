#include<stdio.h>
#include<cs50.h>

int main(void){
    //prompt user for positive number
    
    int n;
    do{
        n= get_int("Enter a positive number: ");
    }while(n <= 0);
    
    //print out that many blocks
 
    for(int i = 0; i<n; i++){
        
        printf("#\n");
    }
}