#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc,char** argv){
    /*Make sure only command and one arg given*/
    if (!(argc == 2)){
        printf("%d\n", argc);
        return 1;
    }
    /*Cycles through keyword to determine if usable*/
    for (int k = 0; k < strlen(argv[1]) ; k++){
        if (isdigit(argv[1][k])){
        printf("%d\n", argc);
        return 1; 
        }
    }
    /*Delcare variables*/
    string keyword = argv[1], userText = GetString();
    int eChar, kValue, length = strlen(userText);
    
    /*Main Loop*/
    for (int i = 0, j = 0; i < length; i++, j++){
    /*Char to encrypt*/
        eChar = userText[i];
    /*If j > keyword length, wrap to start*/    
        if (j >= strlen(keyword)){
            j = 0;
        }
    /*If Char isn't a letter, erase progress on j*/
        if (!isalpha(eChar)){
            j = j - 1;  
        };
    /*Since A=a, making them all upper or all lower seemed eaiser*/         
        kValue = (int)toupper(keyword[j]) - 65;
    /*Encrypt uppercase char*/
        if((int)userText[i] >= 65 && (int)userText[i] <= 90){
           eChar = ((((int)userText[i] - 65) + kValue) % 26) + 65;
        };
    /*Encrypt lowercase char*/
        if((int)userText[i] >= 97 && (int)userText[i] <= 122){
           eChar = ((((int)userText[i] - 97) + kValue) % 26) + 97;
        };
    /*Print result of encryption*/   
           printf("%c", (char)eChar);
        }
        printf("\n");
    return 0;
}    
