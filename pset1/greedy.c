#include <cs50.h>
#include <stdio.h>

int main(void)
{
printf("O hai! How much change is owed?\n");

float total = GetFloat();
while (total <= 0)
    {
        printf("How much change is owed?\n");
        total = GetFloat();
    }

int totalcents = total * 100;;
total = total * 100.00;
if ((total - totalcents) > 0.5)
{
totalcents++;
}

int c25 = 0;
int c10 = 0;
int c5 = 0;
int c1 = 0;

c25 = totalcents / 25;
totalcents = totalcents - (c25 * 25);

if (totalcents != 0) {
    c10 = totalcents / 10;
    totalcents = totalcents - (c10 * 10);
    }

if (totalcents != 0) {
    c5 = totalcents / 5;
    totalcents = totalcents - (c5 * 5);
    }

c1 = totalcents;

int answer = c25 + c10 + c5 + c1;
    
printf("%i\n", answer);
}
