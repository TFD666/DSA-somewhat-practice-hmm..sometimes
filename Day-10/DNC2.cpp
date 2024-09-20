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

