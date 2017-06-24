#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
      if (argc != 2) {     //Only one argument check
            printf("Error\n");
            return 1;
        }
     
      string key = argv[1];
      
      for(int i = 0; i < strlen(key); i++) { //Only alphabet character check
            if (!isalpha(key[i])) {
            printf("Error. Non alphabet character in keyword.\n");
            return 1;
        }
    }
      
      string text = GetString();
      
      char ci = 0;
      char pi = 0;
      char kj = 1;
      int alpha = 0;
      int j = 0;
      
      for(int i = 0; i < strlen(text); i++) {
        
        if(isalpha(text[i])) {
            int letter = text[i];
            if (islower(letter)) {
                alpha = 97;
            } else {
                alpha = 65;
            }
        
        pi = text[i] - alpha;
        kj = key[j % strlen(key)] - (islower(key[j % strlen(key)]) ? 97 : 65);
        j++;
        
        ci = ((pi + kj) % 26) + alpha;
        //(((pi - alpha) + (kj - alpha)) % 26) + alpha;
        }
        else {
            ci = text[i];
        }
        printf("%c", ci);
      }
      
     
      
      printf("\n");  
      
      
return 0;
}
