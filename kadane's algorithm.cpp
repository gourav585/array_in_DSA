#include<iostream>
#include<climits> // For INT_MIN
using namespace std;
void maxsub(int arr[],int n){
    int maxsum = INT_MIN;
    int current =0 ;
    for(int i=0;i<n;i++){
        current = current + arr[i];
        maxsum = max(current,maxsum);
        if(current<0){
            current =0;
        }
    }
    cout<<"the maxsum is => "<<maxsum;  //(6,-5,4,2) output will be 7 
}
int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n =sizeof(arr)/sizeof(int);
    maxsub(arr,n);
}
