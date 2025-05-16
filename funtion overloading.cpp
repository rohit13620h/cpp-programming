#include<iostream>
using namespace std;
class add{
	public :
		int summ(int a,int b){
			return a+b;}
		float summ(int a , float b){
			return a+b;
		}
		float summ(float a, float b){
			return a+b;
		}				
};
int main(){
	add sum;
	cout<<"the sum of two ints 5 and 4 is :"<<sum.summ(5,4)<<endl;
	cout<<"the sum of own int 9 and one float 5.6 is :"<<sum.summ(9,5.6f)<<endl;
	cout<<"the sum of two floats 6.3 and 9.3 is :"<<sum.summ(6.3f,9.3f)<<endl;
return 0;
}

