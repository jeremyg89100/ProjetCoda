#include <stdio.h>
#include <stdlib.h>

void play_turn();
int ask_play(int ligne, int colonne);
char play_array();
char print_array();
int win_rules();

int ask_play(int ligne, int colonne){
    printf("Entrez la ligne (1 - 3) : ");
    scanf("%d", &ligne);
    printf("Entrez la colonne (1 - 3) : ");
    scanf("%d", &colonne);
}


char play_array(int *size){   
    for (int i = 0; i <size ; i++ ){
        for (int j = 0 ; i < size; j++){
            printf(".");
        }
        printf("\n");
    }
}
    




int main(){
    char morpion;
    int size = 3;
    play_array(&size)
}