#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Before: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    int temp[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp[i][j]=arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[j][3-1-i]=temp[i][j];
        }
    }
    cout<<"after"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}