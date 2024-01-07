#include <iostream>

using namespace std ;

int GCD( int a , int b) {
	while ( b != 0) {
		int p = b ;
		b = a % b ;
		a = p ;
	}
	return a ;
}

int main () {
	int x , y ;
    
    cout << "please enter your first number : " ;
    cin >> x ;
    cout << "please enter your second number :" ;
    cin >> y ;
	 
    int result = GCD( x , y) ;
	cout<< "GCD of " << x << " and " << y << " is " << result ;
}