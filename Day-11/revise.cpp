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
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr={0,6,5};
//     int s=0,e=arr.size()-1,peak=0;
//     int mid=(s+e)/2;
//     while(s<=e){
//         if(s==e){
//             peak=arr[s];
//             break;
//         }
//         else if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }else if(arr[mid]>arr[mid+1]){
//             e=mid;
//         }
//         mid=(s+e)/2;
//     }
//     cout<<peak;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr={1,7,3,6,5,6};
//     int s=0,e=arr.size()-1,index=-1;
//     int mid=(s+e)/2;
//     int leftsum=0,rightsum=0;
//     for(int i=s;i<mid;i++){
//             leftsum=leftsum+arr[i];
//         }
//         for(int j=e;j>mid;j--){
//             rightsum=rightsum+arr[j];
//         }
//     while(s!=mid||e!=mid){
//         if(leftsum==rightsum){
//             index=arr[mid];
//             break;
//         }else if(leftsum<rightsum){
//             mid=mid+1;
//             leftsum=leftsum+arr[mid];
//             rightsum=rightsum-arr[mid];
//         }else if(leftsum>rightsum){
//             mid=mid-1;
//             leftsum=leftsum+arr[mid];
//             rightsum=rightsum-arr[mid];
//         }
//     }
//     cout<<index;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>arr={7,9,1,2,3};
//     int s=0,e=arr.size()-1,peak=0,key=7;
//     int mid=(s+e)/2;
//     while(s<=e){
//         if(s==e){
//             peak=arr[s];
//             break;
//         }
//         else if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }else if(arr[mid]>arr[mid+1]){
//             e=mid;
//         }
//         mid=(s+e)/2;
//     }
//     cout<<peak;
//     if(key<=peak&&key>=arr[0]){
//         cout<<"search in 1";
//     }else{
//         cout<<"search in 2";
//     }
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int x=0,y=0,k=0;
        vector<int>arr;
        while(x<m&&y<n){
            if(nums1[x]<nums2[y]){
                arr.push_back(nums1[x]);
                x++;
            }else{
                arr.push_back(nums2[y]);
                y++;
            }
        }
        while(x<m){
            arr.push_back(nums1[x]);
            x++;
        }
        while(y<n){
            arr.push_back(nums1[y]);
            y++;
        }
        return arr;

}
int main()
{
    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={1,2,5};
    int m=3,n=3;
    merge(nums1,m,nums2,n);
    return 0;
}