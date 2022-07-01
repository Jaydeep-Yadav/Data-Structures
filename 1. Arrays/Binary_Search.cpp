#include<iostream>
using namespace std;
	

int binary_search(int arr[],int n,int key){
    int start=0;
    int end=n-1;

    while (start<=end)
    {
     int mid=(start+end)/2;

     if(arr[mid]==key) return mid;

     else if(arr[mid] > key) {
        end = mid -1;
     }   

     else{
        start = mid+1;
     }
    }
    
	//out of the loop 
	return -1;
}


int main(){

	int arr[] = {1,3,4,5,10,12,23,30};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	int index = binary_search(arr,n,key);
	if(index!=-1){
		cout<<key <<" is present at index "<< index <<endl;
	}
	else{
		cout<<key <<" is NOT Found!" <<endl;
	}


	return 0;
}