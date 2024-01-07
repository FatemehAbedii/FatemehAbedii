#include <iostream>

using namespace std;

int tabe(int x , int y ) {
	int a = 1 ;
	for ( int i = 0 ; i < y ; i++ ) {
		a *= x ;
	}
 return a ;
}
 
int main () {
	int x , y ;
	
	cout<< " please enter your first number :" ;
	cin >> x ;
	
	cout << " please enter your second number : " ;
	cin >> y ;
	
	int a= tabe(x , y) ;
	cout << " the resuit is  " << a ;
	return 0 ;
}