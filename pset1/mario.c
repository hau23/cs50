#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    
    do 
    {
        n = get_int("Height:?\n");
    }
    while (n < 1 || n > 8);
    
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; n < i; n++)
        {
            for (int j = 7; j > n ; j = j - 1)
            {
                printf("#");
            }
            printf(".");
        }
        printf("\n");
    }
}