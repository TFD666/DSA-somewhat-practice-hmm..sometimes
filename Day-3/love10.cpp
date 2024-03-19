// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     int num;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int j=arr[0];
//     for(int i=1;i<n;i++){
//         j=j&&arr[i];
//     }
    
//     cout<<j;
//     return 0;
// }


//intersection
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n;
//     cin>>m;
//     vector<int>a;
//     vector<int>b;
//     int c;
//     for(int i=0;i<n;i++){
//         cin>>c;
//         a.push_back(c);
//     }
//     for(int i=0;i<m;i++){
//         cin>>c;
//         b.push_back(c);
//     }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(a[i]==b[j]){
    //             cout<<a[i];
    //             break;
    //         }
    //     }
    // }
    // or
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(a[i]==b[j]){
    //             cout<<a[i];
    //             a[i]=INT16_MIN;
    //         }
    //     }
    // }

    // for(int i=0;i<m;i++){
    //     cout<<a[i]<<" "<<b[i]<<" ";
    // }
//     return 0;
// }


//unioun with duplicate
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n,m;
//     cin>>n;
//     cin>>m;
//     vector<int>a;
//     vector<int>b;
//     int c;
//     for(int i=0;i<n;i++){
//         cin>>c;
//         a.push_back(c);
//     }
//     for(int i=0;i<m;i++){
//         cin>>c;
//         b.push_back(c);
//     }
//     vector<int>d;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i]==b[j]){
//                 b[j]=INT8_MIN;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]!=INT8_MIN){
//             d.push_back(a[i]);
//         }
//     }
//     for(int i=0;i<m;i++){
//         if(b[i]!=INT8_MIN){
//             d.push_back(b[i]);
//         }
//     }
//     for(int i=0;i<d.size();i++){
//         cout<<d[i]<<" ";
//     }
//     return 0;
// }


// TWO PAIR SUM
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum;
//     cout<<"enter the sum number";
//     cin>>sum;
//     vector<int>a;
//     int x;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         a.push_back(x);
//     }
//     for(int i=0;i<a.size();i++){
//         cout<<a[i];
//     }
//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++){
//             if(a[i]+a[j]==sum){
//                 cout<<"Pair:("<<a[i]<<","<<a[j]<<")"<<endl;
//             }
//         }
//     }
//     return 0;
// }


//TRIPLET PAIR SUM
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum;
//     cout<<"enter the sum number";
//     cin>>sum;
//     vector<int>a;
//     int x;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         a.push_back(x);
//     }
//     for(int i=0;i<a.size();i++){
//         cout<<a[i];
//     }
//     for(int i=0;i<a.size();i++){
//         for(int j=i+1;j<a.size();j++){
//             for(int k=j+1;k<a.size();k++){
//                 if(a[i]+a[j]+a[k]==sum){
//                     cout<<"Pair:("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<endl;
                    
//                 }
//             }
//         }
//     }
//     return 0;
// }



//SORT 0"s and 1`s
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    int c;
    for(int i=0;i<n;i++){
        cin>>c;
        a.push_back(c);
    }
    int start=0,end=a.size()-1;
    while(start!=end){
        if(a[start]==1){
            swap(a[start],a[end]);
            end--;
        }else{
            start++;
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

























