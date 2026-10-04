#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
  for(int i=0;i<size;i++){   
// for n th round  
for(int j=0;j<size-1;j++){
    if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    
}

  }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int golu[6]={10,1,7,6,14,9};
     bubblesort(golu,6);
     printarray(golu,6);


}