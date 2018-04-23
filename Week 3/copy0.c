#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(void){
    
    string s = get_string("S: ");
    
    string t = s;
    
    //we are doing the strlen here just to make sure an actual string is entered.
    //an empty string can be initiated just by hitting enter and it takes an extra bye for \n
    if( strlen(t) > 0){
        t[0] = toupper(t[0]);
    } 
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}