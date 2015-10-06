/**
  * Author: Igor Matkovic
  *
  * mario.c
  * Problem Set 1 - Mario Piramid Problem
  */

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

void piramidLines(int, int);
void printLine(string);


int main(void) {

    int height;

    do {

        if(height) {
            printf("Height: ");
        } else {
            printf("Retry: ");
        }

		height = GetInt();

	} while (height < 1 || height > 23);

    for(int i = 0; i < height; i++) {
       piramidLines(i, height);
    }
}

void piramidLines(int blocks, int total) {

    // Print out empty blocks first since the piramid is inverted
    int empty_blocks = total - blocks;

    for(int i = 0; i <= empty_blocks; i++) {
        printf(" ");
    }

    for(int i = 0; i <= blocks; i++) {
        printf("#");
    }
    //Allways finish with a extra Hash
    printf("#");

    printf("\n");

}


void printLine(string line) {

    printf(" %s ", line);

}
