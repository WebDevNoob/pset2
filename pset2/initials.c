#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char *userName;
int main(){
    userName = GetString();
    printf("%c", toupper(userName[0]));
    for (int i = 0; i < strlen(userName); i++){
        if (userName[i] == ' '){
            printf("%c", toupper(userName[i+1]));
        }
    }
    printf("\n");
    return 0;
}
