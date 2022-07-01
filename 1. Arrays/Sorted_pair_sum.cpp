//Given a sorted array and a number x, find a pair in array whose sum is closest to x
//output: return a pair of integers


//? An efficient solution can find the pair in O(n) time.
// The following is a detailed algorithm. 

// 1) Initialize a variable diff as infinite (Diff is used to store the 
//    difference between pair and x).  
//  We need to find the minimum diff.

// 2) Initialize two index variables l and r in the given sorted array.
//        (a) Initialize first to the leftmost index:  l = 0
//        (b) Initialize second  the rightmost index:  r = n-1

// 3) Loop while l < r.
//        (a) If  abs(arr[l] + arr[r] - sum) < diff  then 
//            update diff and result 
//        (b) If(arr[l] + arr[r] <  sum )  then l++
//        (c) Else r--    


#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    pair<int,int> p;
    int diff= INT_MAX;

    int l = 0;
    int r = arr.size();

    while(l<r){
        if( abs( arr[l]+arr[r]-x ) < diff ) {
            p.first = arr[l];
            p.second=arr[r];
            diff = abs( arr[l]+arr[r]-x );
        }

        // If this pair has more sum, move to smaller values.
        if (( arr[l]+arr[r]) > x) 
            r--;
        
        else // Move to larger values
            l++;

    }

    return p;
    
}

int main(){
	//Array Containing 
	vector<int> A = {1,2,3,4,6};
	int v=5;
    
    pair<int,int> p;
	p = closestSum(A,v);

    cout<<"("<<p.first<<","<<p.second<<")"<<endl;

	return 0;
}