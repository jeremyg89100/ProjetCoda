#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int x = 5;
    int y = 10;
    swap(&x,&y);
    printf("After the swap x= %d and y= %d.",x, y);

}