#include "library.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


void create_line(int size, int red, int green,int blue) {
     for( int i = 0; i < size ; i ++ ) {
        create_square(red, green , blue);
     }
}

int main() {
    //feuille et pomme
    for (int i = 0; i < 5; i++) {
        create_line(5 - i - 1, 0, 0, 0); 
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j % 2 == 0)
                create_square(0, 255, 0);
            else
                create_square(255, 0, 0); 
        }
        create_line(5 - i - 1, 0, 0, 0); 
        new_line();
    } 
    //tronc
    for (int k = 0; k<4 ; k++){
        create_line(3, 0, 0, 0);
        create_line(3, 150, 50, 50);
        create_line(3, 0, 0, 0);
        new_line();        
    }        
draw();
return 0;
}





