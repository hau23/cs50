#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
            printf("Usage: ./caesar key\n");
            return 1;
            }
        }
        
        int key = atoi(argv[1]);
        
        string pText = get_string("plaintext: ");
        printf("ciphertext: ");
        
        for (int i = 0, n = strlen(pText); i < n; i++)
        {
            if (isalpha(pText[i]))
            {
                if (pText[i] >= 'A' && pText[i] <= 'Z')
                {
                    printf("%c", (((pText[i] - 65 + key) % 26) + 65));
                    
                }
                else if (pText[i] >= 'a' && pText[i] <= 'z' )
                {
                    printf("%c", (((pText[i] - 97 + key) % 26) + 97));
                }
            }
            else
            {
                printf("%c", pText[i]); 
            }
            
        }
         printf("\n");
         return 0;
    }    
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}