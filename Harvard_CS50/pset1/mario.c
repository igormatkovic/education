/**
 * mario.c
 *
 * Igor Matkovic
 * igor@cod3.me
 *
 * Problem Set 1 - Mario Piramid Problem
 */  

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

void piramidLines(int, int);
void printLine(string);

int main(void)
{
    int height = 1;
    do 
    {
        if (height) 
        {
            printf("Height:");
        } 
        else 
        {
            printf("Retry:");
        }
		
        height = GetInt();git 
	} 
	while (height < 1 || height > 23);

    for(int i = 0; i < height; i++) 
    {
        piramidLines(i, height);
    }
}
/*
 * Draw piramid lines
 */
void piramidLines(int blocks, int total)
{

    // Print out empty blocks first since the piramid is inverted
    int empty_blocks = total - blocks;

    for(int i = 0; i <= empty_blocks; i++) 
    {
        printf(" ");
    }

    for(int i = 0; i <= blocks; i++) 
    {
        printf("#");
    }
    // Allways finish with a extra Hash
    printf("#\n");
}

/*
 * Write a new Line in terminal
 */
void printLine(string line)
{

    printf(" %s ", line);

}
