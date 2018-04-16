#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int n;
    //get the user input
    do{
        n = get_int("Enter the height of the pyramid: ");
    }while(n<0 || n>=23);
    
    //for the number of iterations aka floors
    for(int i=1; i< n+1 ; i++){
        
        //for the number of bricks horizontally
        for (int j=0; j<= n+1 ; j++){
            
            //logic for numbers of bricks
            if(j > (n-i)){
                printf("#");
            }else{
                printf(" ");
            }
        }
        //for coming to next floor
        printf("\n");
    }
}