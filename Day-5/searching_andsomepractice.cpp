// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int temp[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             temp[i][j]=arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=temp[j][i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//binary  search in matrix
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r;
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<arr[i][j];
    //     }
    // }
    int key;
    cin>>key;
    int k1=0,k2=0;
    int s=0,e=(r*c)-1;
    int mid=(s+e)/2;
    while(s<=e){
        if(arr[mid/c][mid%c]==key){
            k1=mid/2;k2=mid%2;
        }
        else if(arr[mid/c][mid%c]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    cout<<endl;
    cout<<k1<<" "<<k2;
    return 0;
}