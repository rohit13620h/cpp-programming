#include<iostream>
using namespace std;

int main(){
	int a,b,gcd,rem,s,s1=1,s2=0,t,t1=0,t2=1,q,num1,num2;
	cout<<"enter any two numbers you want to find GCD of"<<endl;
	cin>>num1>>num2;
	if(num1!=0&&num2!=0){
		
		a=num1;
		b=num2;
		if(num2>num1){
			a=num2;
			b=num1;
		}

		do{
			rem=a%b;
			q=a/b;
			if(rem==0){
				gcd=b;
			}
			s=s1-q*s2;
			s1=s2;
			s2=s;
			t=t1-q*t2;
			t1=t2;
			t2=t;
			a=b;
			b=rem;	
		}while(rem!=0);
		
			cout<<"the gcd of the given number is "<<gcd<<endl;
			cout<<"the value of s and t is "<<s1<<' '<<t1<<endl;

	}
else{
	cout<<"enter non zero entrys"<<endl;
}
	
	return 0;
}

