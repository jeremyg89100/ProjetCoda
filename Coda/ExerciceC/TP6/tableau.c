#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* tableau_Alphabet(){
    char* tableau = malloc(26* sizeof(char));
    if (tableau == NULL){
    return NULL;
    }
    for (int i=0; i <26; i++){
        tableau[i]= 'a' + i;
    }
    return tableau;
}

int main(){
    char* alphabet = tableau_Alphabet();

    if (alphabet == NULL){
        return 1;
    }
    
    for (int i = 0 ; i <= 25; i++ ){
         printf("%c\n", alphabet[i]);
    }
    free(alphabet);
    return 0;    
}