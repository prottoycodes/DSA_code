#include<bits/stdc++.h>
#include<cstdio>
using namespace std;



void bubble_sort(int arr[],int n){
    for (int i = n-1; i >=0; i--){ //sort it from 0th index upto n-1th index
        for (int j = 0; j<=n-2; j++){ //if we compare the n-2th index element with its next n-1th, the n-1th will automatically get sorted..so no need to compare the n-1th index element with its next(nth) index element which dosent actually exist
            if(arr[j]>arr[j+1]){   //comparing condition 
                swap(arr[j],arr[j+1]);
            }
        }
        
    }

    for (int i = 0; i < n; i++){ //outputing the sorted array
        cout << arr[i] <<" ";
    }
}








int main(){

    //taking inputs in the array
    int n;cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++){
    cin >> arr[i];}


    bubble_sort(arr,n); //worst case O(n^2)
                        //best case O(n)


    return 0;
}