#include <iostream>  
using namespace std;  
int number;
int one = 1;
int main(){
	cout << "--ITERATION--\n";
	cout << "Enter an positive integer: ";
	cin >> number;
	for(int i = 1; i <= number; i++){
		one = one*i;
	}
	cout << one;
	return 0;
}  
