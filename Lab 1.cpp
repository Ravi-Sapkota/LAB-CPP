//WAP to read two numbers from user and find the sum of theirs

#include <iostream>
using namespace std;
class addition{
	private:
	int a,b,sum;
	
	public:
	void read(){
		cout<<"Enter two nubmers to be added\n";
		cin>>a>>b;
	}
	void process(){
		sum=a+b;
	}
	void display(){
		cout<<"Sum of the two numbers is "<<sum;
	}
};

int main(){
	addition s;
	s.read();
	s.process();
	s.display();
	return 0;
}
