#include <bits/stdc++.h>
using namespace std;


int majorityElement(vector<int> &arr){
    int count=0;
    int element;
    for (int i = 0; i < arr.size(); i++){
        if(count==0){
            count=1;
            element=arr[i];
        }

        else if(arr[i]==element){
            count++;
        }

        else if(arr[i]!=element){
            count--;
        }
    }



    //just to count how much times the major element is there in the array and if it occurs more than n/2 times or no
    int countOfTheMajorElement=0;
    for (int i = 0; i <arr.size(); i++){
        if(arr[i]==element){
            countOfTheMajorElement++;
        }
    }
    if(countOfTheMajorElement>arr.size()/2){
        return element;
    }

    else{
        return -1;
    }



}





int main()
{
    vector<int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}