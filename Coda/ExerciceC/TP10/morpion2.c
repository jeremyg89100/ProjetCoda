char print_array(int size){
    for (int i = 0; i < size ; i++){
        for (int j = 0; i < size ; j++ ){
            if (j < size -1){
                printf(" | ");
            }
        }
        if (i < size-1){
            printf(" --- ");
            for (int i = 0; i < size ; i++){
                for (int j = 0; i < size ; j++ ){
                    printf(" | ");
                }  
            }
        }
    }
}