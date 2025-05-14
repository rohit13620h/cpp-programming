#include<iostream>
using namespace std;
class add{
	public :
		int twoint(int a,int b){
			return a+b;}
		float oneintonefloat(int a , float b){
			return a+b;
		}
		float twofloat(float a, float b){
			return a+b;
		}				
};
int main(){
	add sum;
	cout<<"the sum of two ints 5 and 4 is :"<<sum.twoint(5,4)<<endl;
	cout<<"the sum of own int 9 and one float 5.6 is :"<<sum.oneintonefloat(9,5.6)<<endl;
	cout<<"the sum of two floats 6.3 and 9.3 is :"<<sum.twofloat(6.3,9.3)<<endl;
return 0;
}

