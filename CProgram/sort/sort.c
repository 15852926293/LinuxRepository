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
static int length = 0;
static int data[1000] = {0};
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
        //if(!strcmp(input,"1") && !strcmp(input,"2") && !strcmp(input,"3"))
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
    int data_b[100] = {0};
    int n,i,j,tmp;
    for(n = 0; n < length; n++)
    {
        data_b[n] = data[n];
    }
    for(i = 0; i < length-1; i++)
    {
        for(j = 0; j < length-i-1; j++)
        {
            if(data_b[j] > data_b[j+1])
            {
                tmp = data_b[j];
                data_b[j] = data_b[j+1];
                data_b[j+1] = tmp;
            }
        }
    }
    printf("Bubble Sort: ");
    for(i = 0; i < length; i++)
    {
        printf("%d ",data_b[i]);
    }
    printf("\n");
}

void Selection()
{
    /* 
     * to do
     * */
    int data_s[100] = {0};
    int n,i,j,tmp,min;
    for(n = 0; n < length; n++)
    {
        data_s[n] = data[n];
    }
    for(i = 0; i < length - 1; i++)
    {
        min = i;
        for(j = i+1; j < length; j ++)
        {
            if(data_s[min] > data_s[j])
            {
                min = j;
            }
        }
        if(min != i)
        {
            tmp = data_s[i];
            data_s[i] = data_s[min];
            data_s[min] = tmp;
        }
    }
    printf("Select Sort: ");
    for(i = 0; i < length; i++)
    {
        printf("%d ",data_s[i]);
    }
    printf("\n");

}

void outPut(int chose)
{
    switch (chose)
    {
        case 1:Bubble();
               break;
        case 2:Selection();
               break;
        case 3:Bubble();
               Selection();
               break;
        default:break;
    }
}

int main(int argc, char **argv)
{
    startPrint();
    int chose = getInput();
    getData();
    outPut(chose);
    return 0;
}
