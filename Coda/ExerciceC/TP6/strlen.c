#include <stdio.h>
#include <stdlib.h>

int my_strlen(const char *str){

    int length = 0;
    while(str[length] != '\0'){
        length++;
    }

return length;
}

int main(){
    const char *word = "Bonjour";
    my_strlen(word);
    printf("The lenght of %s is %d.\n", word, my_strlen(word));
}