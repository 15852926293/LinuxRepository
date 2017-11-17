/*
 * --------------------------------------------------------------------------
 *
 *       Filename:  sort.c
 *       Description:  Sort number in two methods.
 *                     1.bubble sort.
 *                     2.selection sort.
 *       Version:  1.0
 *       Created:  11/16/2017 10:57:24 AM
 *       Author:  jim-zhang
 *       Company:  
 *
 * --------------------------------------------------------------------------
 */
#include<stdio.h>
int length = 0;
int data[1000] = {0};
void startPrint()
{
    printf("\nPlease choose the sort method:\ninput 1:Bubble Sort.\ninput 2:Selection Sort.\ninput 3:Both sort methods reslut.\n");
}

int getInput()
{
    char input[10] = "";
    scanf("%s",input);
    while(1)
    {
        if(*input != '1' && *input != '2' && *input != '3')
        {
            printf("Please input 1 , 2 or 3!\n");
            scanf("%s",input);
        }
        else
            break;
    }
    return atoi(input);
}

void getData()
{
    printf("Please input compare data,and press any character to get the reslut...\n");
    while(1)
    {
        if(scanf("%d",&data[length]))
        {
            length++;
            continue;
        }
        else
            break;
    }
}

void Bubble()
{
    int i,j,tmp;
    for(i = 0; i < length-1; i++)
    {
        for(j = 0; j < length-i-1; j++)
        {
            if(data[j] > data[j+1])
            {
                tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;
            }
        }
    }
    printf("Bubble Sort: ");
    for(i = 0; i < length; i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
}

void Selection()
{
    /* 
     * to do
     * */
}

int main(int argc, char **argv)
{
    startPrint();
    int input = getInput();
    getData();
    Bubble();
    return 0;
}
