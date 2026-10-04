// Sorting is a techinque to rearrange the element of array or list of element in an particular manner

// types of sorting 
// a. selection sort
// b. bubble sort 
// c. insertion sort
// d. merge sort
// e. quick sort
// d.heap sort



//      1. selection sort
 
// #include<iostream>
// using namespace std;
// void selectionsort(int a[],int size){
//     for(int i=0;i<size-1;i++){
//         int minindex=i;
//         for(int j=i+1;j<size;j++){
//          if(a[j]<a[minindex]){
//              minindex=j;
//          }
//         }
//         swap(a[i],a[minindex]);
//     }
// }
// void print(int a[],int size){
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int a[5]={64,25,12,22,11};
//     selectionsort(a,5);
//     print(a,5);
// }




// Bubble sort = 

// #include<iostream>
// using namespace std;
// void bubblesort(int golu[],int size){
//     for(int i=0;i<size-1;i++){

//         for(int j=0;j<size;j++){
           
//             if(golu[j]>golu[j+1]){
//                 swap(golu[j],golu[j+1]);
        
//             }
             

//         }
//     }
// }
// void print(int golu[],int size){
//     for(int i=0;i<size;i++){
//         cout<<golu[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int golu[6]={10,1,7,6,14,9};
//     bubblesort(golu,6);
//     print(golu,6);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void insertionsort(int a[],int size){
//     for(int i=0;i<size-1;i++){
//       int temp=a[i];
//       int j=i-1;
// for(;j>=0;j--){
//   if(a[j]>temp){
//     a[j+1]=a[j];
//   }
//   else{
//     break;
//   }
// }

// a[j+1]=temp;
//     }
// }
// void print(int golu[],int size){
//     for(int i=0;i<size;i++){
//         cout<<golu[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//  int a[7]={10,1,7,4,8,2,11};
//  insertionsort(a,7);
//  print(a,7);
//  return 0;
 
//  }