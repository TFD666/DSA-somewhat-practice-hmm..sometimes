#include<iostream>
#include<vector>
using namespace std;
int coinsum(vector<int> arr,int target,int sum){
    if(sum==target){
        return 0;
    }
    if(sum>target){
        return ;
    }
    for(int i=0;i<arr.size();i++){
        coinsum
    }
}
int main()
{
    vector<int>arr={1,2};
    int sum=0,target=3;
    int ans=coinsum(arr,target,sum);
    return 0;
}
