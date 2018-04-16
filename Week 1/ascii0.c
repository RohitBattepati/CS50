 #include <cs50.h>
 #include <string.h>
 #include <stdio.h>
 
 int main(void){
  
  string s = get_string("Name: ");
  printf("The characters and their ASCII values are: \n");
  
  
  // %c and %i because we are returning a character and an integer . s[i] , (int)s[i] is targeting element wise and the int version of that element which is 
  //nothing but a ascii number
  for (int i=0; i<strlen(s); i++){
   printf("%c %i\n", s[i], (int)s[i]);
  }
 }