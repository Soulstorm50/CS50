#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Height: ");
    int lines = GetInt();
        while (lines < 0 || lines > 23)
            {
                printf("Retry: ");
                lines = GetInt();
            }
int width = lines + 1;
int counthash = 1;
for(int i = 0; i < lines; i++) {
    counthash++;
        for(int j = width; j > 0; j--)
            {
                
                if (j <= counthash) {
                    printf("#");
                } else {
                printf(" ");
                       }
            }
        printf("\n");
    }
}
