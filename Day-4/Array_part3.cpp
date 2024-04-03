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

#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    int first=a[0];
    while(first!=a[first]){
        swap(a[0],a[first]);
    }
    cout<<a[first];

    return 0;
}