#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angle;
    void setup(){
    size(900,900);
}
    void draw(){
    background(0);
    translate(width/2,height/2);
    strokeWeight(3);
    for(int i = 0 ; i<280; i +=10){
        pushMatrix();
        rotate(radians(i)*
            cos(radians(angle));
            stroke(255-i, i, i);
            line(200*cos(
            radians(angle)), 0,0,200);
}
     angle++
}
    return 0;
}
