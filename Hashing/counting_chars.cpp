#include<bits/stdc++.h>
#include<cstdio>
using namespace std;


int main(){

    //input the array
    int n;
    cout << "how many charcters?" <<endl;
    cin >> n;char arr[n];
    cout << "enter the array of " <<n<<endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }  



    //hashing and computing
    vector<int>hashh(200,0);
    for (int i = 0; i <200; i++){
        hashh[arr[i]]+=1;
    }


     //how many test cases and what are number u want find the repeat of
    int t;
    cout << "number of test cases?" <<endl;
    cin >> t;
    cout << "enter "<<t<<" charcters with each line breaks" <<endl;
    while(t--){
        char number;
        cin >> number;
        cout << hashh[number] <<endl;
    }
    

}