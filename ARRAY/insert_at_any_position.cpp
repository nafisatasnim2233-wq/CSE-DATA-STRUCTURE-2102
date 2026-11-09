#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40};
    int n = 4, value = 25, pos = 3;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}