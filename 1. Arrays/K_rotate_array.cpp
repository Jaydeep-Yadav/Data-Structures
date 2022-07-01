#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){

    k = k%a.size();

    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());

    return a;
}

int main(){
	//Array Containing 
	vector<int> A = {1,2,3,4,6};
	int k=2;
    
    vector<int> v =kRotate(A,k);

    //Display vector
    for(int i:v){
        cout<<i<<" ";
    }
   
	return 0;
}