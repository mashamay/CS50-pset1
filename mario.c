/****************************************************************************
 * mario.c
 *
 * Maria Mayskaya
 * mashamay@gmail.com
 *
 * Builds a pyramid of hasgtags with user defined number of rows
 ***************************************************************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0;
    
    do
    {
        printf("Give me a non-negative integer no greater than 23: ");
        n = GetInt();
    }
    while (n < 0 || n > 23);
        
    // repeat rows n-1 times
    for (int row = 0; row < n; row++)
    {
        // insert spaces
        for (int count = 0; count < n - row - 1; count++) 
            printf(" ");
            
        // insert hashtags    
        for (int count = 0; count < row + 2; count++) 
            printf("#");
            
        printf("\n");
     }
    return 0;
}
