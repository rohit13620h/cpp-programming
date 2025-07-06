// pure virtual funtion
#include<iostream>
using namespace std;

class A{
	public:
		virtual void display()=0;
};

class B: public A{
	public :
	void display(){
		cout<<"hellow"<<endl;
	}
	
};

int main(){
	B b;
	b.display();
	return 0;
}
