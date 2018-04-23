#include<stdio.h>
#include<cs50.h>
#include<string.h> 

int main(void){
    
    char *s = get_string("S: ");
    char *t = get_string("T: ");
    
    if(s == t){
        
        printf("same\n");
    }else{
        
        printf("Different\n");
    }
    
}