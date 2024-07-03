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

// #include<iostream>
// #include<limits>
// #include<vector>
// using namespace std;
// int main()
// {
//     string c="asdfsasdf";
//     char t='x';
//     int locc=0;
//     for(int i=c.size();i>=0;i--){
//         if(c[i]==t){
//             locc=i;
//             break;
//         }
//     }
//     cout<<locc;
//     return 0;
// }
//  |
//  |
//  |
// \ /
// #include<iostream>
// #include<string>
// using namespace std;
// int lastoccurance(string &s,char &tar,int i){
//     if(i<=0){
//         return INT32_MIN;
//     }
//     if(s[i]==tar){
//         return i;
//     }
//     lastoccurance(s,tar,i-1);
    

// }
// int main()
// {
//     string s="asdfasdf";
//     char tar='a';
//     int i=s.size();
//     cout<<lastoccurance(s,tar,i);
//     return 0;
// }


// #include<iostream>
// #include<string>
// using namespace std;
// int palindromecheck(string &s,int i,int l){
//     if(i>=l){
//         return 1;
//     }
//     if(s[i]!=s[l]){
//         return -1;
//     }
//     palindromecheck(s,i+1,l-1);
// }

// int main()
// {
//     string s="asa";
//     int i=0;
//     int l=s.size()-1;
//     cout<<palindromecheck(s,i,l);
//     return 0;
// }




