#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main (int argc, string argv[])
{
    // checking for only 2 cmd line args
    if (argc != 2 || argv[1] < 0) 
    {
        printf("No no no! Not in my house!\n");
        return 1;
    }
    
    // create array of length k to store all keys
    string k = argv[1];
    int n = strlen(k);
    int ciph[n];
    int ciphlen = 0;
    
    for (int i = 0; i < n; i++)
    {
        int j = atoi(&k[i]);
        ciph[i] = j;
        ciphlen++;
    }
    printf("%d\n", ciphlen);
  
    //printf("Hand me a string, good sir or madam!\n");
    string p = GetString();
    
    /*
    // iterate through string, encode by ROTk
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (islower(p[i]))
        {
            // formula for caesar's cipher: c = (p + k) % 26
            int new = p[i] + (k % 26);
            
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
            int new = p[i] + (k % 26);
            
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
    */
}