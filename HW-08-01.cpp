#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];
    
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxNum = arr[0];
    int minNum = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
        if (arr[i] < minNum) {
            minNum = arr[i];
        }
    }

    double average = (maxNum + minNum) / 2.0;

    cout << "The average of the largest and smallest numbers is: " << average;

    return 0;
}
