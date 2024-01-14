#include <iostream>

using namespace std;

int main () {
	int m , n ;
	cout << " Adadi ke mikhai be tavan berse ra vared kon : " ;
	cin >> m ;
	cout << " tavan ra vared kon :" ;
	cin >> n ;
	
	int result = 1 ;
	for ( int i = 0 ; i<n ; i++) {
	result *= m ; 	
	}
	
	cout << m << " Be tavan " << n << " Barabar ast ba " << result ;
}