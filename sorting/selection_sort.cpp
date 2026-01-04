#include<bits/stdc++.h>
#include<cstdio>
using namespace std;


void selection_sort(int arr[],int n){
    for (int i = 0; i <=n-2; i++){ //this loop to swap the elements..ran the loop till n-2 coz i will sort the array  from 0 upto n-2th index of the array.(n-1th index automatically gets sorted)
        int min=i; //lets assume that the ith index number is the minimum
        for (int j = i; j <=n-1; j++){  //this loop to compare each elements with others..gonna compare each number with the numbers upto the last(n-1th) index of the array 
            if(arr[j]<arr[min]){  //comparing condition
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for (int i = 0; i < n; i++){ //loop for outputing the sorted array
        cout << arr[i] <<" ";
    }
}







int main(){

    //taking inputs in the array
    int n;cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++){
    cin >> arr[i];}


    selection_sort(arr,n); //O(n^2)


    return 0;
}