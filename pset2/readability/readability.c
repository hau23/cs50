#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void)
{ 
    float sumL = 0;
    float sumW = 1;
    float sumS = 0;
    float L = 0;
    float S = 0;
    float index = 0;
    
    string t = get_string ("Text: ");
    
    // count letters & words & sentences
    for (int i = 0, n = strlen (t); i < n; i++ )
    {
        if ((t[i] >= 65 && t[i] <= 90) || (t[i] >= 97 && t[i] <= 122))
        {
            sumL++;
        }
        
        if (t[i] == 32)
        {
            sumW++;
        }
        
        if (t[i] == 33 || t[i] == 46 || t[i] == 63)
        {
            sumS++;
        }
    }
    
    // calculate Coleman-Liau index
    L = (sumL / sumW) * 100;
        
    S = (sumS / sumW) * 100;
        
    index = 0.0588 * L - 0.296 * S - 15.8;
    
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.00f\n", round(index)); 
        return 0;
    }
}