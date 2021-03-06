/**
 * greedy.c
 *
 * Igor Matkovic
 * igor@cod3.me
 *
 * Problem Set 1 - Greedy cashier Problem
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int inAmount(int, int);
void printLine();

int main(void)
{
    int quarter     = 25;
    int dime        = 10;
    int nickle      = 5;
    int pennie      = 1;

    int coins       = 0;
    float change    = 0;


    do
    {
        printLine("O hai!  How much change is owed?");

        change = round(100 * GetFloat());
	}
    while (change <= 0);


    int quarters = inAmount(change, quarter);

    if (quarters > 0)
    {
        change = change - (quarters * quarter);
        coins += quarters;
    }


    int dimes = inAmount(change, dime);

    if (dimes > 0)
    {
        change = change - (dimes * dime);
        coins += dimes;
    }


    int nickles = inAmount(change, nickle);

    if (nickles > 0)
    {
        change = change - (nickles * nickle);
        coins += nickles;
    }


    int pennies = inAmount(change, pennie);

    if (pennies > 0)
    {
        change = change - (nickles * pennie);
        coins += pennies;
    }
    
    printf("%d\n", coins);

}

/**
 * Returns amount of coins that can fit in the remainding value .
 */
int inAmount(int amount, int coin_value)
{
    int coins = (amount / coin_value);
    
    return coins;
}

/**
 * Print a single line with printf()
 */
void printLine(string line)
{
    printf(" %s ", line);
}
