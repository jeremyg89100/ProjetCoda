#include <stdlib.h>
#include <stdio.h>

int maxi(int *numbers, int size){
    int max;

    for (int i = 0; i < size; i++){
        if (max < numbers[i] ){
        max = numbers[i];        
        }
    }
    return max;
}



int main(){
    
    int tab[5] = {1, 3, 10, 5, 4};
    int max = maxi (tab, 5);
    printf("%d\n", max);

return 0;
}