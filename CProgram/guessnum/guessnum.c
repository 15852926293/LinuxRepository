/*
 * --------------------------------------------------------------------------
 *
 *       Filename:  guessnum.c
 *    Description:  a game that guess random number,you can choose level:
 *                  1. 0~100
 *                  2. 0~1000
 *                  3. 0~10000
 *        Version:  1.0
 *        Created:  11/15/2017 01:49:06 PM
 *         Author:  jim-zhang
 *        Company:  
 *
 * --------------------------------------------------------------------------
 */
#include<stdio.h>
#include<time.h>
int number = -1;
void startPrint()
{
    printf("Please choose level:\ninput 1: 0~100\ninput 2: 0~1000\ninput 3: 0~10000\n"); 
}
int setNum(int level)
{
    srand((unsigned)time(NULL));
    switch (level)
    {
        case 1: number = rand()%100 + 1;
                break;
        case 2: number = rand()%1000 + 1;
                break;
        case 3: number = rand()%10000 + 1;
                break;
        default:return -1;
    }

    return 0;
}
int doCompare(int input)
{
   if(input < number)
       return -1;
   if(input > number)
       return 1;
   if(input == number)
       return 0;
}
void gameBody()
{
    printf("\nWelcome to guess number game!\n");
    char level[10] = "";
    startPrint();
    int inputret = scanf("%s",level);
    while(*level != '1' && *level != '2' && *level != '3')
    {
        printf("please input correct level: 1,2 or 3!\n");
        scanf("%s",level);
    }
    setNum(atoi(level));
    printf("Now the number is created,please guess it!\n");
    while(1)
    {
        char input[10] = "";
        scanf("%s",input);
        int ret = doCompare(atoi(input));
        if(ret == 0)
        {
            printf("Congratulations! the created number is %d\n",number);
            break;
        }
        else if(ret == -1)
        {
            printf("Low! Please input again!\n");
            continue;
        }
        else
        {
            printf("Big! please input again!\n");
            continue;
        }
    }
}
int main(int argc, char **argv)
{
    while(1)
    {
        gameBody();
        char command;
        printf("Play again?\ninput 'Y' or 'N'\n");
        scanf("%s",&command);
        while(command != 'Y' && command != 'N')
        {
            printf("Play again?\ninput 'Y' or 'N'\n");
            scanf("%s",&command);
        }
        if(command == 'Y')
            continue;
        else
            break;
    } 
    return 0;
}

