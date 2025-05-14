#include <iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int *arr=new int[n];	
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];}
	cout<<"the sum of the elements is : "<<sum<<endl;	
	delete[] arr; 
	arr = nullptr;
return 0;}
