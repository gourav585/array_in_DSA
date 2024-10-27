#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int mx(vector<int> arr){
    int maxs = INT_MIN;
    for(int i=0;i<arr.size();i++){
        maxs = max(maxs,arr[i]);
    }
    return maxs;
}
int main(){
    int n ;
    cout<<"enter your vector size =>"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter vector elements"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<"this is you max val in givin array => "<<mx(arr);
}
