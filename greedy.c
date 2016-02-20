/**************************************************************************
 * greedy.c
 *
 * Maria Mayskaya
 * mashamay@gmail.com
 *
 * Counts a number of coins
 ***************************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <math.h> 

int main(void)
{
    float f = 0;
    
    do
    {
        printf("hai! How much change is owed? ");
        f = GetFloat();
    }
    while (f < 0.00);
    
    // round and change to cents
    int change = roundf(f * 100);
    
    // add coin counter
    int coinCount = 0;
    
    // add coin values
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int cent = 1;
       
    // check quarters
    if (change % quarter != 0)
    {
        coinCount = coinCount + (change / quarter);
        change = change - quarter * (change / quarter);
    }
    else 
    {
        coinCount = coinCount + (change / quarter);
        printf("%i\n", coinCount);
        return 0;
    }    

    // check dimes
    if (change % dime != 0)
    {
        coinCount = coinCount + (change / dime);
        change = change - dime * (change / dime);
    }
    else 
    {
        coinCount = coinCount + (change / dime);
        printf("%i\n", coinCount);
        return 0;
    }          
    
    // check nickels
    if (change % nickel != 0)
    {
        coinCount = coinCount + (change / nickel);
        change = change - nickel * (change / nickel);
    }
    else 
    {
        coinCount = coinCount + (change / nickel);
        printf("%i\n", coinCount);
        return 0;
    } 
    
    // check cents
    coinCount = coinCount + (change / cent);
    change = change - cent * (change / cent);
    printf("%i\n", coinCount);
    
    return 0;   
}
