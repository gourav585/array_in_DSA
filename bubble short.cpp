#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of array => ";
	cin>>n;
	int arr[n];
	cout<<"enter the elements of array =>"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int counter =1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
			 swap(arr[i],arr[i+1]);
			}
		}
		counter++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
