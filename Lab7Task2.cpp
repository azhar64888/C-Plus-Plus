#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size!";
        return 0;
    }

    int *arr = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    arr = nullptr;

    cout << "\n\nMemory released successfully.\n";

    return 0;
}
    