#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Number of Elements: ";
    cin >> a;

    int arr[a];
    cout << "Elements: ";
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int mx = 0;
    int most = arr[0];

    for (int i = 0; i < a; i++){
        int count = 0;

        for (int j = 0; j < a; j++){
            if (arr[i] == arr[j]){
                count++;
            }
        }

        if (count > mx){
            mx = count;
            most = arr[i];
        }
    }

    cout << most << endl;

    return 0;
}