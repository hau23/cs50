#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long n;
    n = get_long_long("Number:");

    int count = 0;
    long divisor = 10;
    int sum = 0;
    
    
    // second to last digit
    long long workingN = n / 10;
    while (workingN > 0)
    {
        int lasttwodigit = workingN % 10;
        int multiplydigit = lasttwodigit * 2;
        sum = sum + (multiplydigit / 10) + (multiplydigit % 10);
        workingN = workingN / 100;
    }
    
    // last digit
    long long workingNN = n;
    while (workingNN > 0)
    {
        int lastdigit = workingNN % 10;
        sum = sum + lastdigit;
        workingNN = workingNN / 100;
    }
    
    // length of the number
    long long workingNNN = n;
    while (workingNNN != 0)
    {
        workingNNN = workingNNN / 10;
        count++;
    }
    
    // divisor
    for (int i = 0; i < count - 2; i++)
    {
        divisor = divisor * 10;
    }

    int Firstdigit = n / divisor;
    int Firsttwodigit = n / (divisor / 10);
    
    if (sum % 10 == 0)
    {  
        if (count == 15 && (Firsttwodigit == 34 || Firsttwodigit == 37))
        {
            printf("AMEX\n");
        }
        else if (count == 16 && (Firsttwodigit > 50 && Firsttwodigit < 56))
        {
            printf("MASTERCARD\n");
        }
        else if ((count == 13 || count == 16) && Firstdigit == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    
}
