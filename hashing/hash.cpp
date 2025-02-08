#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hashh[1000]={0};
    for(int i=0;i<n;i++){
        hashh[arr[i]]+=1;
    }
    for(int i=0;i<n;i++){
        cout<<hashh[arr[i]];
    }
    return 0;
}