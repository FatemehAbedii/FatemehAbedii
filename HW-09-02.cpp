#include <iostream>

int main() {
int arr[10] = {5, 3, 8, 2, 9, 1, 6, 7, 4, 10};

int smallest = arr[0];
int secondsmallest = arr[0];

for (int i = 1; i < 10; ++i) {	
if (arr[i] < smallest) {
secondsmallest = smallest;
smallest = arr[i];
} 
else if (arr[i] < secondsmallest && arr[i] != smallest) {
secondsmallest = arr[i];
}
}

std::cout<< "Secend smallest is :" << secondsmallest ;

return 0;
}
