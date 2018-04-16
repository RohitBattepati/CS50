#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    
    string s = get_string("Input: ");
    printf("Output: ");
    
    for(int i=0, n = strlen(s); i < n; i++){
        
        // given our string characters are between 'a' and 'z' , we are substracting the difference between the BIG and small numbers ascii i.e 32.
        if (s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i] - ('a' - 'A'));
        }else{
            printf("%c", s[i]);
        }
    }
    
    printf("\n");
}