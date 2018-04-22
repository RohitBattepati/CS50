#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void){
    
    string name = get_string("Name: ");
    //char because we are targeting each and every character in the array
    char initials[4];
    
    int counter = 0;
    for (int i=0; i<strlen(name); i++){
        if (isupper(name[i])){
            
            //we are putting the capital letter
            //captured by isupper in the initials array
            initials[counter] = name[i];
            
            
            //incrementing counter so that the next letter 
            //captured will go into the next position in initials array
            counter++;
        }
    }
    
    //coding the last element as \0 as it is for any strings
    initials[counter] = '\0';
    printf("%s\n", initials);
}