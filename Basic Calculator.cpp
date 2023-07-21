#include<iostream>
using namespace std;
int main(){
	char oper;
	float num1,num2;
	
	cout<<"Enter the 1st Operand"<<endl;
	cin>>num1;
	cout<<"Enter the Required Operator"<<endl;
	cin>>oper;
	cout<<"Enter the 2nd Operand"<<endl;
	cin>>num2;
	
	switch(oper){
	
	case '+':
		cout<<"Your Answer is :"<<num1+num2;
		break;
	case '-':
		cout<<"Your Answer is :"<<num1-num2;
		break;
	case '*':
		cout<<"Your Answer is :"<<num1*num2;
		break;
	case '/':
		cout<<"Your Answer is :"<<num1/num2;
		break;
	default:
		cout<<"This is a basic Calculator and you cannot perform complex Mathematical Operations. Sorry for the inconvinience ";
    }
}
