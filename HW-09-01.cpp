#include <iostream>

using namespace std;

int main() {
    int size = 10;
    int arr[size];

    cout << "Enter 9 integers in ascending order:" << "\n";
    for (int i = 0; i < size - 1; i++) {
        cin >> arr[i];
    }

    int nN;
    cout << "Enter a new integer to insert into the array:" ;
    cin >> nN;


    int index = 0;
    while (index < size - 1 && arr[index] < nN) {
        index++;
    }

    for (int i = size - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = nN;

    cout << "Updated array:" << "\n" ;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n" ;

    return 0;
}
