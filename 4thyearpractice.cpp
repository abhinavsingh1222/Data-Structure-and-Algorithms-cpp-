// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int a;
// // // //     cin>>a;
// // // //     cout<<a<<endl;
// // // //     cout<<"HEllo golu "<<endl;
// // // //     return 0;
// // // // }

// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int a;
// // // //     cin>>a;
// // // //     if (a%2==0){
// // // //         cout<<"Even"<<endl;

// // // //     }
// // // //     else{
// // // //         cout<<"Odd"<<endl;
// // // //     }

// // // // }

// // // // function which print even or odd upto n
// // // #include<iostream>
// // // using namespace std;
// // // void printeven(int n){
// // //     for(int i=1;i<n;i++){
// // //         if(i%2==0){
// // //             cout<<i;
// // //         }
// // //     }
// // // }
// // // void printodd(int n){
// // //     for(int i=1;i<n;i++){
// // //         if(i%2!=0){
// // //             cout<<i<<endl;
// // //         }
// // //     }
// // // }
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     // printeven(n);
// // //     printodd(n);
// // //     return 0;

// // // }

// // // find sum from  1 to n
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cin>>n;
// //     // int sum=0;
// //     // for(int i=1;i<n;i++){
// //     //  sum=sum+i;

// //     // }
// //     // cout<<sum<<endl;
// //     // return 0;
// // // }

// // // check whether the number is prime or not

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cin>>n;

// // //    for(int i=2;i<n-1;i++){
// // //     if(n%i==0){
// // //         cout<<"NOt prime"<<endl;
// // //         return 0;// exit from program

// // //     }
// // //    }
// // //    cout<<"Prime"<<endl;

// // ////

// // // // find the sum from 1 to n
// // // #include<iostream>
// // // using namespace std;
// // // int sum(int n){
// // //     int sum=0;
// // //     for(int i=1;i<=n;i++){
// // //         sum=sum+i;

// // // // //     }
// // // // //     cout<<sum<<endl;

// // // // // }
// // // // // int main(){
// // // // //     int n;
// // // // //     cin>>n;
// // // // //     sum(n);
// // // // //     return 0;
// // // // // }

// // //    PATTERN PROBLEM

// // // // question 1= * * * * *
// // //         /      * * * * *
// // //                * * * * *
// // //                * * * * *
// // //                * * * * *

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cout<<"Enter the value of n "<<endl;
// // //     cin>>n;
// // //     int i=1;
// // //     while(i<=n){
// // //         int j=1;
// // //         while(j<=n){
// // //             cout<<" * ";
// // //             j=j+1;
// // //         }
// // //         cout<<endl;
// // //         i=i+1;
// // //     }

// // // }

// // // // // // // // // // // // // // Question= 1 1 1
// // // // // // // // // // // // //         //   2 2 2
// // // // // // // // // // // // //         //   3 3 3

// // // // // // // // // // // // // // #include<iostream>
// // // // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // // // int main(){
// // // // // // // // // // // // // //     int n;
// // // // // // // // // // // // // //     cin>>n;
// // // // // // // // // // // // // //     int count=1;
// // // // // // // // // // // // // //     int i=1;
// // // // // // // // // // // // // //     while(i<=n){
// // // // // // // // // // // // // //         int j=1;
// // // // // // // // // // // // // //         while(j<=n){
// // // // // // //             cout<<count" " ;
// // // // // // //             j=j+1;

// // // // // // //         }
// // // // // // //         count++;

// // // // // // //         cout<<endl;
// // // // // // //         i=i+1;
// // // // // // //     }
// // // // // // // }

// // // // // // // Question  3 2 1
// // // // // // //           3 2 1
// // // // // // //           3 2 1

// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     int n;
// // // // // // //     cin>>n;
// // // // // // //     int i=1;
// // // // // // //     while(i<=n){
// // // // // // //         int j=1;
// // // // // // //         while(j<=n){
// // // // // // //             cout<< n-j+1;
// // // // // // //             j=j+1;
// // // // // // //         }
// // // // // // //         cout<<endl;
// // // // // // //         i=i+1;

// // // // // // //     }
// // // // // // // }

// // // // // // // question
// // // // // // // *
// // // // // // // * *
// // // // // // // * * *
// // // // // // // * * * *
// // // // // // // * * * *

// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // int main(){
// // // // // // int n;
// // // // // // cin>>n;
// // // // // // int i=1;
// // // // // // while(i<=n){
// // // // // //     int j=1;
// // // // // // while(j<=i){
// // // // // //     // cout<<" *";
// // // // // //     j=j+1;
// // // // // // }
// // // // // // cout<<endl;
// // // // // // i=i+1;
// // // // // // }
// // // // // // }

// // // // // // Question
// // // // // // 1
// // // // // // 2 2
// // // // // // 3 3 3
// // // // // // 4 4 4 4

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n;
// // // // //     cin>>n;
// // // // //     int i=1;
// // // // //     while(i<=n){
// // // // //         int j=1;
// // // // //         // while(j<=i){
// // // // //             cout<<i;
// // // // //             j=j+1;
// // // // //         }

// // // // //         cout<<endl;
// // // // //         i++;
// // // // //     }
// // // // // }

// // // // // question
// // // // // 1
// // // // // 2 1
// // // // // 3 2 1
// // // // // 4 3 2 1

// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int n;
// // // //     cin>>n;
// // // //     int i=1;
// // // //     int num=1;

