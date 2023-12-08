#include <iostream>

using namespace std;

main() {
 int hghogh ;
 cout<< " lotfan meghdar hoghogh khod ra be sorat chand millioni vared konid : " ;
 cin>> hghogh ;
 
 if ( hghogh < 6 ) {
 	cout << " 0% az hoghogh shoma baraye maliat kasr mishavad!" ;
}
 else if (hghogh>= 6 && hghogh < 8)	{
 	cout<< "5% az hoghogh shoma baraye maliat kasr mishavad!" ;
 }
 else if (hghogh >= 8 && hghogh< 10) {
 	cout<< " 10% az hoghogh shoma baraye maliat kasr mishavad!" ;
 }
 else if ( hghogh>= 10 && hghogh< 14 ) {
 	cout<< " 15% az hoghogh shoma baraye maliat kasr mishavad!" ;
 }
 else if ( hghogh>= 14 && hghogh < 18) {
 	cout << " 20% az hoghogh shoma baraye maliat kasr mishavad!" ;
 }
 else if (hghogh>= 18 && hghogh < 25) {
 	cout<< " 25% az hoghogh shoma baraye maliat kasr mishavad!" ;
 }
 else { 
 cout<< "35% az hoghogh shoma baraye maliat kasr mishavad!" ;
 }
}