// sorting is a alogrithm to the sort the elements in particular required order
#include<iostream>
#include<algorithm>
using namespace std;

void selectionsort(int arr[],int n){
    
    for(int i=0;i <n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
            minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int A[5]={64,25,12,22,11};
    selectionsort(A,5);
    printarray(A,5);
    return 0;
}




