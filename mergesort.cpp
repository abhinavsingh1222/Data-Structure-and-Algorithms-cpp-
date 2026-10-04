// merge sort 

// #include<iostream>
// using namespace std;
// void merge(int *arr,int mid,int start,int end){
//      mid=start+(end-start)/2;
//     int len1=mid-start+1;
//     int len2=end-mid;
//     int *first=new int [len1];/// first 
//     int *second=new int [len2]; // second array
//     // copy values to array 

//     int mainArrayIndex=start;
  
//     for(int i=0;i<len1;i++){
//         first[i]=arr[mainArrayIndex++];
//     }
//      mainArrayIndex=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[mainArrayIndex++];
//     }
//     // merge twoo sorted array

//      int index1=0;
//      int index2=0;
//      mainArrayIndex=start;
// while(index1<len1 && index2<len2){
//     if(first[index1]<second[index2]){
//         arr[mainArrayIndex]=first[index1];
//         mainArrayIndex++;
//         index1++;

//     }
//     else{
//         arr[mainArrayIndex]=second[index2];
//         mainArrayIndex++;
//         index2++;
//     }
// }
// while(index1<len1){
//     arr[mainArrayIndex++]=first[index1++];
// }
// while(index2<len2){
//     arr[mainArrayIndex++]=second[index2++];
// }

// }

// void mergesort(int arr[],int start,int end){
//     if(start>=end){
//         return ;
//     }
//     int mid=start+(end-start)/2;
//     // left part sort karna hai
//     mergesort(arr,start,mid);
//     // right part sort krna hai
//     mergesort(arr,mid+1,end);
//     // ab dono ko merge kr do 
//     merge(arr,mid,start,end);
// }
// int main(){
//     int arr[5]={2,5,1,6,9};
//     int n=5;
//     mergesort(arr,0,n-1);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
   

// }



#include<iostream>
using namespace std;
void merge(int *arr,int start,int end){
    int mid=(start+end)/2;
    int len1=mid-start+1;
    int len2=end-mid;
    int *first= new int [len1];
    int *second=new int [len2];

    // copy values to array 
    int mainArrayIndex=start;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    // merge array 
    int index1=0;
    int index2=0;
    mainArrayIndex=start;
    while(index1<len1 && index2<len2){
        if(first[index1]>second[index2]){
            arr[mainArrayIndex++]=second[index2++];
        }
        else{
            arr[mainArrayIndex++]=first[index1++];
        }

    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
    
}
void mergesort(int arr[],int start ,int end){
    if(start>=end){
        return ;
    }
    int mid=(start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    // merge two array
    merge(arr,start,end);
}
int main(){
    int arr[6]={1,8,2,12,4,3};
    int n=6;
    mergesort(arr,0,n-1);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