// // // //     while(i<=n){
// // // //         int j=1;
// // // //         while(j<=i){
// // // //            cout<<num;
// // // //            num--;
// // // //            j=j+1;
// // // //         }
// // // //         i=i+1;
// // // //         num=i;
// // // //         cout<<endl;
// // // //     }
// // // // }
// // // // If the given no is 234 then find the multiply and add value if all digit will be add and multiply

// // // // #include<iostream>
// // // // using namespace std;
// // // // void reverse(int n){

// // // //    while(n!=0){
// // // //     int rem=n%10;
// // // //     cout<<rem<<"";
// // // //     n=n/10;
// // // //    }
// // // // }
// // // // int main(){
// // // //     int n;
// // // //     cin>> n;
// // // //     reverse(n);
// // // //     return 0;
// // // // }
// // // //
// // // // CALCULATOR PROBLEM
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int a;
// // //     int b;
// // //     cin>>a >>b;
// // //     int choice;
// // //     cin>>choice;
// // //     switch(choice){
// // //         case 1:
// // //         cout<<"addition of this will be "<<a+b<<endl;
// // //         break;
// // //         case 2:
// // //         cout<<"Substraction will be "<<a-b<<endl;
// // //         break;
// // //         case 3:
// // //         cout<<"Multiplication will  be "<<a*b<<endl;
// // //     }
// // //     return 0;

// // //     }

// // //        ARRAY PROBLEMS

// // //     To print the array number /value

// // // // // // // // // // #include<iostream>
// // // // // // // // // // using namespace std;
// // // // // // // // // // void print (int arr[],int size){
// // // // // // // // // //     for(int i=0;i<size;i++){
// // // // // // // // // //         cout<<arr[i]<<" ";
// // // // // // // // // //     }
// // // // // // // // // //     cout<<endl;
// // // // // // // // // // }
// // // // // // // // // // int main(){
// // // // // // // // // //     int arr[5]={1,2,3,4,5};
// // // // // // // // // //     print(arr,5);
// // // // // // // // // //     return 0;

// // // // // // // // // // }

// // // // // // // // // // very important question == find the maximum and minimum value of an array
// // // // // // // // // #include<iostream>
// // // // // // // // // #include<climits>
// // // // // // // // // using namespace std;
// // // // // // // // // int maxi(int arr[],int size){
// // // // // // // // //     int max=INT_MIN;
// // // // // // // // //     for(int i=0;i<size;i++){
// // // // // // // // //         if(arr[i]>max){
// // // // // // // // //             max=arr[i];
// // // // // // // // //         }
// // // // // // // // //     }
// // // // // // // // //     return max;
// // // // // // // // // }
// // // // // // // // // int mini(int arr[],int size){
// // // // // // // // //     int min=INT_MAX;
// // // // // // // // //     for(int i=0;i<size;i++){
// // // // // // // // //         if(arr[i]<min){
// // // // // // // // //             min=arr[i];
// // // // // // // // //         }
// // // // // // // // //     }
// // // // // // // // //     return min;
// // // // // // // // // }
// // // // // // // // // int main(){
// // // // // // // // //     int arr[5]={22,58,54,65,26};
// // // // // // // // //     maxi(arr,5);
// // // // // // // // //     mini(arr,5);

// // // // // // // // // }

// // // // // // // // // very important question = find the number which present once in an array
// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // int findunique(int arr[],int size){
// // // // // // // // //     for(int i=0;i<size;i++){
// // // // // // // // //         bool unique=true;
// // // // // // // // //         for(int j=0;j<size;j++){
// // // // // // // // //             if(i!=j && arr[i]==arr[j]){
// // // // // // // // //                 unique=false;
// // // // // // // // //                 break;
// // // // // // // // //             }
// // // // // // // // //         }
// // // // // // // // //         if(unique){
// // // // // // // // //             cout<<arr[i]<<endl;
// // // // // // // // //         }
// // // // // // // // //     }

// // // // // // // // // }
// // // // // // // // // int main(){
// // // // // // // // //     int arr[7]={1,2,2,3,3,1,5};
// // // // // // // // //     findunique(arr,7);
// // // // // // // // // }

// // // // // // // // // Find the duplicacy in array
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // int findduplicacy(int arr[],int size){
// // // // // // // //     for(int i=0;i<size;i++){
// // // // // // // //         bool duplicate=false;
// // // // // // // //         for(int j=0;j<size;j++){
// // // // // // // //             if(i!=j && arr[i]==arr[j]){
// // // // // // // //                 duplicate=true;
// // // // // // // //                 break;
// // // // // // // //             }
// // // // // // // //         }

// // // // // // // //        if(duplicate){
// // // // // // // //         cout<<arr[i]<<" ";
// // // // // // // //        }

// // // // // // // //         }
// // // // // // // //         }
// // // // // // // // int main(){
// // // // // // // //     int arr[5]={1,2,3,4,1};
// // // // // // // //     findduplicacy(arr,5);

// // // // // // // // }

// // // // // // // // find the intersection of an array
// // // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int intersection(int a[],int size1,int b[],int size2){
// // // // // // //     for(int i=0;i<size1;i++){
// // // // // // //         for(int j=0;j<size2;j++){
// // // // // // //             if(a[i]==b[j]){
// // // // // // //                 cout<<a[i]<<" ";
// // // // // // //             }
// // // // // // //         }
// // // // // // //     }
// // // // // // //     cout<<endl;
// // // // // // // }
// // // // // // // int main(){
// // // // // // //     int a[5]={1,2,3,4,5};
// // // // // // //     int b[5]={4,5,6,7,8};
// // // // // // //     intersection(a,5,b,5);
// // // // // // //     return 0;
// // // // // // // }

