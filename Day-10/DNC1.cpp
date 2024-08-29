//learing merge sort using dnc and recursion
//firstly learning to merge two sorted arrays
#include<iostream>
using namespace std;
int main()
{
    int arr1[3]={2,4,6};
    int arr2[6]={1,3,5,7,8,9};
    int ma[9];
    int i=0,j=0,k=0,n=3,m=6;
    while(i<n||j<m){
        if(arr1[i]<arr2[j]&&i<n){
            ma[k]=arr1[i];
            k++;
            i++;
            // cout<<k<<"k";
            // cout<<i<<"i";
        }
        else{
            ma[k]=arr2[j];
            k++;
            j++;
            // cout<<k<<"k";
            // cout<<j<<"j";
        }
    }
    
    for(int l=0;l<9;l++){
        cout<<ma[l]<<" ";
    }
    return 0;
}