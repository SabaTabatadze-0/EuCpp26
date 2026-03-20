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

    int result[100];

    for (int i = 0; i < a; i++) {
        if (i == 0) {
            result[i] = arr[i] * arr[i + 1];
        } 
        else if (i == a - 1) {
            result[i] = arr[i] * arr[i - 1];
        } 
        else {
            result[i] = arr[i - 1] * arr[i + 1];
        }
    }

    for (int i = 0; i < a; i++) {
        cout << result[i] << " ";
    }

    return 0;
}