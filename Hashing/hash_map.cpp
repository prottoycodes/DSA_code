#include<bits/stdc++.h>
#include<cstdio>
using namespace std;


int main(){ //O(logn)

    //input the array
    int n;
    cout << "how many number?" <<endl;
    cin >> n;int arr[n];
    cout << "enter the array of " <<n<<endl;
    for (int i = 0; i < n; i++){
    cin >> arr[i];
    }   


    //create the hash array and compute repeats
    map<int,int>mpp;  //map<key,value>  key means that the number of which im counting the repeats of..value initialises from 0 and increments as the key number repeats 
    for (int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    /*benefits of using map is u dont have to declare a large vector if a number(element) is too big(like 1e12) ...we cant make a vector of size 1e12 upto 1e12 indexes. 
    so,map only makes a key of that big number and makes the number a key and we just need to incement the value(initialised form 0) on that key if that number repeats */



    //how many test cases and what are number u want find the repeat of
    int t;
    cout << "number of test cases?" <<endl;
    cin >> t;
    cout << "enter "<<t<<" numbers with each line breaks" <<endl;
    while(t--){
        int number;
        cin >> number;
        cout << mpp[number] <<endl;
    }

return 0;
}