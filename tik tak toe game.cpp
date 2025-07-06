// tik tak toe game
//some prob here and there will look late ron


#include<iostream>
using namespace std;
char array[3][3];

void initial(){
	int count=49;
	for(int i =0 ;i<3;i++){
		for(int j =0;j<3;j++){
			array[i][j]=char (count);
			count++;
		}
	}
}
void display(){
		cout<<"----------"<<endl;
	for(int i = 0;i<3;i++){
		cout<<'|';
		for(int j = 0;j<3;j++){
			cout<<array[i][j]<<'|';
		}
		cout<<endl;
		cout<<"----------"<<endl;
	}
}
void swap(int i ,int j , bool turn){
	if(turn){
		array[i][j]='X';
	}else{
		array[i][j]='O';
	}
}

bool change(char n ,bool turn){
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			if(array[i][j]==n){
				swap(i,j,turn);
				return false;
			}
		}
	}
	return true;
}

bool check(bool turn){
	int val;
	if(turn){
		val=264;
	}else{
		val=237;
	}
	for(int i = 0;i<3;i++){
		if(array[i][0]+array[i][1]+array[i][2]==val){
			return true;
		}
		if(array[0][i]+array[1][i]+array[2][i]==val){
			return true;
		}
	}
	if(array[1][1]+array[2][2]+array[0][0]==val){
		return true;
	}
	if(array[0][2]+array[1][1]+array[2][0]==val){
		return true;
	}
return false;
}
void diswin(bool turn){
	if(turn){
		cout<<"first player won !"<<endl;
	}else{
		cout<<"second player won !"<<endl;
	}
}

bool game(){
	int count=0;
	bool turn=true;
	cout<<"ENTER THE BLOCK NUMBER YOU WANT TO PLAY"<<endl;
while (true){
	
	count++;
	display();
	char n ;
	cin>>n;
	if(change(n,turn)){
		cout<<"invalid input / input already taken"<<endl;
		continue;
	}
	bool res=check(turn);
	
	if(res){
		diswin(turn);
		return true;
	}
	if(count==9){
		return false;
	}
	if(turn){
		turn = false;
	}else{
		turn = true;
	}
}
	
}

int main(){
	
	while(true){
		initial();
		bool result = game();
		if(result){
			break;
		}
		cout<<"Game was a tie \nlets play again\n"<<endl;	
	}
	return 0;
}
