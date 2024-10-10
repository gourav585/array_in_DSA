#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
	for(int i=0;i<=n;i++){
		if(arr[i]==key){
			return i;
		}
		
		
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter size of array => ";
	cin>>n;
	int arr[n];
	cout<<"now enter array elements"<<endl;
	for(int i=0;i<=n;i++){
		cin>>arr[i];
	}
	int key ;
	cout<<"enter key whos search in array => ";
	cin>>key;
	cout<<"your element prsent in => "<<linearSearch(arr,n,key)<<" position "<<endl;
}
