// destructor
#include<iostream>
using namespace std;

	class Student{
		int rollno=30;
		public:
			Student(int rollno){
				this->rollno=rollno;
			}
			
			void display(){
				cout<<rollno<<endl;
			}
			
			~Student(){
			}
	};
	
int main(){
	
Student s(9);
s.display();
return 0;
}
