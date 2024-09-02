//learing merge sort using dnc and recursion
//firstly learning to merge two sorted arrays
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr1[3]={2,4,6};
//     int arr2[6]={1,3,5,7,8,9};
//     int ma[9];
//     int i=0,j=0,k=0,n=3,m=6;
//     while(i<n||j<m){
//         if(arr1[i]<arr2[j]&&i<n){
//             ma[k]=arr1[i];
//             k++;
//             i++;
//             // cout<<k<<"k";
//             // cout<<i<<"i";
//         }
//         else{
//             ma[k]=arr2[j];
//             k++;
//             j++;
//             // cout<<k<<"k";
//             // cout<<j<<"j";
//         }
//     }
    
//     for(int l=0;l<9;l++){
//         cout<<ma[l]<<" ";
//     }
//     return 0;
// }

//divide and concquer usin grecursion in merge sort
#include<iostream>
using namespace std;
void mergesort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //find mid
    int mid=(s+e)/2;
    //left part 
    mergesort(arr,s,mid);
    //right part
    mergesort(arr,mid+1,e);

    merge()



}
int main()
{
    int arr[]={5,1,9,12,4};
    int n=5;
    int s=0,e=n-1;
    mergesort(arr,s,e);
    return 0;
}