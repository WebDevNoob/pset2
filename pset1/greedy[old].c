#include <stdio.h>
#include <cs50.h>
#include <math.h>
#define Quarter 0.25000000
#define Dime    0.10000000
#define Nickle  0.05000000
#define Penny   0.01000000
int display(double changeAmount){
   int coinAmount;
   double tmp, Q, D, N, P;
   if (changeAmount <= -.1)
   {
    printf("Amount of change to give:$");
    display(GetDouble());
    return 0;
   }
   if (changeAmount <= .04 && changeAmount >= .01)
   {
   coinAmount = floor(round((changeAmount * 100)));
   printf("%d\n", coinAmount);
   return 0;
   }
   Q = floor(changeAmount / Quarter);
   changeAmount = changeAmount - (Quarter * Q);
   D = floor(changeAmount / Dime);
   changeAmount = changeAmount - (Dime * D);
   N = floor(changeAmount / Nickle);
   if (N == 0){
   N = (changeAmount / Nickle);
   }
   changeAmount = changeAmount - (Nickle * N);
   P = (changeAmount * 100);
   tmp = round(Q) + round(D) + round(N) + round(P);
   coinAmount = floor(tmp);   
   printf("%d\n", coinAmount);
   return 0;
}
int main()
{
   printf("Amount of change to give:$");
   display(GetDouble());
   return 0;
}
