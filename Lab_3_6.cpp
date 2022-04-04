// Convert polar to rectangle type conversion using casting operator in the destination class.

#include <iostream>
#include <math.h>

class Polar{
    public:
    float r, theta;
    Polar(float x, float y){
        r=x;
        theta=y;
    }
};

class Rectangle{
    float x, y;
    public:
    Rectangle(){
        x=0;
        y=0;
    }
    void operator=(Polar X){
        X.theta=X.theta*3.14/180;
        x=X.r*cos(X.theta);
        y=X.r*sin(X.theta);
    }
    void display(){
        std::cout<< "x = " << x << "\ny = " << y << "\n";
    }
};

int main(){
    Polar P(53.45,72.58);
    Rectangle R;
    R=P;
    R.display();
    return 0;
}