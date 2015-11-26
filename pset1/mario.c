#include <stdio.h>
#include <cs50.h>
int display(int userNum);
int getUserNum();

int main()
{
    printf("Enter Value: ");
    display(GetInt());
    return 0;
}

int display(int userNum)
{
    int i;
    int numToShow = 2;
    if(userNum > 23 || userNum < 0)
        {
        printf("Please pick a number between 0 and 23: ");
        display(GetInt());
        return 0;
        }
    if(userNum == 0)
        {
        return 0;
        } 
    for(i = userNum; i > 0; i--)
        {
        printf("%.*s", i - 1, "                                        ");    
        printf("%.*s", numToShow, "###################################");
        numToShow++;
        printf("\n");
        }
    return 0;
}
