#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n >= 2) {
        int sum = arr[0] + arr[1];
        cout << "Sum of first two numbers = " << sum << endl;
    } else {
        cout << "Array must contain at least 2 elements!" << endl;
    }
return 0;
}