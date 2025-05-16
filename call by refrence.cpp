#include<iostream>
using namespace std;
void increment(int &num);
int main(){
	int num =10;
	increment(num);
cout << num << endl;
	return 0;
}
void increment(int &num){
	num++;
cout << num << endl;

}
