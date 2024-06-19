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


#include<iostream>
using namespace std;
void maxi(int arr[],int n,int &maxnum){
    if(n==0){
        return;
    }
    if(arr[0]>=maxnum){
        maxnum=arr[0];
    }
    n--;
    maxi(arr+1,n,maxnum);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxnum=arr[0];
    maxi(arr,n,maxnum);
    cout<<maxnum;
    return 0;
}