#include <stdio.h>
int main() {

  char line[200];
  int count = 0;
  int i;

  int vowels = 0;


  printf("Enter a line of string: ");
  scanf("%[^\n]line", line);

 
  for (i = 0; line[i] != '\0'; ++i) {
       
    if (line[i] == ' ' && line[i+1] != ' ') {
            count++;
             }
    
   else if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {

     
      vowels++;
        
     }
     
  
  }
  

{
 printf("Length of the sentence: %d", i); 
 

 
 printf("Number of words in the sentence: %d\n", count + 1);
    
    
    

  printf("Number of Vowels of the sentence: %d", vowels);

  

  return 0;
}}
