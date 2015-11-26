#include <stdio.h>
#include <cs50.h>
#include <math.h>
int display(changeAmount){
    if (changeAmount <= -10){
    printf("Amount of change to give:$");
    display(round(GetFloat()*100));
    return 0;
    }
    int i = 0;
    int coinAmount;
    int cArray[4] = {25,10,5,1},ncArray[4] = { 0 };
    while(changeAmount > 0){
        ncArray[i] = floor(changeAmount / cArray[i]);
        changeAmount = changeAmount - (ncArray[i] * cArray[i]);
        i++;    
    }
    coinAmount = ncArray[0] + ncArray[1] + ncArray[2] + ncArray[3];
    printf("%d\n", coinAmount);
    return 0;
}
int main(){
   printf("Amount of change to give:$");
   display(round(GetFloat()*100));
   return 0;
}
