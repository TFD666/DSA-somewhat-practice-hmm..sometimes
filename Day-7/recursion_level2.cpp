#include<iostream>
#include<vector>
using namespace std;
bool ascornot(vector<int>&arr,int i){
    if(i==6 ){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return ascornot(arr,i+1);

}
int main()
{
    vector<int>arr={2,6,7,9,12,11};
    int i=0;
    cout<<ascornot(arr,i);
    return 0;
}