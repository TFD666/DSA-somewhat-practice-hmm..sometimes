// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Before: "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
            
//         }
//         cout<<endl;
//     }
//     int temp[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             temp[i][j]=arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             arr[j][3-1-i]=temp[i][j];
//         }
//     }
//     cout<<"after"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//move all negative to left side
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>a;
//     for(int i=0;i<n;i++){
//         int c;
//         cin>>c;
//         a.push_back(c);
//     }
    
//     int first=0;
//     int last =n-1;
//     while(first<last){
//         if(a[first]<0){
//             first++;
//         }else if(a[last]>0){
//             last--;
//         }else{
//             swap(a[first],a[last]);
//         }
//     }
//     for(int i=0;i<a.size();i++){
//         cout<<a[i];
//     }
//     return 0;
// }


//dublicate number
// #include<iostream>
// #include<vector>
// #include <bits/stdc++.h> 
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>a;
//     for(int i=0;i<n;i++){
//         int c;
//         cin>>c;
//         a.push_back(c);
//     }
//     sort(a.begin(),a.end());
//     for(int i=0;i<n-1;i++){
//         if(a[i]==a[i+1]){
//             cout<<a[i];
//             break;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include <bits/stdc++.h> 
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>a;
//     for(int i=0;i<n;i++){
//         int c;
//         cin>>c;
//         a.push_back(c);
//     }
//     int first=a[0];
//     while(first!=a[first]){
//         swap(a[0],a[first]);
//     }
//     cout<<a[first];

//     return 0;
// }
// #include<vector>
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     int arr[a][a];
//     for(int i=0;i<a;i++){
//         for(int j=0;j<a;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<a;i++){
//         if(i%2==0){
//             for(int j=0;j<a;j++){
//                 cout<<arr[j][i];
//             }
//         }else{
//             for(int j=a-1;j>=0;j--){
//                 cout<<arr[j][i];
//             }
//         }
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n1,n2;
    cin>>n1;
    cin>>n2;
    int sr=0,er=n1-1,sc=0,ec=n2-1;
    int arr[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>arr[i][j];
        }
    }

    while(sr<er){
        //starting row
        for(int i=sr;i<=ec;i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        //ending coul
        for(int j=sr;j<=er;j++){
            cout<<arr[j][ec]<<" ";
        }
        ec--;
        // ending row
        for(int k=ec;k>=sc;k--){
            cout<<arr[er][k]<<" ";
        }
        er--;
        //starting coul
        for(int l=er;l>=sr;l--){
            cout<<arr[l][sc]<<" ";
        }
        sc++;
    }

    return 0;
}