// // // // // // // Introduction to 2D array
// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // //     int a[3][4];
// // // // // // //     for(int i=0;i<3;i++){
// // // // // // //         for(int j=0;j<4;j++){
// // // // // // //         cin>>a[i][j];
// // // // // // //     }
// // // // // // // }
// // // // // // //  for(int i=0;i<3;i++){
// // // // // // //         for(int j=0;j<4;j++){
// // // // // // //         cout<<a[i][j];
// // // // // // //     }
// // // // // // //     cout<<endl;
// // // // // // // }
// // // // // // // }

// // // // // // // find the sum row wise
// // // // // #include<iostream>
// // // // // #include<climits>
// // // // // using namespace std;
// // // // // int sumrow(int a[][4],int row,int col){

// // // // //     for(int row=0;row<3;row++){
// // // // //           int sum=0;
// // // // //         for(int col=0;col<4;col++){
// // // // //             sum=sum+a[row][col];
// // // // //         }
// // // // //         cout<<sum<<" ";
// // // // //     }
// // // // //     cout<<endl;
// // // // // }
// // // // // int largestrowsum(int a[][4],int row,int col){
// // // // //     int max=INT_MIN;
// // // // //     sumrow(a,3,4);
// // // // //     for(int i=0;i<3;i++){
// // // // //         if(a[i][4]>max){
// // // // //             max=a[i][col];
// // // // //         }
// // // // //     }
// // // // //     cout<<max<<" ";
// // // // //     // cout<<row<<'';
// // // // // }
// // // // // // int colowise(int a[][4],int row,int col){
// // // // // //     for(int j=0;j<col;j++){
// // // // // //         int sum=0;
// // // // // //         for(int i=0;i<row;i++){
// // // // // //             sum=sum+a[i][j];
// // // // // //         }
// // // // // //         cout<<sum<<" ";
// // // // // //     }
// // // // // //     cout<<endl;
// // // // // // }
// // // // // int main(){
// // // // //         int a[3][4];
// // // // //     for(int i=0;i<3;i++){
// // // // //         for(int j=0;j<4;j++){
// // // // //         cin>>a[i][j];
// // // // //     }
// // // // // }
// // // // //  for(int i=0;i<3;i++){
// // // // //         for(int j=0;j<4;j++){
// // // // //         cout<<a[i][j];
// // // // //     }
// // // // //     cout<<endl;
// // // // // }
// // // // // // sumrow(a,3,4);
// // // // // // colowise(a,3,4);
// // // // // largestrowsum(a,3,4);
// // // // // return 0;

