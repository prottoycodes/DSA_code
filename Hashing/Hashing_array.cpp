#include<bits/stdc++.h>
#include<cstdio>
using namespace std;


int main(){//O(n)

    //input the array
    int n;
    cout << "how many number?" <<endl;
    cin >> n;int arr[n];
    cout << "enter the array of " <<n<<endl;
    for (int i = 0; i < n; i++){
    cin >> arr[i];
    }   


    //create the hash array and compute repeats
    int maxnum=*max_element(arr,arr+n);
    cout <<"maximum number "<< maxnum <<endl;
    vector<int>hashh(maxnum,0);
    for (int i = 0; i < n; i++){
        hashh[arr[i]]+=1;
    }
    

    //how many test cases and what are number u want find the repeat of
    int t;
    cout << "number of test cases?" <<endl;
    cin >> t;
    cout << "enter "<<t<<" numbers with each line breaks" <<endl;
    while(t--){
        int number;
        cin >> number;
        cout << hashh[number] <<endl;
    }

return 0;
}