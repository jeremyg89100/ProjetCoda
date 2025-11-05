#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
}Point;

typedef struct Vector2D{
    Point point1;
    Point point2;
}Vector2D;


Point get_middle_point(Vector2D vector){
        float pointA=(vector.a + vector.c )/2;
        float pointB=(vector.b + vector.d)/2;
        printf("%.2f and %.2f\n",pointA , pointB);
    }

int main(){
    
     Vector2D vector;
        vector.x =(x = 5.3 ; y=3.2);
        vector.b = 3.2;

        vector.c = 8.1;
        vector.d = 2.2;
    
     get_middle_point(vector);
return 0;

} 