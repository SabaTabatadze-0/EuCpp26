#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Number of Elements: ";
    cin >> a;

    int arr[a]; 
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int even[a];
    int odd[a];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < a; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex++] = arr[i];
        } else {
            odd[oddIndex++] = arr[i];
        }
    }

    cout << "Even numbers: ";
    for (int i = 0; i < evenIndex; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < oddIndex; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    return 0;
}