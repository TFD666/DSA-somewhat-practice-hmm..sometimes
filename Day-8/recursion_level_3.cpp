// #include<iostream>
// #include<vector>
// #include<limits>
// using namespace std;
// int coinsum(vector<int> arr,int target,int sum){
//     if(sum==target){
//         return 0;
//     }
//     if(sum>target){
//         return INT32_MAX;
//     }
//     int mini=INT32_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans=coinsum(arr,target,sum+arr[i]);
//         if(ans!=INT32_MAX){
//             mini=min(mini,ans+1);
//         }
//     }
//     return mini;
    
// }
// int main()
// {
//     vector<int>arr={1,2,3};
//     int sum=0,target=13;
//     int ans=coinsum(arr,target,sum);
//     cout<<ans;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<limits>
// using namespace std;
// int coinsum(vector<int> arr,int target){
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT32_MAX;
//     }
//     int mini=INT32_MAX;
//     for(int i=0;i<arr.size();i++){
//         int ans=coinsum(arr,target-arr[i]);
//         if(ans!=INT32_MAX){
//             mini=min(mini,ans+1);
//         }
//     }
//     return mini;
    
// }
// int main()
// {
//     vector<int>arr={1,2,3};
//     int sum=0,target=13;
//     int ans=coinsum(arr,target);
//     cout<<ans;
//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<limits>
// using namespace std;
// int linesegment(vector<int> arr,int target){
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT32_MAX;
//     }
//     int count=0;
//     for(int i=0;i<arr.size();i++){
//         int ans=linesegment(arr,target-arr[i]);
//         if(ans!=INT32_MAX){
//             count++;
//         }
//     }
//     return count;
    
// }
// int main()
// {
//     vector<int>arr={5,2,2};
//     int line=7;
//     int ans=linesegment(arr,line);
//     cout<<ans;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int rober(vector<int>&arr){
//     // if(arr>=arr.size()){
//     //     return;
//     // }
// }
// int main()
// {
//     vector<int> arr={1,2,3,7};
//     cout<<&arr;
//     // cout<<rober(arr);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string a1="123";
    string a2="32";
    

    return 0;
}


