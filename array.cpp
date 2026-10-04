// ARRAY WITH FUNCTION

// #include<iostream>
// using namespace std;
// void printarray(int arr[],int size){
//   cout<<"Elemets of an array will be"<<endl;
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<endl;
//   }

// }
// int main(){
//   int arr[10]={1,1,2,3,4,5,6,7,8,9};
//   int third[5];
//   printarray(third,5);

//   printarray(arr,10);

// }

//  #include<iostream>
//  #include<climits>
//  using namespace std;
//  int maxvalue(int num[],int n){
//   int max=INT_MIN;
//   for(int i=0; i<n; i++){
//      if(num[i]>max){
//       max=num[i];
//      }
//   }
//   return max;

//  }
//    int min=INT_MAX;
//   for(int i=0; i<n; i++){
//      if(num[i]>min){
//       min=num[i];
//      }
//   }
//   return min;

//  }
//  int main(){
//   int size;
//   cin>>size;
//   int num[10000];
//   for(int i=0;i>size;i++){
//     cin>>num[i];
//   }
//   cout<<"Maximum value is "<<maxvalue(num,size)<<endl;
//   cout<<"Minimum value is"<<minvalue(num,size)<<endl;

//  }

// #include <iostream>
// #include <climits>
// using namespace std;

// // Function to find the maximum value in the array
// int maxvalue(int num[], int n) {
//     int max = INT_MIN; // Initialize max to the smallest possible integer value
//     for (int i = 0; i < n; i++) {
//         if (num[i] > max) {
//             max = num[i];
//         }
//     }
//     return max;
// }

// // Function to find the minimum value in the array
// int minvalue(int num[], int n) {
//     int min = INT_MAX; // Initialize min to the largest possible integer value
//     for (int i = 0; i < n; i++) {
//         if (num[i] < min) {
//             min = num[i];
//         }
//     }
//     return min;
// }

// int main() {
//     int size;
//     cin >> size;
//     int num[10000];

//     for (int i = 0; i < size; i++) { // Corrected the loop condition
//         cin >> num[i];
//     }

//     cout << "Maximum value is " << maxvalue(num, size) << endl;
//     cout << "Minimum value is " << minvalue(num, size) << endl; // Added space after "is"

//     return 0;
// }

// TO FIND THE SUM OF ALL THE ELEMENTS OF AN ARRAY

// #include<iostream>
// using namespace std;
// int arraysum(int abhie[],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+abhie[i];
//     }
//     return sum;
// }
// int main(){
//    int size;
//    cin>>size;
//    int abhie[10000];
//    for(int i=0;i<size;i++){
//     cin>>abhie[i];
//    }
//    arraysum(abhie,size);
//    cout<<"Sum of all the elemets will be"<<arraysum(abhie,size);

// }
// #include<iostream>
// using namespace std;
// void reverse(int arr[],int size){
//   int start=0;
//   int end=size-1;

//     while( start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
// }
// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
// }

// int main(){
//     int ekta[6]={1,2,3,4,5,6};
//     int abhinav[5]={1,2,3,4,5};
//     reverse(ekta,6);
//     reverse(abhinav,5);
//     printarray(ekta,6);
//     printarray(abhinav,5);
// }

//  LEETCODE PROBLEM OF ARRAY

// SWAP THE ALTERNATE ELEMETS IN AN ARRAY
// #include<iostream>
// using namespace std;
// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
// }
// void swapalternate(int arr[],int size){
//     int a=0;
//     int b=1;
//     while(a<=size){
//         swap(arr[a],arr[b]);
//         a=a+2;
//         b=b+2;
//     }

// }
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     swapalternate(arr,6);
//     printarray(arr,6);
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int size;
//   int marks[size];

//   cout<<"Enter your size of array"<<endl;
//   for( int i=0;i<size;i++){
//   cin>>marks[i];
//   }
//   for(int i=0;i<size;i++){
//       if (marks[i]<=35){
//           return i;
//       }

//   }
//   cout<<"Everyone have more than 35 marks"<<endl;

//

// FIND A NUMBER WHICH PRESENT ONLY ONCE IN AN ARRAY
//  hint= xor all the element you will got the unique number of the array

