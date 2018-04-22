#include<cs50.h>
#include<stdio.h>

int sigma(int m);

int main(void){
    
    int n;
    do{
        n = get_int("positive integer: ");
    }while ( n<1);
    
    int answer = sigma(n);
    printf("%i\n",answer);
}


//Returns sum of 1 through m
int sigma(int m){
    if(m <0){
        return 0;
    }else{
        
        //adding m and then moving to sigma 9 , next round adding 9 and going to sigma8 and so o 
        return( m + sigma(m-1));
    }
}