//quick sort using recursion and partition logic
// #include<iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
//     //choosing the pivot element
//     int PI=s;
//     int PE=arr[s];
//     //counting to swap
//     int count=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<PE){
//             count++;
//         }
//     }
//     int right_index=s+count;
//     swap(arr[PI],arr[right_index]);
//     PI=right_index;
//     int i=s;
//     int j=e;
//     while(i<PI&&j>PI){
//         while(arr[i]<=PE){
//             i++;
//         }
//         while(arr[j]>PE){
//             j--;
//         }

//         if(i<PI&&j>PI){
//             swap(arr[i],arr[j]);
//         }
//     }
//     return PI;
// }
// void quick_sort(int arr[],int s, int e){
//     if(s>=e){
//         return ;
//     }
//     //partition logic
//     int p=partition(arr,s,e);
//     //sorting left part
//     quick_sort(arr,s,p-1);

//     //sorting right part
//     quick_sort(arr,p+1,e);
    
// }
// int main()
// {
//     int arr[]={8,1,6,20,30,5,60};
//     int s=0,e=7-1;
//     quick_sort(arr,s,e);
//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//a slightly different way to do quick soert without using count
// #include<iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
//     //choosing the pivot element
//     int PI=s;
//     int PE=arr[s];
//     int i=s+1;
//     int j=e;
//     while(i<j){
//         while (i <= e && arr[i] <= PE) {  
//             i++;  
//         }  
//         // Move j to the left as long as the element is greater than PE  
//         while (j >= s && arr[j] > PE) {  
//             j--;  
//         } 
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[s],arr[j]);
//     return j;
// }
// void quick_sort(int arr[],int s, int e){
//     if(s>=e){
//         return ;
//     }
//     //partition logic
//     int p=partition(arr,s,e);
//     //sorting left part
//     quick_sort(arr,s,p-1);

//     //sorting right part
//     quick_sort(arr,p+1,e);
    
// }
// int main()
// {
//     int arr[]={11,3,8,20,80,6,3,27};
//     int s=0,e=8-1;
//     quick_sort(arr,s,e);
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//printing permutation using recursion or backtracking both are same 
// #include<iostream>
// #include<string>
// using namespace std;
// void printpermutation(string &s,int i){
//     //base condition
//     if(i>=s.length()){
//         cout<<s<<" ";
//         return ;
//     }
//     //swaping
//     for(int j=i;j<s.length();j++){
//         swap(s[i],s[j]);
//         printpermutation(s,i+1);
//         //backtrcing
//         swap(s[i],s[j]);
//     }
//     //backtrcing
// }
// int main()
// {
//     string s="abc";
//     printpermutation(s,0);
//     return 0;
// }


//maze in a rat problem using backtracking
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool issafe(int cx,int cy,int row,int col,int arr[][3],vector<vector<bool>>&visited){
    if(((cx>=0&&cx<row)&&(cy>=0&&cy<col))&&
    (arr[cx][cy]==1)&&
    (visited[cx][cy]==false)){
        return true;
    }
    return false;

}
void solvemaze(int arr[3][3],int row,int col,int i,int j,vector<vector<bool>>&visited,vector<string>&path,string output){
    if(i==row-1&&j==col-1){
        path.push_back(output);
        return;
    }
    //down 
    if(issafe(i+1,j,row,col,arr,visited)){
        visited[i+1][j]=true;
        solvemaze(arr,row,col,i+1,j,visited,path,output+'D');
        //back track
        visited[i+1][j]=false;
        
    }

    //right
    if(issafe(i,j+1,row,col,arr,visited)){
        visited[i][j+1]=true;
        solvemaze(arr,row,col,i,j+1,visited,path,output+'R');
        //back track
        visited[i][j+1]=false;
        
    }

    //left
    if(issafe(i,j-1,row,col,arr,visited)){
        visited[i][j-1]=true;
        solvemaze(arr,row,col,i,j-1,visited,path,output+'L');
        //back track
        visited[i][j-1]=false;
        
    }

    //up
    if(issafe(i-1,j,row,col,arr,visited)){
        visited[i-1][j]=true;
        solvemaze(arr,row,col,i-1,j,visited,path,output+'U');
        //back track
        visited[i-1][j]=false;
        
    }

}


int main()
{
    int row=3;
    int col=3;
    int arr[3][3]={{1,0,0},
                    {1,1,0},
                    {1,1,1}};
    if(arr[0][0]==0){
        cout<<"no path exist";
        return 0;
    }
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    vector<string> path;
    string output="";
    solvemaze(arr,row,col,0,0,visited,path,output);
    if(path.size()==0){
        cout<<"no path exist";
        return 0;
    }
    for(auto i:path){
        cout<<i<<" ";
    }
    
    return 0;
}


