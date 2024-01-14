#include <iostream>
using namespace std;

int tabe(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int x;
    cout << "Enter your number : ";
    cin >> x;

    int sum = 0;
    for (int i = 2; i < x ; i++) {
        if (tabe(i)) {
            sum += i;
        }
    }

    cout << "The sum of all prime numbers less than " << x << " is: " << sum;

    return 0;
}
