#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point{
    float x;
    float y;
}Point;

typedef struct Vector2D{
    float a;
    float b;

    float c;
    float d;
}Vector2D;

Point get_middle_point(Vector2D vector){
        float pointA=(vector.a + vector.c )/2;
        float pointB=(vector.b + vector.d)/2;
        printf("%.2f and %.2f\n",pointA , pointB);
    }


float get_vector_distance(Vector2D vector){
    float pointA= sqrt(vector.a + vector.c);
    float pointB = sqrt(vector.b+ vector.d);
    float result = pointA + pointB;
    printf("The distance between the origin and the destination is %.2f", result);

}

int main(){
    
     Vector2D vector;
        vector.a = 5.3;
        vector.b = 3.2;

        vector.c = 8.1;
        vector.d = 2.2;
    
     get_vector_distance(vector);
return 0;

} 