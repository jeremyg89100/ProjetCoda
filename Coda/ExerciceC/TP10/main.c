#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv){
    int n = atoi(argv[1]);
    int **array = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        array[i]= malloc(n * sizeof (int));
    }

    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++){
            array[i][j]=(i+1)*(j+1);
            printf("%3d",array[i][j]); 
        }
    printf("\n");
    }

    for (int i =0; i <n ; i++){
        free(array[i]);
    }
    free(array);
    return 0;
}
