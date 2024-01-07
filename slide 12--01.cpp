#include <iostream>

using namespace std ; 

 int tabe (int i ) {
 	if (  i==0) {
 		return 1 ;
	 }
	 else {
	 	return i*tabe ( i-1 ) ;
	 }
 }
 
 float sin( float x ) {
 	float m = x*x*x/ tabe (3) ;
 	float n = x*x*x*x*x / tabe (5) ;
 	float a = x*x*x*x*x*x*x / tabe (7) ;
 	
 	float b = x-m+n-a ;
 	
 	
 	return b ;
 }
 
 float cos ( float x ) {
 	float m = x*x / tabe (2) ;
 	float n = x*x*x*x / tabe (4) ;
 	float a = x*x*x*x*x*x*x / tabe (6) ;
 	
 	float R = 1 - m+n - a ;
 	
 	return R ;
 	
 	
 }
 
 int main () {
 	float x ;
 	
 	cin >> x ;
 	float tan = sin(x) / cos (x) ;
 	cout << tan ;
 }