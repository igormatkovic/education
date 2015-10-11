/**
 * initials.c
 *
 * Igor Matkovic
 * igor@cod3.me
 *
 * Problem Set 2 - Print out Initials based on the inputed Name
 */   

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();

    int lenght = strlen(name);
    
    if (lenght < 1)
    {
        return 0;
    }
    
    bool first = true;
    
    for (int i = 0; i < lenght; i++)
    {
        if (name[i] == ' ')
        {
            first = true;
        } 
        else 
        {
            if (first)
            {
                printf("%c",toupper(name[i]));
            }
            first = false;
        }
    }
    
    printf("\n");
}
