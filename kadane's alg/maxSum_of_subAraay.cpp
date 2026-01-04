#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int maxSubarraySum(vector<int> &arr,int n){

    int localsum=0;
    int globalsum=*min_element(arr.begin(),arr.end()); //we start the sum from minimum value

    for (int i = 0; i < n; i++){
        localsum=localsum+arr[i];

        if(localsum<0){
            localsum=0;
        }
        if(localsum>globalsum){
            globalsum=localsum;
        }
    }
    return globalsum;


}




int main()
{
    vector<int>arr = { -2, 1, -3, -4, -1,-4, 2, 1, -5, -4};
    int n = arr.size();
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}