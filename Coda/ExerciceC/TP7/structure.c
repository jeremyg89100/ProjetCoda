#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}Point;

typedef struct{
    Point origin;
    Point destination;
}Vector2D;


Point get_middle_point(Vector2D v){
    Point middle;
    middle.x = (v.origin.x + v.destination.x)/2;
    middle.y = (v.origin.y + v.destination.y) / 2;
    return middle;      
    }

float get_vector_distance(Vector2D v){
    return sqrt(
    pow(v.origin.x - v.destination.x, 2) +
    pow(v.destination.x - v.destination.y, 2)
    );
}

int main(){
    Vector2D v;
    v.origin.x = 5;
    v.destination.y = 410;

    v.destination.x = 10;
    v.destination.y = 590;
    
     Point m = get_middle_point(v);
     float distance = get_vector_distance(v);
     printf("x : %f y : %f\n", m.x, m.y);
return 0;

} 