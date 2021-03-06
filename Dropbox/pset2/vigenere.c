#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main (int argc, string argv[])
{
    // checking for only 2 cmd line args
    if (argc != 2)
    {
        printf("No no no! Not in my house!\n");
        return 1;
    }
    
    /*  verify keyword is composed of alphabetical characters
        (note: attempting if (argc != 2 || isalpha(argv[1]) != true)
        in above if statement resulted in segfaults); had to separate
    */        
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if ((isalpha(argv[1][i])) == false)
        {
            printf("No no no! Not in my house!\n");
            return 1;
        }
    }
    
    // create array of length k to store all keys
    string k = argv[1];
    int n = strlen(argv[1]);
    int ciph[n];
    int ciphlen = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (islower(k[i]))
        {
            ciph[i] = k[i] - 97;
        }
        else
        {
            ciph[i] = k[i] - 65;
        }
        ciphlen++;
    }
  
    //printf("Hand me a string, good sir or madam!\n");
    string p = GetString();
    
    // iterate through string encoding each letter by array index 
    int index = 0;
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (islower(p[i]))
        {
            // formula for caesar's cipher: c = (p + k) % 26
            int new = p[i] + (ciph[index % ciphlen]);
            index++;
            
            // to wrap letters back around
            if (new > 122)
            {
                new = new - 26;
            }
            printf("%c", new);
        }
            
        else if (isupper(p[i]))
        {
            //apply cipher and wrap letters
            int new = p[i] + (ciph[index % ciphlen]);
            index++;
            
            if (new > 90)
            {
                new = new - 26;
            }
            printf("%c", new);
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
}
