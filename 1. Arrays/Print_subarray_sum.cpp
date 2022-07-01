#include<iostream>
using namespace std;

//Problem : Print sum of all subarrays of a given array and largest subarray sum
void printSubarrays(int arr[],int n){

    int subarraySum, lg=0;

	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){

            subarraySum=0;

			for(int k=i;k<=j;k++){
				subarraySum= subarraySum + arr[k];
                // cout<<subarraySum<<endl;
                lg = max(lg,subarraySum);
			}
			// cout <<endl;
		}

	}
    cout<<"Largest subarray sum is "<<lg;

}

// Print the sum of each subarray & find out the largest sum


int main(){
	//Array Containing 
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	printSubarrays(arr,n);

	return 0;
}