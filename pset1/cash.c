#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    float n;
    do
    {
    n = get_float("Change:");
    }
    while (n < 0);

    int c = round (n * 100); 
    
    int i;
    i = 0;

    while (c > 0)
    {
    if (c >= 25)
    {
        c = c - 25;
        i++;
    }
    else if (25 > c && c >= 10)
    {
        c = c - 10;
        i++;
    }
    else if (10 > c && c >= 5)
    {
        c = c - 5;
        i++;
    }
    else if (5 > c && c >= 1)
    {
        c = c - 1;
        i++;
    }
    }   
        
    printf("%i\n", i);

}
