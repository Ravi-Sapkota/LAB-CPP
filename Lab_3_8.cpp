// Convert rectangle to polar type conversion using casting operator in the destination class. (reverse of Q No. 6)

#include <iostream>
#include <math.h>

class Rectangle{
public:
    int x,y;
    Rectangle(int a,int b){
    x=a;
    y=b;
  }
};

class Polar{
    float r, theta;
    public:
    Polar(){
        r=0;
        theta=0;
    };
    void operator=(Rectangle X){
        r=sqrt(X.x*X.x+X.y*X.y);
        theta=atan(X.y/X.x);
    }
    void display(){
        std::cout<< "r = " << r << "\ntheta = " << theta*180/3.14 << "degree\n";
    }
};

int main(){
    Rectangle R(16,51);
    Polar P;
    P=R;
    P.display();
    return 0;
}