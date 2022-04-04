// Write a program to convert hours into minutes. Use the concept of user-defined to basic type conversion.

#include <iostream>

class Time{
    public:
    int h,m;
    Time(int a, int b){
        h=a;
        m=b;
    }
    operator int(){ return h*60+m; }
};

int main(){
    Time t(5,30);
    int duration=t;
    std::cout<<t.h<<" hr " <<t.m << " min = " << duration <<" min\n";
}