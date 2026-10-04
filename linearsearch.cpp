
// // // LINEAR SEARCH PROGRAMS

// // // #include<iostream>
// // // using namespace std;
// // // bool search(int arr[],int size,int key){
// // //      for(int i=0;i<size;i++){
// // //   if(arr[i]==key){
// // //     return 1;
// // //   }
// // //   }
// // //   return 0;
     
// // // }


// // // int main(){
// // //  int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
// // // //  whether 1 is present or not
// // // int key;
// // // cout<<"Enter the key element"<<endl;
// // // cin>>key;
// // //  bool found=search(arr,10,key);
// // //  if(found){
// // //     cout<<"Elemet is present"<<endl;
// // // }
// // // else{
// // //  cout<<"Elents is not present "<<endl;
// // // }


// // // } 

// // // find all the occurence of key and their index no at which they found 

// // #include<iostream>
// // using namespace std;
// // int occurenceofkey(int a[],int size,int key){
// //     bool found;
// //     for(int i=0;i<size;i++){
// //         if(a[i]==key){
// //             cout<<i<<" ";
// //             found=true;
// //         }
        
// //     }
// //     if(!found){
// //         cout<<"not present"<<endl;
// //     }
// // }
// // int main(){
// //     int a[9]={1,2,3,4,2,5,6,7,2};
// //      int key;
// //      cin>>key;
// //       occurenceofkey(a,9,key);
    
// // }


// // FIND FIRST and last occurence of key
// #include<iostream>
// using namespace std;
// int occurence(int a[],int size,int key){
//     bool found=false;
//     int first;
//     int last;
//     // while(found!=true){
//     for(int i=0;i<size;i++){
//         if(a[i]==key){
//         first=i;
//         cout<<first<<endl;
//         found=true;
//         break;
//         }   
//     }
//     if(!found){
//         cout<<"Not present"<<endl;
//         break;
//     }
//     }
//     for(int i=size;i>0;i--){
//         if(a[i]==key){
//             last=i;
//             cout<<last<<endl;
//             break;
//         }
//     }
    
// }

// int main(){
//     int a[9]={1,2,3,4,2,5,6,7,2};
//     int key;
//     cin>>key;
//     occurence(a,9,key);
// }