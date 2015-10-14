/**
 * caesar.c
 *
 * Igor Matkovic
 * igor@cod3.me
 *
 * Problem Set 2 - Caesar encription
 */   

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    // Check if we have the exact amount of params defined 
    if (argc != 2)
    {
        printf("Only 1 key argument needed\n");
        return 1;
    }
    
    int key = atoi(argv[1]);
    
    if (key > 26)
    {
        key = key % 26;
    } 
    else if(key < 0)
    {
        printf("Not Valid Key\n");
        return 1;
    }
    
    
    
    string words = GetString();

    int lenght = strlen(words);
    
    if (lenght < 1)
    {
        return 0;
    }
    
    
    for (int i = 0; i < lenght; i++)
    {
        if (isalpha(words[i]))
        {
         
            if (islower(words[i]))
            {   
                printf("%c", ((words[i] - 97 + key) % 26) + 97);
            }
            else
            {
                printf("%c", ((words[i] - 64 + key) % 26) + 64);
            }
        }
        else
        {
            printf("%c",words[i]);
        }
    
    }
    
    printf("\n");
    return 0;
}
