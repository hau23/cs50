#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    {

        int n = strlen(argv[1]);
        
        if (n == 26)
        {
           for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (argv[1][i] == argv[1][j])
                    {
                        printf("Usage: ./substitution key\n");
                        return 1;
                    }
                }
            
                if (isalpha(argv[1][i]) == false)
                {
                    printf("Usage: ./substitution key\n");
                    return 1;
                }
            } 
        }
        else 
        {
            printf("Key must contain 26 characters.\n");
            return 1; 
        }
    }
    else 
        {
            printf("Usage: ./substitution key\n");
            return 1; 
        }
        
     string pText = get_string("plaintext: ");
     printf("ciphertext: ");
     
     int num = 0;
     
      for (int g = 0, h = strlen(pText); g < h; g++)
        {
            if (isalpha(pText[g]))
            {
                if (pText[g] >= 'A' && pText[g] <= 'Z')
                {
                    num = pText[g] - 65;
                    
                    if (argv[1][num] >= 'a' && argv[1][num]<= 'z')
                    {
                        printf("%c", argv[1][num] - 32);
                    }
                    else
                    {
                        printf("%c", argv[1][num]);
                    }
                }
                
                else if (pText[g] >= 'a' && pText[g] <= 'z' )
                {
                    num = pText[g] - 97;
                    
                    if (argv[1][num] >= 'A' && argv[1][num]<= 'Z')
                    {
                        printf("%c", argv[1][num] + 32);
                    }
                    else
                    {
                        printf("%c", argv[1][num]);
                    }
                    
                }
            }
            else
            {
                printf("%c", pText[g]); 
            }
            
        }
         printf("\n");
         return 0;
}