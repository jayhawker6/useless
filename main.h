#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buffer[BUFSIZ];

void eightball(void)
{
    int number;
    char result[100] = {0};

    printf("\nAsk the magic 8-ball a question: ");
    fgets(buffer, sizeof buffer, stdin);
    fflush(stdin);

    number = rand() % 30 + 1;

    switch (number)
    {
    case 1:
        strcpy(result, "It is uncertain.");
        break;
    case 2:
        strcpy(result, "It is not decidedly so.");
        break;
    case 3:
        strcpy(result, "Without no doubt.");
        break;
    case 4:
        strcpy(result, "It is not for me to say.");
        break;
    case 5:
        strcpy(result, "You may or may not rely on it. It's up to you.");
        break;
    case 6:
        strcpy(result, "Your answer is hazy, try again.");
        break;
    case 7:
        strcpy(result, "Ask again later.");
        break;
    case 8:
        strcpy(result, "Better not tell you now.");
        break;
    case 9:
        strcpy(result, "Your 8 ball subscription has run out! Please pay $9.99 to your local rep to reactivate.");
        break;
    case 10:
        strcpy(result, "Concentrate and ask again.");
        break;
    case 11:
        strcpy(result, "I am so sorry, I can't tell you that.");
        break;
    case 12:
        strcpy(result, "My sources have a lot of information, but not on that.");
        break;
    case 13:
        strcpy(result, "Outlook on my abilities is not so good, sorry.");
        break;
    case 14:
        strcpy(result, "Who knows?");
        break;
    case 15:
        strcpy(result, "I'm not sure.");
        break;
    case 16:
        strcpy(result, "I don't know.");
        break;
    case 17:
        strcpy(result, "Buy a new 8 ball, this one is broken thanks to you.");
        break;
    case 18:
        strcpy(result, "I'm not sure, but I'm sure you're not sure.");
        break;
    case 19:
        strcpy(result, "Outlook uncertain, source responded with \"ERROR 404, Please contact administrators.\".");
        break;
    case 20:
        strcpy(result, "I'm not sure, but maybe the true answer is in the friends we made along the way");
        break;
    case 21:
        strcpy(result, "Can't tell you now, I'm busy.");
        break;
    case 22:
        strcpy(result, "Shaking was too violent, please try again.");
        break;
    case 23:
        strcpy(result, "Did not shake, please try again.");
        break;
    case 24:
        strcpy(result, "Did not shake hard enough, please try again.");
        break;
    case 25:
        strcpy(result, "Please check your 8 ball for any cracks or damage, then try again.");
        break;
    case 26:
        strcpy(result, "Unable to read, please try again.");
        break;
    case 27:
        strcpy(result, "Question not clear, please try again.");
        break;
    case 28:
        strcpy(result, "Question was not sophisticated enough, please try again.");
        break;
    case 29:
        strcpy(result, "ERROR: Segmentation fault predicted due to not enough memory, please download more RAM.");
        break;
    case 30:
        strcpy(result, "I attempted to find what you seek, but it was too complex for a mere mortal like you.");
        break;
    default:
        break;
    }
    printf("You shake the magic 8-ball and it says: %s\n", result);
}

void coinflip(void)
{
    int flag = 1;
    while (flag)
    {
        char input[20];
        system("clear");
        printf("\nPick a side of the coin: ");
        fgets(buffer, sizeof buffer, stdin);
        sscanf(buffer, "%s", input);
        if (strcmp(input, "heads") == 0)
        {
            flag = 0;
        }
        else if (strcmp(input, "tails") == 0)
        {
            flag = 0;
        }
        else
        {
            printf("Invalid input, please try again.\n");
            fgets(buffer, sizeof buffer, stdin);
        }
    }
    printf("You flip the coin and it lands on...\n");
    fgets(buffer, sizeof buffer, stdin);
    printf("Its side! What are these chances!?\n");
    flag = 1;
    while (flag)
    {
        printf("\nWould you like to flip the coin again? (y/n): ");
        char input[5];
        fgets(buffer, sizeof buffer, stdin);
        sscanf(buffer, "%s", input);
        if (strcmp(input, "y") == 0)
        {
            flag = 0;
            coinflip();
        }
        else if (strcmp(input, "n") == 0)
        {
            flag = 0;
        }
        else
        {
            printf("Invalid input, please try again.\n");
            fgets(buffer, sizeof buffer, stdin);
        }
    }
}

void fortune(void)
{
    system("clear");
    int flag = 1;
    while (flag)
    {
        int number;
        char result[250];

        printf("\nCome to the magic fortune cookie for all your advice!\n");
        fgets(buffer, sizeof buffer, stdin);
        fflush(stdin);

        number = rand() % 30 + 1;

        switch (number)
        {
        case 1:
            strcpy(result, "You will never be rid of your crippling depression.");
            break;
        case 2:
            strcpy(result, "You will never lose that crippling student loan debt.");
            break;
        case 3:
            strcpy(result, "Someone will always be better than you.");
            break;
        case 4:
            strcpy(result, "You will ultimately die alone.");
            break;
        case 5:
            strcpy(result, "Humans will go extinct before you find your true love.");
            break;
        case 6:
            strcpy(result, "A wise man once said, \"Life is meaningless.\"");
            break;
        case 7:
            strcpy(result, "Failure is inevitable.");
            break;
        case 8:
            strcpy(result, "Death comes to those who wait.");
            break;
        case 9:
            strcpy(result, "Depression is a disease, and you have it.");
            break;
        case 10:
            strcpy(result, "Evil will always triumph over good.");
            break;
        case 11:
            strcpy(result, "Love is a lie, and you will never find it.");
            break;
        case 12:
            strcpy(result, "Life is a sham.");
            break;
        case 13:
            strcpy(result, "Why are you still reading this?");
            break;
        case 14:
            strcpy(result, "Never give up. It's funny because you will never succeed.");
            break;
        case 15:
            strcpy(result, "Inspiration fails you.");
            break;
        case 16:
            strcpy(result, "Hope is a construct that you will never understand.");
            break;
        case 17:
            strcpy(result, "Abandon your dreams, they will never come true.");
            break;
        case 18:
            strcpy(result, "Death is the only escape.");
            break;
        case 19:
            strcpy(result, "A fish is a fish, but a fish is not a fish.");
            break;
        case 20:
            strcpy(result, "Understanding is a concept that you will never grasp.");
            break;
        case 21:
            strcpy(result, "You will be woefully unsuccessful in your endeavors.");
            break;
        case 22:
            strcpy(result, "You will never be successful in your endeavors.");
            break;
        case 23:
            strcpy(result, "Nothing hurts more than the realization that nothing matters.");
            break;
        case 24:
            strcpy(result, "You will find love, but then lose it when it hurts the most.");
            break;
        case 25:
            strcpy(result, "Losing is the only way to win. You will never win, because you never try.");
            break;
        case 26:
            strcpy(result, "You will seek higher education, but you will never graduate.");
            break;
        case 27:
            strcpy(result, "Many wise people have avoided you recently.");
            break;
        case 28:
            strcpy(result, "Riches are on your horizon, but you are too far away to see them.");
            break;
        case 29:
            strcpy(result, "Succeeding is not something you are capable of.");
            break;
        case 30:
            strcpy(result, "Luck will shine upon you, but it will be a cold day in hell before you see it.");
            break;
        default:
            strcpy(result, "You will never be successful in your endeavors. Give up now.");
            break;
        }
        printf("You open the fortune cookie and it says: %s\n", result);
        printf("Would you like another cookie? (y/n): ");
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