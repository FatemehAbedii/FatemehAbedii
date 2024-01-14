#include <iostream>

using namespace std;

int main() {
    int size = 5;
    int arr1[size];
    int arr2[size];
    
    cout << "Enter 5 Number for the first array:" << "\n" ;
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    cout << "Enter 5 Number for the second array:" << "\n" ;
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    cout << "Swapped arrays:" << "\n";
    cout << "First array: ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\n" ;
    
    cout << "Second array: ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
    cout << "\n" ;

}
