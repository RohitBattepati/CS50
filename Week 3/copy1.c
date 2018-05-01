//program to compare two strings and capitalize the reuslt


#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void){
    
    //get a string
    char *s = get_string("S: ");
    //just to make sure that we are entering a string of finite memory

    // if (s == NULL )
    if(!s){
        return 1;
    }
    
    //allocate memory for another string 
    char *t = malloc((strlen(s) + 1) * sizeof(char));
    if(!t){
        return 1; 
    }
    
    //copy the string into memory. 
    //we are doing i<=n because we want to include the NUL value i.e \0 also 
    
    for ( int i = 0, n = strlen(s); i<=n; i++){
        
        t[i] = s[i];
    }
    
    //capitalize the first letter in copy
    if(strlen(t) > 0){
        
        t[0] = toupper(t[0]);
    }
    
    //print strings 
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}