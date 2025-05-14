#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"the the no fo students"<<endl;
	cin>>n;
	char name[n][50];
	int roll[n],marks[n][5],percentage[n];
	for(int i=0;i<n;i++){
		
		cout<<"enter the name of the student"<<endl;
		cin>>name[i];
		cout<<"enter the roll no of the student"<<endl;
		cin>>roll[i];
		cout<<"enter the marks in five subjects in order"<<endl;
		cin>>marks[i][0]>>marks[i][1]>>marks[i][2]>>marks[i][3]>>marks[i][4];
		percentage[i]=(marks[i][0]+marks[i][1]+marks[i][2]+marks[i][3]+marks[i][4])*0.2;
	}
	for(int i =0;i<n;i++){
		cout<<roll[i]<<"  Name :"<<name[i]<<endl;
		cout<<"grade :";
	if(percentage[i]>=80 && percentage[i]<=100){
		cout<<"A\n"<<endl;
	}	
	else if(percentage[i]>=70){
		cout<<"B\n"<<endl;
	}
	else if(percentage[i]>=60){
		cout<<"c\n"<<endl;
	}
	else if(percentage[i]>=32){
		cout<<"passed\n"<<endl;
	}
	else if(percentage[i]>=0){
		cout<<"failed\n"<<endl;
	}
	else{
		cout<<"invalid input\n"<<endl;
	}
	}	
return 0;
}
