/**
 * vigenere.c
 *
 * Igor Matkovic
 * igor@cod3.me
 *
 * Problem Set 2 - French Encript 
 */   

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



// Gets a value from a key
int get_key(char *key, int pos, int length)
{
    int i = pos % length;

    if (islower(key[i]))
    {
        return key[i] - 'a';
    }    
    else
    {
        return key[i] - 'A';
    }
}


int main(int argc, string argv[])
{
    
    // Check if we have the exact amount of params defined 
    if (argc != 2)
    {
        printf("Only 1 key argument needed\n");
        return 1;
    }
    
    
    char* key = argv[1];
    
    for (int i = 0, len = strlen(key); i < len; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Only alpha numeric key please\n");
            return 1;
        }
    }
    
    string str = GetString();
    
    
    int length = strlen(key);
    
    for (int i = 0, k = 0, n = strlen(str); i < n; i++)
    {
        if (isalpha(str[i]))
        {
            if (islower(str[i]))
            {
                str[i] = 'a' + (str[i] - 'a' + get_key(key, k, length)) % 26;
            }
            else if (isupper(str[i]))
            {
                str[i] = 'A' + (str[i] - 'A' + get_key(key, k, length)) % 26;
            }
            k++;
        }
    }
    
    
    printf("%s\n", str);
    return 0;
}
