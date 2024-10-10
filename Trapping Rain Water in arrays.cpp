#include<iostream>
#include<climits>
using namespace std;
void trap(int arr[],int n){
    int leftmax[20000],rightmax[20000];
    leftmax[0]=arr[0];
    rightmax[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        leftmax[i] = max(leftmax[i-1],arr[i-1]);
    }
    
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],arr[i+1]);
    }
    int watertrapped =0;
    for(int i=0;i<n;i++){
        int currwater = min(leftmax[i],rightmax[i])- arr[i];
        if(currwater>0){
            watertrapped =  watertrapped + currwater;
        }
    }
    cout<<" watertrapped is => "<<watertrapped<<endl;
    
}
int main(){
    int arr[] ={4,2,0,6,3,2,5};
    int n= sizeof(arr)/sizeof(int);
    trap(arr,n);
}
