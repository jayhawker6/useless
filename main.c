#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char buffer[BUFSIZ];

int main(void)
{
    int flag = 1;
    while (flag)
    {
        int choice = -1;
        system("clear");
        printf("Welcome to the useless machine!\n");
        printf("1. Magic 8-ball\n");
        printf("2. Coin flip\n");
        printf("3. Fortune cookie\n");
        printf("4. Tech Support\n");
        printf("9. Exit\n");
        printf("\nPlease enter your choice: ");
        fgets(buffer, sizeof buffer, stdin);
        sscanf(buffer, "%d", &choice);
        switch (choice)
        {
        case 1: // Magic 8-ball
            eightball();
            break;
        case 2: // Coin flip
            coinflip();
            break;
        case 3: // Fortune cookie
            fortune();
            break;
        case 4: // Tech Support
            techsupport();
            break;
        case 9: // Exit
            flag = 0;
            break;
        default: // Invalid choice
            break;
        }
    }
}