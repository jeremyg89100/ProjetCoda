#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* array_concat(int *array1, int size1, int *array2, int size2 ){
    int total_size = size1 + size2;

    int* result = malloc(total_size* sizeof(int));
    if(result == NULL){
        return NULL;
    }

    for (int i = 0; i < size1; i++){
        result[i]=array1[i];
    }

    for (int j = 0; j < size2; j++){
        result[size1 + j]=  array2[j];
    }
    return result;    
}


int main(){
    int tab1[]={3, 4, 9, 2};
    int tab2[]={4, 8, 5};
    int* concatenation = array_concat(tab1, 4, tab2, 3);
    if (concatenation == NULL){
        return 1;
    } 
    for (int i = 0; i< 7; i++ ){
        printf("%d\n", concatenation[i]);
    }
    free(concatenation);
    return 0; 
    }

