#include<iostream>
using namespace std;

//Problem : Print all subarrays of a given array
void print_subarrays(int arr[],int n){

	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k] <<",";
			}
			cout <<endl;
		}
	}

}

// Print all the subarrays


int main(){
	//Array Containing 
	int arr[] = {10,20,30,40};
	int n = sizeof(arr)/sizeof(int);

	print_subarrays(arr,n);

	return 0;
}