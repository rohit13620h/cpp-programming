// constructor
#include<iostream>
using namespace std;

	class Student{
		int rollno;
		public:
			Student(int rollno){
				this->rollno=rollno;
			}
			
			void display(){
				cout<<rollno<<endl;
			}
	};
	
int main(){
Student s(9);
s.display();

return 0;
}
