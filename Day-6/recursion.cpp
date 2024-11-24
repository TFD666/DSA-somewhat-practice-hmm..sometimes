// #include<iostream>
// using namespace std;
// void countingnumbers(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     countingnumbers(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     countingnumbers(n);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int fac(int n){
//     int ans=1;
//     if(n==1){
//         return 1;
//     }
//     ans=n*fac(n-1);
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fac(n);
    
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int twopower(int n){
//     int ans=1;
//     if(n==0){
//         return 1;
//     }
//     ans=2*twopower(n-1);
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<twopower(n);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int stairs(int n){
//     int d[n];
//     d[0]=1;
//     d[1]=2;
//     for(int i=2;i<n;i++){
//         d[i]=d[i-1]+d[i-2];
//     }
//     return d[n];
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<stairs(n);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// void arrr(int arr[],int n,int i){
//     if(i>=n){
//         return;
//     }
//     cout<<arr[i]<<" ";
//     arrr(arr,n,++i);
// }
// int main()
// {
//     int n=5;
//     int arr[5]={10,20,30,40,50};
//     int i=0;
//     arrr(arr,n,i);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void maxi(int arr[],int n,int &maxnum){
//     if(n==0){
//         return;
//     }
//     if(arr[0]>=maxnum){
//         maxnum=arr[0];
//     }
//     n--;
//     maxi(arr+1,n,maxnum);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxnum=arr[0];
//     maxi(arr,n,maxnum);
//     cout<<maxnum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool findstr(string str,char key,int i,int n){
//     if(i>=n){
//         return false;
//     }
//     if(str[i]==key){
//         return true;
//     }
//     return findstr(str,key,i+1,n);
// }
// int main()
// {
//     string str="Harsh";
//     char key='s';
//     int i=0;
//     int n=str.length();
//     cout<<findstr(str,key,i,n);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void findstr(string str,char key,int i,int n,vector<int>&arr){
//     if(i>=n){
//         return;
//     }
//     if(str[i]==key){
//         arr.push_back(i);
//     }
//     return findstr(str,key,i+1,n,arr);
// }
// int main()
// {
//     string str="Hasssrsh";
//     char key='s';
//     int i=0;
//     int n=str.length();
//     vector<int> arr;
//     findstr(str,key,i,n,arr);
//     for(auto a:arr){
//         cout<<a<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void reverse(int &n){
//     if(n==0){
//         return;
//     }
//     int ans=n%10;
//     cout<<ans;
//     n=n/10;
//     return reverse(n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     reverse(n);
//     return 0;
// }


