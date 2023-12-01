#include <iostream>

using namespace std;

main() {
	float number1 , number2 , result ;
	char op ; 
	cout<< " please enter expresion : " ;
	cin>> number1>>op>>number2 ;
	
	switch (op) {
	case'+' :
	result= number1+number2 ;
  	   break ;
	
	case '-' :
	 result = number1-number2 ;
	   break ;
	 
	case '*' :
	 result = number1*number2 ;
	   break;
	 	
	case '/' :
	 		result = number1/number2 ;		
		
	}
	cout<< result ;
}
