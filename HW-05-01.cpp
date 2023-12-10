#include <iostream>

using namespace std;

main() {
 int a , n , f ;
 cout<< " lotfan meghdar hoghogh khod ra be sorat chand millioni vared konid : " ;
 cin>> a ;
 
 if ( a < 6000000 ) {
 	cout << " Hghogh shoma ba maliat : " << a ;
}
 else if ( a>= 6000000 && a < 8000000)	{
  n=a*5;
		f=n/100;
		a=a-f;
 	cout<< " Hghogh shoma ba maliat : " << a  ;
 }
 else if ( a >= 8000000 && a < 10000000) {
  n=a*10;
		f=n/100;
		a=a-f;
 	cout<< " Hghogh shoma ba maliat : " << a ;
 }
 else if ( a >= 10000000 && a< 14000000 ) {
  n=a*15;
		f=n/100;
		a=a-f;
 	cout<< " Hghogh shoma ba maliat : " << a ;
 }
 else if ( a >= 14000000 && a < 18000000) {
  n=a*20;
		f=n/100;
		a=a-f;
 	cout << " Hghogh shoma ba maliat : " << a ;
 }
 else if (a >= 18000000 && a < 25000000) {
  n=a*25;
		f=n/100;
		a=a-f;
 	cout<< " Hghogh shoma ba maliat : " << a ;
 }
 else if (25000000 <= a ){ 
  n=a*35;
		f=n/100;
		a=a-f ;
 cout<< " Hghogh shoma ba maliat : " << a ;
 }
}
