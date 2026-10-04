
// // // BINARY SEARCH IS A TECHNIQUE OF SEARCHING  OF AN ELEMENT  IN AN SORTED ARRAY


// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
            
//         }
//         if(key>arr[mid]){
//             start=mid+1;;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//        cout<<"Number is not in array"<<endl;

// }
// int main(){
//   int even[6]={2,4,6,8,12,18};
//   int odd[5]={3,8,11,14,16};
//   int index=binarysearch(even,6,12);
//   int index=binarysearch(odd,5,8);
//   cout<<"Index of 8is"<<index<<endl;
// }


// BINARY SEARCH PROBLEMS
//  FIRST AND LAST OCCURENCE OF AN ELEMENT IN AN SORTED ARRAY
// #include<iostream>
// using namespace std;
// int firstOc(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
// int ans=-1;
//     int mid=start+(end-start)/2;
//      while(start<=end){
//         if(arr[mid]==key){
//            ans=mid;
//             end=mid-1;
            
//         }
        

//        else if(key>arr[mid]){

//          start=mid+1;
//        }
//        else{

//           end=mid-1;
//        }
//        mid=start+(end-start)/2;
//      }
//      return ans;

// }
// int LastOc(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int ans=-1;
//     int mid=start+(end-start)/2;
//      while(start<=end){
//         if(arr[mid]==key){
//            ans=mid;
//             start=mid+1;
            
//         }
        

//       else if(key>arr[mid]){ 

//          start=mid+1;
//        }
//        else{

//           end=mid-1;
//        }
//        mid=start+(end-start)/2;
//      }
//      return ans;

// }
// int main(){
//      int even[5]={1,3,3,3,4};
  
     
// cout<<"First Occurence of 3 is"<< firstOc(even,5,3)<<endl;
 
//   cout<<"Last Occurence of 3 is"<<LastOc(even,5,3)<<endl;

// }
// QUESTION-PEAK INDEX IN A MOUNTAIN ARRAY
// #include<iostream>
// using namespace std;
// int peakelement(int arr[],int size){
//    int start=0;
//    int end=size-1;
//    int mid=start+(end-start)/2;
//    while(start<end){
//       if(arr[mid]<arr[mid+1]){
//          start=mid+1;
//       }
//       else{
//          end=mid;
//       }
//       return arr[start];
//    }
// }
// int main(){
//    int A[]={3,4,5,1};

//    cout<<"Peak element will be"<<peakelement(A,4)<<endl;

// }
// find pivot in an array
#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
      
        if(arr[mid]>=arr[start]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    mid=start+(end-start)/2;
    }
    return arr[start];
}
int main(){
   int a[5]={3,8,10,17,2};
   cout<<"Pivot element in this array will be"<<pivot(a,5)<<endl;

}

// SEARCH IN SORTED ROTATED ARRAY -a very important question
// sabse pahle hame pivot element niklana pdega thn ham decide krnge kha b.s lagana hai
// #include<iostream>
// using namespace std;
// int findpivot(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<end){
//         if(arr[mid]>=arr[start]){
//             start=mid+1;
//         }
//         else{
//             end=mid;
//         }
//          mid=start+(end-start)/2;
//     }
//     return start;
//     }
//     int binarysearch(int arr[],int start,int end,int key){
  
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
            
//         }
//         if(key>arr[mid]){
//             start=mid+1;;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//       return -1;

// }
// int findposition(int arr[],int size,int key){
//   int pivot=findpivot(arr,5);
//   if(key>=arr[pivot]&& key<=arr[size-1]){
//     return binarysearch(arr,pivot,size-1, key);
//   }
//   else{
//     return binarysearch(arr,0,pivot-1,key);
//   }
// }
   
// int main(){
//     int a[]={7,8,1,3,5};
//     int key;
//     cin>>key;
    
//   int position=findposition(a,5,key);
//   if (position!=-1){
//     cout<<"Number is found at index:"<<position<<endl;
//   }
//   else {
//         cout << "Number is not in array" << endl;
//     }
//  return 0;


// }




     