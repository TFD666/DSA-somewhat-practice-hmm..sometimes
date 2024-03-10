#include<iostream>
using namespace std;
int main()
{
    //fibonaciseries
    // int a=0,b=1;
    // int c;
    // int n;
    // cin>>n;
    // cout<<a<<" "<<b<<" ";
    // for(int i=0;i<n-2;i++){
    //     c=a+b;
    //     a=b;
    //     b=c;
    //     cout<<c<<" ";
    // }
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"swap alternate array \n";
    // for(int i=0;i<n;i=i+2){
    //     for(int j=i+2;j<n;j=+2){
    //         if(arr[i]!=arr[j]){
    //             arr[i],arr[j]=arr[j],arr[i];
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int dup=arr[0];
    for(int i=1;i<n;i++){
        dup=dup^arr[i];
    }
    cout<<dup;


    return 0;
}
