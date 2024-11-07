#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>& arr,int d){
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int d=3;
    rotate(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
