// virtual funtion
#include<iostream>
using namespace std;

class Animal{
	public:
	virtual void eat(){
		cout<<"meat"<<endl;
	}
	void drink(){
		cout<<"water"<<endl;
	}
};

class Catfamily:public Animal{
};

class lifestock:public Animal{
	public:
	void eat(){
		cout<<"grass"<<endl;
	}
	void drink(){
		cout<<"h2o"<endl;
	}
};

int main(){
	Animal cat;
	cat.eat();
	cat.drink();
	
	Catfamily lion;
	lion.eat();
	lion.drink();
	
	lifestock goat;
	goat.eat();
	goat.drink();
	
	Animal* dog=&goat;
	
	dog->eat();
	dog->drink();
	
	
	
	return 0;
}
