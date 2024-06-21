// #include<iostream>
// #include<vector>
// using namespace std;
// bool ascornot(vector<int>&arr,int i){
//     if(i==6 ){
//         return true;
//     }
//     if(arr[i]>arr[i+1]){
//         return false;
//     }
//     return ascornot(arr,i+1);

// }
// int main()
// {
//     vector<int>arr={2,6,7,9,12,11};
//     int i=0;
//     cout<<ascornot(arr,i);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// bool bsearch(vector<int> &arr,int key,int &s,int &e){
//     if(s>e){
//         return false;
//     }
//     int mid=(s+e)/2;
//     if(arr[mid]==key){
//         return true;
//     }
//     else if(arr[mid]<key){
//         return bsearch(arr,key,s=mid+1,e);
//     }
//     else{
//         return bsearch(arr,key,s,e=mid-1);
//     }

// }
// int main()
// {
//     vector<int> arr={1,2,3,4,5};
//     int s=0,e=5-1,m=s/2+e/2;
//     int key=12;
//     cout<<bsearch(arr,key,s,e);
//     return 0;
// }

// subsequence of a arary
// #include<iostream>
// #include<vector>
// using namespace std;
// void printsubsequence(string arr,string out,int i){
//     if(i>=arr.length()){
//         cout<<out<<endl;
//         return;
//     }
//     //not includeed
//     printsubsequence(arr,out,i+1);
//     //includeed
//     out.push_back(arr[i]);
//     printsubsequence(arr,out,i+1);

// }

// int main()
// {
//     string arr="abc";
//     string out="";
//     int i=0;
//     printsubsequence(arr,out,i);
//     return 0;
// }
