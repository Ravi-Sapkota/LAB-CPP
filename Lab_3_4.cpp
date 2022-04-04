// Write a program to convert hours into minutes. Use the concept of user-defined to basic type conversion.

#include <iostream>

class Time{
    int h, m;
public:
    Time(int a, int b){
        h=a;
        m=b;
    }
    int convert(){ return h*60+m; }
};

int main(){
    Time t(5,30);
    int duration =t.convert();
    std::cout<<" Time = " << duration <<" min\n";
    return 0;
}
