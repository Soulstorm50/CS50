#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
      if (argc != 2) {
        printf("Error\n");
        return 1;
      } 
      
      int key = atoi(argv[1]);     
      int letterSize = 0;
      char ci = 0;
      string text = GetString();
            
      for(int i = 0; i < strlen(text); i++)
        {
        if (isalpha(text[i]))
            {
                if(islower(text[i]))
                    {
                        letterSize = 97;
                        int ti = text[i] - letterSize;
                        ci = ((ti + key) % 26) + letterSize;
                    }
                else //(islower(text[i]))
                     {
                        letterSize = 65;
                        int ti = text[i] - letterSize;
                        ci = ((ti + key) % 26) + letterSize;
                     }
            }
        else 
            {
                ci = text[i];               
            }      
                printf("%c", ci);
        }
        printf("\n");
        
return 0;
}
