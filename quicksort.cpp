// now study about the quick sort 
#include<iostream>
// #include<vector>
using namespace std;
int partioning(int *arr,int start,int end){
    int pivot=arr[start];
    int count=0;
    for(int i=start;i<=end;i++){
        if(arr[i]<pivot){
            count++;
        }
    }
    // place pivot at right place 
    int pivotIndex=start+count;
    swap(arr[start],arr[pivotIndex]);
    int i=start;
    int j=end;
    while(i<pivotIndex && j>pivotIndex){
     while(arr[i]<pivot){
        i++;
     }
     while(arr[j]>pivot){
        j--;
     }
     if(i<pivotIndex && j>pivotIndex){
        swap(arr[i],arr[j]);
        i++;
        j--;
     }
     
     }
    return pivotIndex;
}
void quicksort(int arr[],int start,int end){
    if(start>=end){
        return ;
    }
    int pivotIndex=partioning(arr,start,end);
    // left partsort kro
    quicksort(arr,start,pivotIndex-1);
    // right part sort kro
    quicksort(arr,pivotIndex+1,end);
}
int main(){
    int arr[6]={1,5,3,8,2,4};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}