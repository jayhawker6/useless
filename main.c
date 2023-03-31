#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char buffer[BUFSIZ];

void eightloop(void)
{
    system("clear");
    int flag = 1;
    while (flag)
    {

        eightball();

        printf("Would you like to ask another question? (y/n): ");
        char choice[2];
        fgets(buffer, sizeof buffer, stdin);
        sscanf(buffer, "%s", choice);
        if (strcmp(choice, "n") == 0)
        {
            flag = 0;
        }
        else
        {
            system("clear");
        }
    }
}

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
        printf("9. Exit\n");
        printf("\nPlease enter your choice: ");
        fgets(buffer, sizeof buffer, stdin);
        sscanf(buffer, "%d", &choice);
        switch (choice)
        {
        case 1: // Magic 8-ball
            eightloop();
            break;
        case 2: // Coin flip
            coinflip();
            break;
        case 3: // Fortune cookie
            fortune();
            break;
        case 9: // Exit
            flag = 0;
            break;
        default: // Invalid choice
            break;
        }
    }
}