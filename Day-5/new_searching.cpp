// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int f;
//     cin>>f;
//     int s=0,e=n-1,m=s/2+e/2;
//     int occ=m;
//     while(s<=e){
//         if(arr[m]>f){
//             e=m-1;
//         }
//         else if(arr[m]<f){
//             s=m+1;
//         }
//         else if(arr[m]==f){
//             occ=m;
//             e=m-1;
//         }
//         m=s/2+e/2;
//     }
//     cout<<"occ"<<occ;
//     return 0;
// }
//we can also use lowerbond in algorith with vector to find the first occurence
//peak mountain problem
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int peak=-1;
//     int s=0,e=n-1,m=s/2+e/2;
//     while(s<=e){
//         if(arr[m]>arr[m-1]){
//             s=m+1;
//         }
//         else if(arr[m]>arr[m+1]){
//             e=m-1;
//         }
//         peak=m;
//         m=s/2+e/2;
//     }
//     cout<<peak;
//     return 0;
// }
