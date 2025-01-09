#include <stdio.h>
#include <stdlib.h> 

/**
 * main - Calculates the minimum number of coins needed for change.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 if successful, 1 if error occurs.
 */
int main(int argc, char *argv[])
{
    int cents, coins = 0;
    int coin_values[] = {25, 10, 5, 2, 1}; 

    
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

  
    cents = atoi(argv[1]);

   
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    
    for (int i = 0; i < 5; i++)
    {
        coins += cents / coin_values[i];  
        cents %= coin_values[i]; 
    }

   
    printf("%d\n", coins);
    return 0;
}

