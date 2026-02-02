#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 5;
    int arr[6] ={1,7,-3,4,-5,6};

    int curSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        curSum += arr[i];
        maxSum = (maxSum,curSum);

        if (curSum<0){
            curSum=0;
        }
    }
    cout<<"Max Subarray is:"<<maxSum<<endl;
}