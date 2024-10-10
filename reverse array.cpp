#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array => ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements => ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "This is your normal array => ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "This is your reversed array => ";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

