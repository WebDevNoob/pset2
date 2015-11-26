#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc,char** argv){
    if (!(argc == 2)){
    printf("%d\n", argc);
    return 1;
    }
    
    int k = atoi(argv[1]), tmp;
    char *userText;
    userText = GetString();
    char cipherText[strlen(userText)];
    
    for (int i = 0; i < strlen(userText); i++){
        cipherText[i] = userText[i];
        if((int)userText[i] >= 65 && (int)userText[i] <= 90){
            tmp = ((((int)userText[i] - 65) + k) % 26) + 65;
            cipherText[i] = (char)tmp;
        };
        if((int)userText[i] >= 97 && (int)userText[i] <= 122){
            tmp = ((((int)userText[i] - 97) + k) % 26) + 97;
            cipherText[i] = (char)tmp;
        };   
        printf("%c", cipherText[i]);   
    }
    printf("\n");
    return 0;
}
