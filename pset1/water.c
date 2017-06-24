#include <cs50.h>
#include <stdio.h>

int main(void)
{
printf("waterminutes: ");
int minutes = GetInt();

minutes = minutes * 6 * 2;

printf("bottles: %i\n", minutes);
}
