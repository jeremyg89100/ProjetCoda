#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char **argv){
    //Exo 4
    if (strcmp(argv[1], "word.txt")==0){
    FILE* file3;
    file3 = fopen(argv[1], "w");
    if (file3 == NULL){
        printf("Error in file opening");
        return 1;
    }

    fputs("This is a test\n", file3);
    fputs("This is a second test\n", file3);
    fputs("This is another test", file3);
    fclose(file3);

    file3 = fopen(argv[1], "r+");
    if (file3 == NULL){
        printf("Error in file opening");
        return 1;
    }

    int words = 0;
    int in_words = 0;
    int count;
    while ((count = fgetc(file3))!= EOF){
        if (count == 32 || count == 10 || count == 9 ){
        in_words = 0;
        } 
        if (!in_words){
            words++;
            in_words = 1;
        }
    }
    
    fprintf(file3, "%d", words);
    fclose(file3);

    printf("%d\n", words);
    return 0;
}

    //Exo 3
    if (strcmp (argv[1], "count.txt")== 0){
    FILE* file2;
    file2 = fopen(argv[1],"r");
    if (!file2){
        file2 = fopen(argv[1], "a");
    }    
    if (file2 == NULL){
        printf("Error in file opening");
        return 1;
    } 
    int counter = 0;   
    fscanf(file2, "%d", &counter);
    fclose(file2);
    counter++;
    
    file2 = fopen(argv[1], "w");    
    if (file2 == NULL){
        printf("Error in file opening");
        return 1;
    }
    fprintf(file2, "%d\n", counter);
    fclose(file2);

    printf("%d\n", counter);
}
    
    //Exo 2
    if ( strcmp (argv[1], "filename.txt")==0){
    FILE* file;   
    file = fopen("filename.txt", "w");
    if (file == NULL){
        printf("Error at the file opening.");
        return 1;
    }

    fputs("Test\n", file);
    fputs("Second one\n", file);
    fclose(file);

    file = fopen("filename.txt", "r");
    int lines = 0;
    int count;
    while (( count = fgetc(file))!= EOF){
        if (count == '\n'){
            lines++;
        }
    }
    fclose(file);
    printf("%d\n" , lines);
    
    return 0; 
    }
}

