#include<iostream>
using namespace std;

int main() {
	int num1, num2;
	cin>>num1>>num2;
	//Suppose num1 > num2;
	while(num2 > 1) {
		int remainder = num1 % num2;
		if(remainder == 0) {
			break;
		} 
		num1 = num2;
		num2 = remainder;
	}
	cout << num2;
	return 0;
}