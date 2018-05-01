#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void){

    //get a string
    char *s = get_string("string: ");
    
    if(!s){
        return 1;
    }

    //printing a string , one character per line
    
    for (int i = 0; n = strlen(s); i<n; i++){
        
        //*(s+i) is nothing but same as s[i] , that is just the fancier way to tell go to s+i position and get that address
        printf("%c\n", *(s+i));
    }


}