// // // // // }

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int colwisesum(int a[][4],int row,int col){
// // // // //     for(int i=0;i<col;i++){
// // // // //         int sum=0;
// // // // //         for(int j=0;j<row;j++){
// // // // //             sum=sum+a[j][i];
// // // // //         }
// // // // //         cout<<sum<<" ";
// // // // //     }
// // // // //     cout<<endl;
// // // // // }
// // // // // int sumrow(int a[][4],int row,int col){
// // // // //     for(int i=0;i<row;i++){
// // // // //         int sum=0;
// // // // //         for(int j=0;j<col;j++){
// // // // //             sum=sum+a[i][j];
// // // // //         }
// // // // //         cout<<sum<<" ";
// // // // //     }
// // // // //     cout<<endl;
// // // // // }
// // // // // int main(){
// // // // //     int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// // // // //     sumrow(a,3,4);
// // // // //     colwisesum(a,3,4);
// // // // //     return 0;

// // // // // }

// // // // Largestrowsum
// // // #include<iostream>
// // // #include<climits>
// // // using namespace std;
// // // int largestsum(int a[][4],int row ,int col){
// // //     int max=INT_MIN;

// // //         for(int i=0;i<row;i++){
// // //         int sum=0;
// // //         for(int j=0;j<col;j++){
// // //             sum=sum+a[i][j];
// // //         }
// // //         cout<<sum<<" ";
// // //         if(sum>max){
// // //             max=sum;

// // //         }
// // //     }
// // //     cout<<endl;
// // //     cout<<" one of the maximum sum in rows will be "<<max<<endl;
// // // }
// // // int main(){
// // //     int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// // //      largestsum(a,3,4);
// // //      return 0;
// // // }
// // // Given a 2 d array and we have to print the 2 array in wave like structure

// // // hint = col no is odd it will go bottom to top and if col is even we go top to bottom

// // // #include<iostream>
// // // using namespace std;
// // // void printwave(int a[][4],int row,int col){
// // //     for(int j=0;j<col;col++){
// // //         if(j&1){ // bottom to top
// // //         for(int j=col;j<0;j--){
// // //             cout<<a[j][row]<<" ";
// // //         }
// // //         }
// // //         else{
// // //             for(int j=0;j<col;j++){
// // //                 cout<<a[j][row]<<" ";
// // //             }
// // //         }
// // //     }
// // // }
// // // int main(){
// // //  int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// // //  printwave(a,3,4);
// // //  return 0;

// // // }

// // // searching topics
// // // searching is a technique to find any element position in an array or in any other data structure
// // // 1.binary seaching
// // // 2. Linear Searching

// //         //   LINEAR SEARCH =APPLICABLE ON SORTED ARRAY OR UNSORETD BOTH
// //         // #include<iostream>
// //         // using namespace std;
// //         // bool linearsearch(int arr[],int size,int key){
// //         //     for(int i=0;i<size;i++){
// //         //         if(arr[i]==key){
// //         //             return 1;
// //         //         }
// //         //     }
// //         //     return 0;
// //         // }
// //         // int main(){
// //         //     int arr[5]={1,5,4,9,6};
// //         //     int key;
// //         //     cin>>key;
// //         // bool ans= linearsearch(arr,5,key);
// //         // if(ans)
// //         // {
// //         //     cout<<"YEs key is present"<<endl;
// //         // }
// //         // else{
// //         //     cout<<"Key is not present"<<endl;
// //         // }

// //         //     return 0;

// //         // }

// // // // // LINEAR SEARCH PROGRAMS

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // bool search(int arr[],int size,int key){
// // // // //      for(int i=0;i<size;i++){
// // // // //   if(arr[i]==key){
// // // // //     return 1;
// // // // //   }
// // // // //   }
// // // // //   return 0;

// // // // // }

// // // // // int main(){
// // // // //  int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
// // // // // //  whether 1 is present or not
// // // // // int key;
// // // // // cout<<"Enter the key element"<<endl;
// // // // // cin>>key;
// // // // //  bool found=search(arr,10,key);
// // // // //  if(found){
// // // // //     cout<<"Elemet is present"<<endl;
// // // // // }
// // // // // else{
// // // // //  cout<<"Elents is not present "<<endl;
// // // // // }

// // // // // }

// // // // // find all the occurence of key and their index no at which they found

// // // // #include<iostream>
// // // // using namespace std;
// // // // int occurenceofkey(int a[],int size,int key){
// // // //     bool found;
// // // //     for(int i=0;i<size;i++){
// // // //         if(a[i]==key){
// // // //             cout<<i<<" ";
// // // //             found=true;
// // // //         }

// // // //     }
// // // //     if(!found){
// // // //         cout<<"not present"<<endl;
// // // //     }
// // // // }
// // // // int main(){
// // // //     int a[9]={1,2,3,4,2,5,6,7,2};
// // // //      int key;
// // // //      cin>>key;
// // // //       occurenceofkey(a,9,key);

// // // // }

// // // // FIND FIRST and last occurence of key
// // // #include<iostream>
// // // using namespace std;
// // // int occurence(int a[],int size,int key){
// // //     bool found=false;
// // //     int first;
// // //     int last;
// // //     // while(found!=true){
// // //     for(int i=0;i<size;i++){
// // //         if(a[i]==key){
// // //         first=i;
// // //         cout<<first<<endl;
// // //         found=true;
// // //         break;
// // //         }
// // //     }
// // //     if(!found){
// // //         cout<<"Not present"<<endl;
// // //         break;
// // //     }
// // //     }
// // //     for(int i=size;i>0;i--){
// // //         if(a[i]==key){
// // //             last=i;
// // //             cout<<last<<endl;
// // //             break;
// // //         }
// // //     }

// // // }

// // // int main(){
// // //     int a[9]={1,2,3,4,2,5,6,7,2};
// // //     int key;
// // //     cin>>key;
// // //     occurence(a,9,key);
// // // }

// // // .................................................................................................................................................................

// // //    BINARY SEARCH

// // // #include<iostream>
// // // using namespace std;\
// // // bool binarysearch(int a[],int size,int key){
// // //  int start=0;
// // //  int end=size-1;
// // //  int mid=start+(end-start)/2;

// // //  while(start<=end){
// // //         if(a[mid]==key){
// // //                 return true;

// // //         }
// // //          if (a[mid]>key){
// // //                 end=mid-1;
// // //         }
// // //         else{
// // //                 start=mid+1;
// // //         }
// // //         mid=start+(end-start)/2;
// // //  }
// // //  return false;

// // // }
// // // int main(){
// // //  int a[7]={1,2,5,8,74,89,101};
// // //  int key;
// // //  cin>>key;
// // // bool result= binarysearch(a,7,key);
// // // if(result){
// // //         cout<<"YES"<<endl;
// // // }
// // // else{
// // //         cout<<"NO"<<endl;
// // // }
// // // }

// // // // what is the first and last occurence of an digit in an array
// // // #include<iostream>
// // // using namespace std;
// // // // int firstoccurence(int a[],int size,int key){
// // // //         int s=0;
// // // //         int e=size-1;
// // // //         int first=-1;
// // // //         while(s<=e){
// // // //              int   mid=s+(e-s)/2;
// // // //                 if(a[mid]==key){
// // // //                         first=mid;
// // // //                         e=mid-1;
// // // //                 }
// // // //                 else if(key>a[mid]){
// // // //                         s=mid+1;
// // // //                 }
// // // //                 else{
// // // //                         e=mid-1;
// // // //                 }
// // // //         }
// // // //         return first;
// // // // }
// // // int lastoccurence(int a[],int size,int key){
// // //    int s=0;
// // //         int e=size-1;
// // //         int last=-1;
// // //         while(s<=e){
// // //              int   mid=s+(e-s)/2;
// // //                 if(a[mid]==key){
// // //                         last=mid;
// // //                         s=mid+1;
// // //                 }
// // //                 else if(key>a[mid]){
// // //                         s=mid+1;
// // //                 }
// // //                 else{
// // //                         e=mid-1;
// // //                 }
// // //         }
// // //    return last;
// // // }
// // // int main(){
// // //    int a[9]={1,2,3,3,3,3,3,3,4};
// // //    int key;
// // //    cin>>key;
// // // //   int result= firstoccurence(a,9,3);
// // // //   cout<<"first oc : "<<result<<endl;
// // // int result=lastoccurence(a,9,key);
// // // cout<<result<<endl;
// // //    return 0;
// // // }

// // /// FIND THE PEAK INDEX IN AN MOUNTAIN ARRAY
// // // moutain array= sorted array havin one side value in increasing order and other side in decreasing order

// // // array ={3,4,5,1}

// // // #include<iostream>
// // // using namespace std;
// // // int peakindex(int a[],int size){
// // //         int s=0;
// // //         int e=size-1;
// // //         while(s<e){
// // //               int   mid=s+(e-s)/2;
// // //                 if(a[mid]<a[mid+1]){
// // //                         s=mid+1;
// // //                 }
// // //                 else{
// // //                         e=mid;
// // //                 }
// // //         }
// // //         return a[s];
// // // }
// // // int main(){
// // //         int size;
// // //         cin>>size;
// // //         int a[size];
// // //         for(int i=0;i<size;i++){
// // //                 cin>>a[i];
// // //         }
// // //         int result=peakindex(a,size);
// // //         cout<<result<<endl;
// // //         return 0;

// // // }

// // // // find the pivot element in an array
// // // #include<iostream>
// // // using namespace std ;
// // // int pivot (int a[],int size){
// // //   int s=0;
// // //   int e=size-1;
// // //   while(s<e){
// // //   int m=s+(e-s)/2;
// // //   if(a[mid]<a[mid+1]){
// // //        s=mid+1;
// // //   }
// // //   else{
// // //         e=mid;
// // //   }

// // //   }
// // //   }
// // // }
// // // int main(){
// // //  int a[5]={7,9,1,2,3};

// // // }

// // // Introduction to an 2 D array

// // // print the 2 d array in wave form

// // // #include<iostream>
// // // using namespace std;
// // // void printwavelike(int a[][3],int rows ,int cols){
// // //   for(int col=0; col<cols;col++){
// // //     if(col&1){// odd=bottom to top
// // //     for(int row=rows-1;row>=0;row--){
// // //      cout<<a[row][col]<<" ";
// // //     }
// // //     }
// // //     else{// top to bottom
// // //       for(int row=0;row<rows;row++){
// // //         cout<<a[row][col]<<" ";
// // //       }

// // //     }

// // //   }
// // // }
// // // int main(){
// // //   int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
// // //   printwavelike(a,3,3);
// // // }

// // // ..........................................................................................................................
// //                     // STRING = one dimensional character array
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //    char a[10];
// // //    cin>>a; // if we add space , tab during input then cin stop execution
// // //    a[2]='\0';
// // //    cout<<a<<endl;
// // //    return 0;

// // // }

// // // FIND THE LENGTH OF STRING
// // // #include<iostream>
// // // using namespace std;
// // // int findlenght(string str){
// // //     int count=0;
// // //     for(int i=0;str[i]!='\0';i++){
// // //         count++;
// // //     }
// // //     return count++;
// // // }
// // // int main(){
// // //     string str;
// // //     cin>>str;
// // //    int result = findlenght(str);
// // //    cout<<result<<endl;
// // //    return 0;

// // // }

// // // REVERSE THE STRING
// // // #include<iostream>
// // // #include<string>
// // // using namespace std;
// // // void reverse(string &str){
// // //     int a=0;
// // //     int b=str.length()-1;
// // //     while(a<=b){
// // //         swap(str[a],str[b]);
// // //         a++;
// // //         b--;
// // //     }
// // // }

// // // int main(){
// // //     string str;
// // //     cin>>str;
// // //     reverse(str);
// // //     cout<<str<<endl;
// // //     return 0;
// // // }

// // // #include<iostream>
// // // using namespace std;
// // // bool palindrome (int &n){
// // //     int sum=0;
// // //     while(n!=0){
// // //       int r= n%10;
// // //       sum=sum*10+r;
// // //       n=n/10;

// // //     }
// // //      if(sum==n){
// // //         return true;
// // //      }
// // //      else{
// // //         return false;
// // //      }
// // // }
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //   bool ans=  palindrome(n);
// // //   if(ans){
// // //     cout<<"Palindrome"<<endl;

// // //   }
// // //   else{
// // //     cout<<"no"<<endl;
// // //   }
// // //     return 0;
// // //

// // ///     LINKED LIST = A type of data structure in which one node is connected with another having addres of next node

// // //  #include<iostream>
// // //  using namespace std;
// // //  class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node(int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //     }

// // //  };
// // //  void insertionattale(node *&head,int data){
// // //     node *temp=new node(data);
// // //     head->next=temp;

// // //  }
// // //  void insertionhead(node *&head,int data){
// // //     node *temp =new node(data);
// // //      temp->next=head;
// // //       head=temp;
// // //  }
// // //  void print(node *&head){
// // //     node *temp=head;
// // //     while(temp !=NULL){
// // //         cout<<temp->data<<" ";
// // //         temp=temp->next;
// // //     }
// // //     cout<<endl;
// // //  }
// // //  int main(){
// // //     node *node1=new node(2);
// // //     node *head=node1;
// // //     insertionattale(head,3);
// // //     print(head);
// // //     insertionhead(head,1);
// // //        print(head);

// // //     return 0;

// // //  }

// // // Question = insertion of node at tale in linked list
// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node (int data){
// // //         this->data=data;// here this locate the current object
// // //         this->next=NULL;
// // //     }
// // // };
// // // void insertionattale(node *&tale,int data){
// // // node *temp=new node(data);
// // // tale->next=temp;
// // // tale=temp;

// // // }
// // // void print(node *&head){
// // //     node *temp=head;
// // //     while(temp!=nullptr){
// // //         cout<<temp->data<<" ";
// // //         temp=temp->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // bool detectloop(node *&head){
// // //    if(head==nullptr){
// // //     return false;
// // //    }
// // //    map<node *,bool> visited;
// // //    while(temp!=nullptr){
// // //     if(visited[temp]==true){ // check krnge kya ham jis value pr khade hai vo phle se true hai  agr hai toh loop hai
// // //         return true;
// // //     }
// // //     visited[temp]=true;
// // //     temp=temp->next;
// // //    }
// // // }
// // // return false;
// // // int main(){

// // //  node *first=new node(1);
// // //  node *head=first;
// // //  node *tale=first;
// // // insertionattale(tale,2);
// // // print(head);
// // // }

// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // // public:
// // // int data;
// // // node *next;
// // // node(int data){
// // //     this->data=data;
// // //     this->next=nullptr;
// // // }
// // // };
// // // void insertionattale(node *&tale,int data){
// // // node *temp=new node(data);
// // // tale->next=temp;
// // // tale=temp;

// // // }
// // // void insertaatany(node *&head,int data ,int key){
// // //     node *temp=new node(data);
// // //     node *p=head;
// // //     node *q=head;
// // //     while(p->data!=key){
// // //         p=p->next;
// // //     }
// // //     q=p->next;
// // //     p->next=temp;
// // //     temp->next=q;

// // // }
// // // void print(node *&head){
// // //     node *temp=head;
// // //     while(temp!=nullptr){
// // //         cout<<temp->data<<" ";
// // //         temp=temp->next;
// // //     }
// // //     cout<<endl;
// // // }

// // // int main(){
// // //     node *first=new node(1);
// // //     node *head=first;
// // //     node *tale=first;
// // //     insertionattale(tale,2);
// // //     insertionattale(tale,3);
// // //     insertionattale(tale,4);
// // //     insertionattale(tale,5);
// // //     insertionattale(tale,6);
// // //     print(head);
// // //     insertaatany(head,8,4);
// // //     print(head);

// // // }

// // /// Deletion in linked list

// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node (int data){
// // //         this->data=data;// here this locate the current object
// // //         this->next=NULL;
// // //     }
// // // };
// // // void insertionattale(node *&tale,int data){
// // // node *temp=new node(data);
// // // tale->next=temp;
// // // tale=temp;

// // // }
// // // void print(node *&head){
// // //     node *temp=head;
// // //     while(temp!=nullptr){
// // //         cout<<temp->data<<" ";
// // //         temp=temp->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // void deletion(node *&head ,int position){
// // //   if(head==nullptr){
// // //     delete head;
// // //   }
// // //   node *curr=head;
// // //   node *prev=nullptr;
// // //   int cnt=0;
// // //   while(cnt!=position){
// // //     prev=curr;
// // //     curr=curr->next;

// // //     cnt++;
// // //   }
// // //  prev->next=curr->next;
// // //  delete curr;

// // // }
// // // int main(){

// // //  node *first=new node(1);
// // //  node *head=first;
// // //  node *tale=first;
// // //  insertionattale(tale,2);
// // //  insertionattale(tale,3);
// // //  insertionattale(tale,4);
// // //  insertionattale(tale,5);
// // //  insertionattale(tale,6);
// // //  insertionattale(tale,7);
// // //  insertionattale(tale,8);

// // // print(head);
// // // deletion(head,4);
// // // print(head);
// // // return 0;
// // // }

// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // // public:
// // // int data;
// // // node *next;
// // // node(int data){
// // //     this->data=data;
// // //     this->next=nullptr;
// // // }
// // // };
// // // void insertion(node *&tale,int data){
// // //     node *temp=new node(data);
// // //     tale->next=temp;
// // //     tale=temp;
// // // }
// // // void print(node *&head){
// // //     node*temp=head;
// // //     while(head!=NULL){
// // //         cout<<temp->data<<" ";
// // //         temp=temp->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // bool detectloop(node *&head){
// // //     if(head==nullptr){
// // //         return false;
// // //     }
// // //     node *temp=head;
// // //     map<node *,bool> visited;
// // //     while(temp!=nullptr){
// // //         if(visited[temp]==true){
// // //             return true;
// // //         }
// // //         visited[temp]=true;
// // //         temp=temp->next;
// // //     }
// // //     return false;
// // // }
// // // int main(){
// // // node *first=new node(1);
// // // node*head=first;
// // // node* tale=first;
// // // insertion(tale,2);
// // // insertion(tale,3);
// // // insertion(tale,4);
// // // insertion(tale,5);
// // // insertion(tale,6);
// // // print(head);
// // // return 0;

// // // }

// // // CIRCULAR LINKED LIST

// // // we do not need head pointer in circular linked list

// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // // node(int data){
// // //     this->data=data;
// // //     this->next=nullptr;
// // // }
// // // };
// // // void insertion(node *&tale,int key ,int data){
// // //     if(tale==nullptr){// if the linked is empty
// // //         node *newnode=new node(data);
// // //         tale=newnode;
// // //         tale->next=newnode;
// // //     }
// // //     else{
// // //         node *curr=tale;
// // //         while(curr->data!=key){
// // //             curr=curr->next;
// // //         }
// // //         node *temp=new node(data);
// // //         node *farward=curr->next;
// // //         curr->next=temp;
// // //        temp->next=farward;

// // //     }
// // // }

// // //     void print (node *&tale){
// // //         node *temp=tale;
// // //       do{

// // //        cout<<temp->data<<" ";
// // //          temp=temp->next;

// // //       }while(temp!=tale) ;
// // //        cout<< temp->data <<" ";
// // //         temp=temp->next;

// // //     }
// // //     void deletion(node *&tale,int key){
// // //         if(tale==nullptr){
// // //             cout<<"There is no node in an linked list "<<endl;
// // //         }

// // //         else{
// // //              node *curr=tale;
// // //             node*prev=tale;
// // //             while(curr->data!=key){
// // //                 prev=curr;
// // //                 curr=curr->next;

// // //             }
// // //             if(curr == prev){
// // //     tale = nullptr;
// // //     delete curr;
// // //     return;   // stop here, don’t run rest
// // // }
// // // prev->next = curr->next;
// // // curr->next = nullptr;
// // // delete curr;

// // //         }

// // //     }

// // // int main(){
// // // node *first=new node(1);
// // // node *tale=first;
// // // insertion(tale,1,2);
// // // insertion(tale,2,3);
// // // insertion(tale,3,4);

// // // print(tale);
// // // deletion(tale,3);
// // // print(tale);
// // // }
// // // /

// // // //// DOUBLY LINKED LIST
// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node *prev;
// // //     node (int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //         this->prev=nullptr;

// // //     }
// // // };
// // // void insertion(node *&head,int data){
// // //     if(head==nullptr){// empty
// // //         node *temp=new node(data);
// // //         head=temp;
// // //     }
// // //     node *temp=new node(data);
// // //     head->next=temp;
// // //     temp->prev=head;
// // //     head=temp;

// // // }
// // // void print(node *&tale){
// // //     node *p=tale;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // int main(){
// // //     node *first=new node(5);
// // //     node *head=first;
// // //     node *tale=first;
// // //     insertion(head,6);
// // //     print(tale);

// // // }

// // // QUESTION ON LINKED LIST

// // // // question 1=  Reverse a linked list
// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node(int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //     }
// // // };
// // // void insertiontale(node *&tale,int data){
// // //     if(tale==nullptr){
// // //         node *temp=new node(data);
// // //         tale=temp;

// // //     }
// // //     node *temp=new node(data);
// // //     tale->next=temp;
// // //     tale=temp;
// // // }
// // // void print (node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // node * reversell(node *&head){
// // //     node *curr=head;
// // //     node *prev=nullptr;;
// // //     node *farward=nullptr;
// // //     while(curr!=nullptr){
// // //        farward=curr->next;
// // //        curr->next=prev;
// // //        prev=curr;
// // //        curr=farward;
// // //     }
// // //     return prev;

// // // }
// // // int main(){
// // // node *first=new node(5);
// // // node *tale=first;
// // // node *head=first;
// // // insertiontale(tale,6);
// // // insertiontale(tale,7);
// // // insertiontale(tale,8);
// // // insertiontale(tale,9);

// // // print(head);
// // // head=reversell(head);
// // // print(head);
// // // return 0;
// // // }

// // // Question 2: middle of linked list

// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node(int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //     }
// // // };
// // // void insertiontale(node *&tale,int data){
// // //     if(tale==nullptr){
// // //         node *temp=new node(data);
// // //         tale=temp;

// // //     }
// // //     node *temp=new node(data);
// // //     tale->next=temp;
// // //     tale=temp;
// // // }
// // // void print (node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // node * middlenode(node *&head){
// // //     node *curr=head;
// // //     int count=0;
// // //     while(curr!=nullptr){
// // //         count++;
// // //         curr=curr->next;
// // //     }
// // //     int length=(count/2)+1;
// // //     node *temp=head;
// // //     while(length>1){
// // //         temp=temp->next;
// // //          length--;
// // //     }
// // //     return temp;
// // // }
// // // int main(){
// // // node *first=new node(5);
// // // node *tale=first;
// // // node *head=first;
// // // insertiontale(tale,6);
// // // insertiontale(tale,7);
// // // insertiontale(tale,8);
// // // insertiontale(tale,9);
// // // insertiontale(tale,10);

// // // print(head);
// // // node *middle=middlenode(head);
// // // cout<<middle->data<<endl;
// // // }

// // // QUESTION 3: Reverse the linked list by k group

// // //  #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node(int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //     }
// // // };
// // // void insertiontale(node *&tale,int data){
// // //     if(tale==nullptr){
// // //         node *temp=new node(data);
// // //         tale=temp;

// // //     }
// // //     node *temp=new node(data);
// // //     tale->next=temp;
// // //     tale=temp;
// // // }
// // // void print (node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // node * reversekgroup(node *&head, int k){
// // //     if(head==nullptr){
// // //         return head;
// // //     }
// // //     node *curr=head;
// // //     node *prev=nullptr;
// // //     node *farward=nullptr;
// // //     int count=k;
// // //     while(count>0 && curr!=nullptr){// reverse first k group
// // //         farward=curr->next;
// // //         curr->next=prev;
// // //         prev=curr;
// // //         curr=farward;
// // //         count--;
// // //     }

// // //     if(farward!=nullptr){
// // //      head->next= reversekgroup(farward,k);
// // //     }
// // //     return prev;

// // // }

// // // int main(){
// // // node *first=new node(5);
// // // node *tale=first;
// // // node *head=first;
// // // insertiontale(tale,6);
// // // insertiontale(tale,7);
// // // insertiontale(tale,8);
// // // insertiontale(tale,9);
// // // insertiontale(tale,10);

// // // print(head);
// // // head=reversekgroup(head,2);
// // // print(head);
// // // }
// // #include<iostream>
// // using namespace std;
// // int duplicate(int arr[],int size){
// //     for(int i=0;i<size;i++){
// //         int key=arr[i];
// //         for(int j=i+1;j<size;j++){
// //             if(key==arr[j]){
// //                 cout<<arr[j]<<" ";
// //             }
// //         }
// //     }
// // }
// //  int missing(int arr[],int size){
// //     for(int i=1;i<=size;i++){
// //         bool found=false;
// //         for(int j=0;j<size;j++){
// //             if(arr[j]==i){
// //                 found=true;
// //                 break;
// //             }
// //         }
// //         if(!found){
// //             cout<<i<<" ";
// //             break;
// //         }
// //     }
// //  }
// // int main(){
// //     int arr[3]={1,2,2};
// //     duplicate(arr,3);
// //     missing(arr,3);

// // }

// // #include<iostream>
// // using namespace std;
// // int gcd(int &a,int &b){//euclidean algo
// //     int temp;
// //     while(b!=0){
// //         temp=b;
// //         b=a%b;
// //         a=temp;
// //     }
// //   return a;
// // }
// // int main(){
// //     int a,b;
// //     cin>>a>>b;
// //    int r= gcd(a,b);
// //    cout<<r<<endl;
// // }

// // #check whether the number is prime or not
// // #include<iostream>
// // using namespace std;
// // bool isprime(int &n){
// //     if(n<=1){
// //         return false;
// //     }
// //     if(n==2){
// //         return true;
// //     }
// //     if(n%2==0){
// //         return false;
// //     }
// //     for(int i=3;i^2<=n;i=i+2){
// //         if(n%i==0){
// //             return false;
// //         }
// //     }
// //     return true;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     isprime(n);
// // }
// // #include<iostream>
// // using namespace std;

// //    void moveZeroes(int  nums[],int size) {
// //         int n=nums.size();
// //         int count=0;
// //     for(int i=0;i<nums.size();i++){
// //         if(nums[i]==0)
// //         count++;
// //     }
// //     while(nums[n-count]!=0){
// //         int a=nums[0];
// //         int b=nums[1];
// //         for(int i=0;i<nums.size();i++){
// //             if(nums[a]==0 || nums[b]==0){
// //                 swap(nums[a],nums[b]);
// //                 a++;
// //                 b++;
// //             }
// //         }
// //     }

// //     }
// //     int main(){
// //         int nums[5]={0,1,0,3,2};
// //         movezeroes(nums,5);
// //         return 0;
// //     }

// // #include<iostream>
// // using namespace std;
// // int gcd(int a,int b){
// //     while(b!=0){
// //        int  temp=b;
// //         b=a%b;
// //         a=temp;
// //     }
// //     return a;
// // }
// // int main(){
// //     int a=6,b=12;
// //     int result=gcd(a,b);
// //     cout<<result<<endl;
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// bool isprime(int a){
//     if(a<=1){
//         return false;
//     }
//     if(a==2){
//         return true;

//     }
//     if(a%2==0){
//         return false;
//     }
//     for(int i=3;i*i<=a;i=i+2){
//         if(a%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int a;
//     cin>>a;
//     bool ans=isprime(a);
//     if(ans){
//         cout<<"yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
//     return 0;
// }

// binary search
// #include<iostream>
// using namespace std;
// bool binarysearch(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//         return true;

//         }
//         if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+end-start/2;

//     }
//     return false;
// }
// int main(){
//     int arr[5]={2,4,6,8,9};
//     int key;
//     cin>>key;
// }

// check sorted rotated array

// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;
// bool sorted(int arr[],int size){
//     int maxi=INT_MIN;
//     int a=0;
//     for(int i=0;i<size-1;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//         if(arr[i]>arr[i+1]){
//             a=i+1;
//             break;

//         }
//     }
//     for(int i=a;i<size-1;i++){
//         if(arr[i]>maxi || arr[i]>arr[i+1]){
//             return false;
//         }

//     }
//     return true;

// }
// int main(){
//     int arr[5]={3,4,5,1,2};
//    cout<<sorted(arr,5)<<endl;
//    return 0;
// }

// now the revision of the sorting algorithms

// sorting is an algorithms used to arrange the data in definite order
// there are following types of sorting are given
// 1. selection sort
// 2. Bubble sort
// 3. merge sort
// 4. quick sort

//   1.selection sort = In this sorting algorithms we find firts smallest element in an array then it will be swapped by the first index array and this processs continue untill all element get sorted
// #include <iostream>
// #include <climits>
// using namespace std;
// void selection(int arr[], int size)
// {
//     for(int i=0;i<size;i++){
//         int miniIndex=i;
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[miniIndex]){
//                 miniIndex=j;
//             }

//         }
//         swap(arr[i],arr[miniIndex]);
        
//     }
// }
// int main()
// {
//     int arr[5] = {64, 25, 12, 22, 11};
//     int size = 5;
//     selection(arr, 5);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }


// now again revise all the taught topics 

#include<iostream>
using namespace std;
int reversedigit(int n){
    int sum=0;
    while(n!=0){
    int r=n%10;
     sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
// int sumofdigits(int n){
//     int sum=0;
//     while(n!=0){
//         int r=n%10;
//         sum=sum+r;
//         n=n/10;
//     }
    // return sum;
// }
// int countdigits(int n){
//     int count=0;
//     while(n!=0){
//         int rem=n%10;
//         count++;
//         n=n/10;
//     }
//     return count;
// }
// int main(){
//     int n=123;
//     cout<<countdigits(n)<<endl;
//     // cout<<sumofdigits(n)<<endl;
//     cout<<reversedigit(n)<<endl;
//     return 0;

// }