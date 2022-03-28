#include<iostream>
using namespace std;

int recursion(int n);
int main() {
  int n;
  cout << "--RECURSION--\n";
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "Factorial of " << n << " = " << recursion(n) << endl << endl;
  return 0;
}

int recursion(int n) {
  if(n > 1)
    return n * recursion(n - 1);
  else
    return 1;
}

