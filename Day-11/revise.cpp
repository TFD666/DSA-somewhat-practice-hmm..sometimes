// #include<iostream>
// #include<vector>
// using namespace std;
// int maxel(vector<int>arr,int maxi){
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//     }
//     return maxi;

// }
// int manel(vector<int>arr,int mini){
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]<mini){
//             mini=arr[i];
//         }
//     }
//     return mini;

// }
// int main()
// {
//     vector<int> arr={2,4,12,3,49,12,43};
//     int maxi=INT8_MIN;
//     int mini=INT16_MAX;
//     cout<<maxel(arr,maxi)<<endl;
//     cout<<manel(arr,mini);

//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr{2,2,1,2,1,2};
//     int i=0,j=arr.size()-1;
//         while(i<j){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//                 i++;
//                 j--;
//             }else{
//                 j--;
//             }
//         }
//         cout<<arr[arr.size()/2];

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=3;
//     for(int i=0;i<n;i++){
//         //first pattern
//         for(int j=0;j<=i;j++){
//             cout<<j+1;
//         }
//         //space
//         for(int k=2*(n-i-1)-1;k>0;k--){
//             cout<<" ";
//         }
//         //pattern;
//         for(int l=i+1;l>0;l--){
//             cout<<l;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>occurance(vector<int>arr,int k){
//     vector<int>temp;
//     int s=0,e=arr.size(),mid=(s+e)/2;
//     int first=-1,last=-1;
//     while(s<e){
//         if(arr[mid]==k){
//             first=mid;
//             e=mid-1;
//         }else if(arr[mid]<k){
//             s=mid+1;
//         }else if(arr[mid]>k){
//             e=mid-1;
//         }
//         mid=(s+e)/2;
//     }
//     s=0,e=arr.size();
//     mid=(s+e)/2;
//     while(s<e){
//         if(arr[mid]==k){
//             last=mid;
//             s=mid+1;
//         }else if(arr[mid]<k){
//             s=mid+1;
//         }else if(arr[mid]>k){
//             e=mid-1;
//         }
//         mid=(s+e)/2;
//     }
//     temp.push_back(first);
//     temp.push_back(last);
//     return temp;
// }
// int main()
// {
//     vector<int>arr={3,3,4,4,5,6};
//     int k=5;
//     int s=0,e=arr.size(),mid=(s+e)/2;
//     int first=-1,last=-1;
//     while(s<=e){
//         if(arr[mid]==k){
//             first=mid;
//             e=mid-1;
//         }else if(arr[mid]<k){
//             s=mid+1;
//         }else if(arr[mid]>k){
//             e=mid-1;
//         }
//         mid=(s+e)/2;
//     }
    // s=0,e=arr.size(),mid=(s+e)/2;
    // while(s<e){
    //     if(arr[mid]==k){
    //         last=mid;
    //         s=mid+1;
    //     }else if(arr[mid]<k){
    //         s=mid+1;
    //     }else if(arr[mid]>k){
    //         e=mid-1;
    //     }
    //     mid=(s+e)/2;
    // }
    // cout<<first;
    // cout<<last;
    // occurance(arr,k);
//     return 0;
// }
