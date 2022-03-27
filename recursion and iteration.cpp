#include <iostream>
using namespace std;
//RECURSION
int fib(int x) {
   if((x==1)||(x==0)){
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
//ITERATION
int iter() {
	while (true){
		cout << "ITERATION";
	}
}

int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   cout << endl;
   cout << "Do you want to see iteration?\n Press 1 if you do: ";
   int num;
   cin >> num;
   if (num ==1){
   iter();
   }
   return 0;
}
