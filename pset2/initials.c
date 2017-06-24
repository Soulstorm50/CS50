#include <cs50.h>
#include <stdio.h>
#include <string.h>

char toUpper(char ch);

int main(void)
{
string name = GetString();

printf("%c", toUpper(name[0]));
for(int i = 0; i < strlen(name); i++) {
if (name[i] == 32) {
            printf("%c", toUpper(name[i+1]));
             
    }
    
}
printf("\n");

}

char toUpper(char ch) {
char chUpper = ch;
if (ch >= 97 && ch <= 122) {
chUpper = chUpper - 32;
}
return chUpper;
}
