//Given sorted array and integer val
// return lower bound of val
//if val is not present in array then lower bound of a given integer means integer which is just smaller than the given integer

#include<bits/stdc++.h>
using namespace std;

// Using Binary Search:
int lowerBound(vector<int> A, int Val) {
    	int l = 0, h=A.size()-1, mid;
	while(l<=h){
		mid = (l+h)/2;
		if(A[mid]==Val)
		return Val; // when Val exists in the array
		else if(A[mid]>Val){
			h = mid-1;
		}
		else if(A[mid]<Val){
			l = mid+1;
		}
	}
	
	if(l==0 && A[l]>Val)
	return -1; // when all elements are greater than Val
	else
	return A[h];
}


// Using iterative approach
int lower_bound(vector<int> A, int Val) {
    
    int lower_bound=INT_MIN, n=A.size();
    
    for(int i=0;i<n;i++){
        lower_bound = (A[i]>lower_bound && A[i]<=Val) ? A[i] : lower_bound;
    }
    
    if(lower_bound==INT_MIN)
    lower_bound = -1;
    
    return lower_bound;
}


int main(){
	//Array Containing 
	vector<int> A = {1,2,3,4,6};
	int v=5;
	cout<< lower_bound(A,v) <<endl;
    cout<<lowerBound(A,v)<<endl;

	return 0;
}