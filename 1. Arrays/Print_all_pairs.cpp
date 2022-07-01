#include<iostream>
using namespace std;

//Problem : Print all pairs of a given array
void print_pairs(int arr[],int n){
    int x,y;
	for(int i=0;i<n;i++){
        x=arr[i];
		for(int j=i+1; j<n;j++){
			y=arr[j];
            cout<<x<<","<<y<<endl;
		}
    cout<<endl;
	}

}

// Print all the pairs


int main(){
	//Array Containing 
	int arr[] = {10,20,30,40};
	int n = sizeof(arr)/sizeof(int);

	print_pairs(arr,n);

	return 0;
}