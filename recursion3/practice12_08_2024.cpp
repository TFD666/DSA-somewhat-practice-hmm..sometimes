//checking palindrome of avector

// #include<iostream>
// #include<vector>
// using namespace std;
// bool palindromecheck(vector<int>&v,int i,int n){
//     if(i>=n){
//         return true;
//     }
//     if(v[i]!=v[n]){
//         return false;
//     }
//     return palindromecheck(v,i+1,n-1);
// }
// int main()
// {
//     vector<int>v={1};
//     int i=0,n=v.size()-1;
//     cout<<palindromecheck(v,i,n);
//     return 0;
// }


//this is the trile code for tring to remve a substring from a string but instead I used vector
//the code is still incomplete ans it the code is most basic one with a clear cut solution 
//without using any other method and the actual right code is below this one
// #include<iostream>
// #include<vector>
// using namespace std;
// void rob(vector<int>&arr,int i,vector<int>&part){
//     if(i>=arr.size()){
//         return ;
//     }
//     bool remove=false;
//     for(int j=0;i<part.size();i++){
//         if(arr[i])
//     }


// }
// int main()
// {
//     vector<int>arr={0,1,1,2,3,2,1,1,2,3,2,3};
//     int i=0;
//     vector<int>part={0,1,2};
//     rob(arr,i,part);
//     return 0;
// }


// class Solution {
// public:
//     void removeocc(string &s,string &part){
//         int found=s.find(part);
//         if(found!=-1){
//             string left_index=s.substr(0,found);
//             string right_index=s.substr(found+part.size(),s.size());
//             s=left_index+right_index;
//             removeocc(s,part);
//         }
//         else{
//             return ;
//         }
//     }
//     string removeOccurrences(string s, string part) {
//         removeocc(s,part);
//         return s;
        
//     }
// };

//this one displays the substring of a array using recurtion
// #include<iostream>
// #include<vector>
// using namespace std;
// void printsubstringpart(vector<int>&arr,int st,int ed){
//     if(ed>=arr.size()){
//         return ;
//     }
//     for(int i=st;i<=ed;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
//     printsubstringpart(arr,st,ed+1);
// }
// void printsubstring(vector<int>&arr){
//     for(int start=0;start<arr.size();start++){
//         int end=start;
//         printsubstringpart(arr,start,end);
//     }
// }
// int main()
// {
//     vector<int>arr={1,2,3,4,5};
//     int st=0,ed=0;
//     printsubstring(arr);
//     return 0;
// }

//this one is the buy and sell stocs problem but the solution is correct but it will give a time exceed error so the t=right solution is down
// #include<iostream>
// #include <algorithm>
// #include<vector>
// using namespace std;
// void minel(vector<int>&arr){

// }
// int main()
// {
//     vector<int> arr={2,4,1};
//     int min=INT32_MAX;
//     int max=INT32_MIN;
//     int profit=INT32_MIN;
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[j]-arr[i]>=profit){
//                 min=arr[i];
//                 max=arr[j];
//                 profit=max-min;
//             }
//         }
//     }
//     cout<<profit;

//     return 0;
// }


// class Solution {
// public:
//     void mpf(vector<int>& arr,int i,int &min,int &max_profit){
//         if(i==arr.size()){
//             return;
//         }

//         if(arr[i]<min) min=arr[i];
//         int today=arr[i]-min;
//         if(today>max_profit) max_profit=today;
//         return mpf(arr,i+1,min,max_profit);
//     }
//     int maxProfit(vector<int>& arr) {
//         int min=INT_MAX;
//         int max_profit=INT_MIN;
//         mpf(arr,0,min,max_profit);
//         return max_profit;
//     }
// };


