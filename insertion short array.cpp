#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int arr[],int n){
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    print(arr,n);
}
int main(){
    int arr[] = {2,3,1,4};
    int n = sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
}
