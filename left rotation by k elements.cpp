#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>& arr,int k){
    int n = arr.size();
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
}
int main(){
    vector<int> arr {1,2,3,4,5};
    int d= 3;
    rotate(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
