#include<iostream>
using namespace std;
bool duplicat(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            return true;
        }
    }
    return false;
}
int main(){
int arr[] = {1,2,6,3,4};
int n = sizeof(arr)/sizeof(int);
  if (duplicat(arr, n)){
        cout << "Array contains duplicates." << endl;
    }else{
        cout << "No duplicates found." << endl;
}
}