// #include<iostream>
// using namespace std;
// int findunique(int arr[],int size){
//   int ans=0;
//   for(int i=0;i<size;i++){
//    ans=ans^arr[i] ;
//   }
//   return ans;
// }
// int main(){
//   int arr[10000]={1,2,2,3,3};
//    int result=findunique(arr,6);
//   cout<<"Unique number is"<<result<<endl;

// }
// FIND DUPLICATES  IN ARRAY
// #include <iostream>
// using namespace std;
// int findDuplicacy(int arr[], int size)
// {
//   int ans = 0;
//   // xor ing all the array elements
//   for (int i = 0; i < size; i++)
//   {
//     ans = ans ^ arr[i];
//   }
//   // xor[1,n-1]
//   for (int i = 1; i < size; i++)
//   {
//     ans = ans ^ i;
//   }
//   return ans;
// }
// int main()
// {
//   int arr[1000];
//   int n;
//   cin >> n;
//   cout << "Enter the number in the array" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   int result = findDuplicacy(arr, 5);
//   cout << "Duplicacy number will be" << result << endl;
// }

// QUESTION -GIVEN AN  INTEGER ARRAY NUMS OF LENGTH WHERE ALL THE INTEGERS OF NUMS ARE IN THE RANGE [1,N] AND
//  EACH INTEGER APPEARS ONCE OR TWICE RETURN AN ARRAY OF ALL THE INTEGER THAT APPEARS TWICE


// #include<iostream>
// using namespace std;
//  int finddoubleoccurence(int arr[],int size){
// //   int ans=0;
 
//   for(int i=0;i<size;i++){
//     ans=ans^arr[i];
//     if(ans==0){
//     cout<<arr[i];
//     break;
//     }
//    if (ans!=0){
//     cout<<"No duplicacy"<<endl;
//    }
  
  
//   }

//  }
// int main(){
//   int arr[1000];
//   int n;
//   cin>>n;
//   cout<<"Enter the elements of an array"<<endl;
//   for(int i=0;i<n;i++){
//     cin>>arr[i];

//   }
//   int result=finddoubleoccurence(arr,5);

// }

// Intersection of two array of different size

// #include<iostream>
// using namespace std;
// int intersection(int A[],int size1,int B[],int size2){
// int element;
//   for(int i=0;i<size1;i++){
    
//     int element=A[i];
  
//   for(int j=0;j<size2;j++){
//      if (element==B[j]){
//       cout<<B[j];
//       B[j]=100;
//       break;
//      }
//   }
// }
// }
// int main(){
//      int A[1000];
//      int B[1000];
//   int n;
//   cin>>n;
//   cout<<"Enter the elements of an first array"<<endl;
//   for(int i=0;i<n;i++){
//     cin>>A[i];

// //    }
// //    cout<<"Enter the elements of an second array"<<endl;
// //    for(int j=0;j<n;j++){
// //     cin>>B[j];

// //    }
// //    intersection(A,5,B,5);
// // }
// #include<iostream>
// // using namespace std;
// // void printarray(int A[],int size){
// //     for(int i=0;i<size;i++){
// //         cout<<A[i];
// //     }
// // }
   

// // void reverse(int A[],int size){
// //     int a=0;
// //     int b=size-1;
// //     while(a<b){
// //     swap(A[a],A[b]);
// //     a++;
// //     b--;
// //     }
    
// // }
// // int main(){
// //     int A[1000];
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //       cout<<A[i];
// //     }
// // reverse(A,n);
// // printarray(A,n);
    
// // }
// // QUESTION-find missing number in an array
// // #include<iostream>
// using namespace std;
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"Enter the size of an array"<<endl;
//     cin>>n;
   
//     int sum=0;
//     for(int i=1;i<n+1;i++){
//         sum=sum+i;
//     }
//      for(int i=1;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sum<<endl;
//     int originalsum=0;
//     for(int i=1;i<n;i++){
//         originalsum=originalsum+arr[i];
//     }
//     cout<<originalsum<<endl;
//     int difference;
//     difference=sum-originalsum;
//     cout<<"Missing number will be"<<difference<<endl;
//     return 0;

// }

// ...................................................................................................................................................


   



