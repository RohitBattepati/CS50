#include<stdio.h>
#include<cs50.h>

int main(void){
    int n;
    
    do{
        n = get_int("Enter a positive number: ");
    }while(n<=0);
        for(int i=0; i<n; i++){
            
            for(int j=0; j<=i; j++){
                 printf("#");
            }
            
            printf("\n");
           
        }
    
}