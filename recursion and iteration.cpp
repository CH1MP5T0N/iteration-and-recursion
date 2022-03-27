#include <iostream>  
using namespace std; 
//RECURSION
int fibonacci() {  
    int n1=0,n2=1,n3,i,number;    
    cout <<"FIBONACCI SEQUENCE: ";    
    cin >> number;    
    cout << n1 <<" " << endl << n2 <<" " << endl; 
    for(i=2;i<number;++i){    
    n3 = n1+n2;    
    cout << n3 <<" " << endl;    
    n1 = n2;    
    n2 = n3;
	}     
}
//ITERATIOn
int iteration(){
	while(true){
		cout << "ITERATION";
	}
}

int main(){
	fibonacci();
	cout << "Do you want to see what iteration is like? press 1 for yes";
	int prompt;
	cin >> prompt;
	if (prompt == 1){
		iteration();
	}
	return 0;
}

