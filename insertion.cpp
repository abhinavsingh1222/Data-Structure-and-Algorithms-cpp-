#include<iostream>
using namespace std;
void insertionsort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
         int j=i-1;
        for(;j>=0;j--){
          if(arr[j]>temp){
            arr[j+1]=arr[j];
          }
          else{
            break;
          }


        }
        arr[j+1]=temp;
    }

}
 void printarry(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;
 }
int main(){
    int A[4]={4,12,11,20};
    insertionsort(A,4);
    printarry(A,4);
}