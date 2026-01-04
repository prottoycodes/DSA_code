#include<bits/stdc++.h>
#include<cstdio>
using namespace std;



void insertion_sort(int arr[],int n){
    for (int i = 0; i <= n-1; i++){
        int j=i;
        while (j>0 && arr[j]<arr[j-1]){ //j is getter than 0 coz j-1=-1th index(when i=0) which will throw error
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++){ //printing the sorted array
        cout << arr[i] <<" ";
    }
}





int main(){

    //taking inputs in the array
    int n;cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++){
    cin >> arr[i];}


    insertion_sort(arr,n); //worst case O(n^2)
                           //best case O(n)


    return 0;
}