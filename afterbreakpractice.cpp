// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a=10;
// //     int b=8;
// //     int c=a+b;
// //     cout<< c <<endl;
// //     cout<<"I really love Ekta"<<endl;
// //     return 0;
// // }
// // check whether a number is even or odd
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a;
// //     cout<<"Enter your number"<<endl;
// //     cin>>a ;
// //     if(a>0){
// //         cout<<"Number is positive"<<endl;


// //     }
// //     else{
// //         cout<<"Number is negative "<<endl;
// //     }
// //     return 0;
// // }

// // A function which print even and odd numbers upto n;

// // #include<iostream>
// // using namespace std;
// // void printeven( int n) {
// //     for(int i=1;i<=n;i++){
// //         if(i%2==0){
// //             cout<<i<<endl;
// //         }

// //     }

// // }
// // void printodd(int n){
// //  for(int i=1;i<n;i++){
// //         if(i%2!=0){
// //             cout<<i<<endl;
// //         }
// // }
// // }

// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     printeven(n);
// // //     return 0;

// // // }
// // // find the sum from 1to n 
// // #include<iostream>
// // using namespace std;
// // int sum(int &n){
// //    int sum=0;
// //     for(int i=1;i<=n;i++){
    
// //         sum=sum+i;

// //     }
// //     cout<<sum<<endl;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     sum(n);
// //     return 0;

// // }
 
// //  check whether the number is prime or not 
// // #include<iostream>
// // using namespace std;
// // bool isprime(int &n){
// //     for(int i=2;i<n;i++){
// //         if(n%i==0){
// //             return false;
// //         }
// //     }
// //     return true;
    
    
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     bool prime= isprime(n);
// //     if(prime==1){
// //         cout<<"It is prime number"<<endl;
// //     }
// //     else{
// //         cout<<"It is non prime number"<<endl;
// //     }
// //     return 0;
// // }


// // TELL ME WHETHER THE INPUT IS IN UPPERCASE OR LOWER CASE OR A DIGIT
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     char a;
// //     cin>>a;
// //     if(a>=65 && a<=96){
// //         cout<<"It is upper case "<<endl;
// //     }
// //     else if(a>=97 && a<=122){
// //         cout<<"It is lower case"<<endl;

// //     }
// //     else{
// //         cout<<"It is numeric value"<<endl;

// //     }
// //     return 0;
// // }

// // print the number upto n
// // #include<iostream>
// // using namespace std;
// // void print (int n){
// //     for(int i=1;i<=n;i++){
// //         cout<<i<<" ";
// //     }
// //     cout<<endl;

// // }
// // int main(){
// // int n;
// // cin>>n;
// // print(n);

// // }
// // find the sum from 1 to n
// // #include<iostream>
// // using namespace std;
// // int sum(int &n){
// //     int sum=0;
// //     for(int i=1; i<=n;i++){
// //         sum=sum+i;

// //     }
// //     return sum;
// // }
// // int main(){
// //     int n; 
// //     cin>>n;
// //    cout<< sum(n)<<endl;
// //     return 0;

// // }
// // FIND the sum of all even numbers from 1 to n
// // #include<iostream>
// // using namespace std;
// // int evensum(int &n){
// //     int sum=0;
// //     for(int i=2; i<=n;i=i+2){
// //       sum=sum+i;
        
// //     }
// //     return sum;

// // }


// // int main(){
// //     int n;
// //     cout<<"Enter value of n"<<endl;
// //     cin>>n;
// //    cout<< evensum(n)<<endl;
// //     return 0;

// // }
// // 

// // Given number is prime or not
// // #include<iostream>
// // using namespace std;
// // bool isprime(int &n){
// //     for(int i=2;i<=n;i++){
// //         if(n%i==0){
// //             return false;
// //         }
// //         return true;
// //     }
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     bool prime=isprime(n);
// //     if(prime==0){
// //         cout<<"It is not a prime number"<<endl;

// //     }
// //     else{
// //         cout<<"It is prime number "<<endl;
// //     }
// //     return 0;

// // }

// //         PATTERN PROBLEMS
// //   #include<iostream>
// //   using namespace std;
// //   int main(){
// //     int n;
// //     cin>>n;
// //     int i=1;
// //     while(i<=n){
// //         int j=1;
// //         for(j=0;j<n;j++){
// //             cout<<"*"<<" ";
// //         }
// //         cout<<endl;
// //         i=i+1;
// //     }
// //     return 0;
// //   }    


// // 1 1 1
// // 2 2 2
// // 3 3 3
// //  code =
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int i=1;
// //     while(i<=n){
      
// //         int j=1;
// //         for(j=0;j<n;j++){
// //             cout<<i<<" ";

// //         }
// //         cout<<endl;
      
        
// //         i=i+1;

// //     }
// //     return 0;
// // }


// // Question== 1 2 3 4
// //            1 2 3 4
// //            1 2 3 4
// //         //  1 2 3 4

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int i=1;
// //     while(i<=n){
// //       int num=1;
// //         int j=1;
// //         for(j=0;j<n;j++){
// //             cout<<num<<" ";
// //             num=num+1;

// //         }
// //         cout<<endl;
// //         i=i+1;

// //     }
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int num=1;
// //     for(int i=0;i<n;i++){
// //         for(int j=1;j<=n;j++){
// //         cout<<j<< " ";
// //         num=num+1;
// //     }
// //     cout<<endl;
// //     }
// //     return 0;

// // }

// // question= 4 3 2 1
// //           4 3 2 1
// //           4 3 2 1
// //           4 3 2 1


// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //         int num=4;
// //         for(int j=0;j<n;j++){
// //             cout<<num<<" ";
// //             num--;

// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

// // .........................................................................

// // question = 1 2 3
// //            4 5 6 
// //            7 8 9
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int num=1;
// //     for(int i=0;i<n;i++){
// //         for(int j=0; j<n;j++){
// //             cout<<num<<" ";
// //             num++;
// //         }
// //         cout<<endl;
// //     }
// // }
// // ...........................................................................

// // question  *
// //           * *
// //           * * *
// //           * * * *
 
// //  #include<iostream>
// //  using namespace std;
// //  int main(){
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<=n;i++){
// //         for(int j=0;j<i;j++){
// //             cout<<"*"<< " ";
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// //  }


// // 1
// // 2 3 
// // 4 5 6
// // 7 8 9 10

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int dig=1;
// //     for(int i=0;i<=n;i++){
// //         for(int j=0;j<i;j++){
// //             cout<<dig<< " ";
// //             dig=dig+1;
// //         }
// //         cout<<endl;

// //     }
// //     return 0;
// // }
// // ........................................................................................

// //    1 
// //    2 1
// //    3 2 1
// //    4 3 2 1
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<=n;i++){
// //         int num=i;
// //         for(int j=0;j<i;j++){
// //             cout<<num<<" ";
// //             num=num-1;
        
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }
// // .............................................................................................


// // A A A 
// // B B B 
// // C C C 

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     char name=65;
// // //     for(int i=0;i<n;i++){
// // //         for(int j=0;j<n;j++){
// // //            cout<<name<< " ";
         
// // //         }
// // //           name++;
// // //         cout<<endl;
// // //     }
// // //     return 0;
// // // }
// // // .................................................................................................................

// // // A 
// // // B B 
// // // C C C

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     char name=65;
// // //     for(int i=0;i<n;i++){
// // //     for(int j=0;j<=i;j++){
// // //             cout<<name<<" ";
            
// // //         }
// // //         name=name+1;
// // //         cout<<endl;
// // //     }
// // // }
// // // .......................................................................................

// // //     *
// // //    * *
// // //  * * *
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;

// //     for (int i = 1; i <= n; i++) { // Loop for each row
// //         // Print leading spaces
// //         for (int j = 0; j < n - i; j++) {
// //             cout << " ";
// //         }
// //         // Print stars
// //         for (int j = 0; j < i; j++) {
// //             cout << " *";
// //         }
// //         cout << endl; // Move to the next line
// //     }
// //     return 0;
// // }
// // ............................................................................................................................
// // #include<iostream>
// // using namespace std;
// // int main(){
// //    int i=3;
// //    cout<<i++; //it is post increment in which first the value of i is printed then it will be increased
// //    cout<<++i; // it is preincrement operator in which first the vlue is increased then printed
// //    cout<<i--;
// //    cout<<--i;
// //    return 0;
// // }

// // find the sum of 1 to n 
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int sum=0;
// //     for(int i=0;i<n;i++){
// //         sum=sum+i;

// //     }
// //     cout<<"Sum will be"<<sum <<" ";
// //     return 0;
// // }
// //  .............................................................

// // FIND THE FABONACCI SERIES 
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int a=0;
// //     int b=1;
// //     cout<<a<<" "<<b <<" ";
// //     for(int i=2;i<n;i++){
// //     int nextnumber=a+b;
// //     cout<<nextnumber<<" ";
// //     a=b;
// //     b=nextnumber;
// //     }
// //     return 0;

// // }

// // NUMBER IS PRIME OR NOT 
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     bool isprime=1;
// //     for(int i=2;i<n-1;i++){
// //         if(n%i==0){
// //            isprime =0; 
// //             break;
// //         }


// //     }
// //     if (isprime==0){
// //         cout<<"It is not a prime number "<<endl;
// //     }
// //     else{
// //         cout<<"It is prime number"<<endl;
// //     }
// //     return 0;
// // }

// // if the given number is 234 then find the multiply and add of each digit
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int sum=0;
// //     int prd=1;
// //     while(n!=0){
// //         int rem=n%10;
// //         sum=sum+rem;
// //         prd=prd*rem;
// //         n=n/10;

// //     }
// //     cout<<sum<<" "<<endl;
// //     cout<<prd<<" "<<endl;
// //     return 0;
// // }


// // Reverse the integer 
// // #include<iostream>
// // using namespace std;
// // void reverse(int &n){
// //     while(n!=0){
// //         int rev=n%10;
// //         cout<<rev<<" ";
// //        n= n/10;
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //    reverse(n);
// //     return 0;
// // }

// // ............................................................................................
// // CALCULATOR PROBLEM 
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a=2;
// //     int b=4;
// //     int choice;
// //     cin>>choice;
// //     switch(choice){
// //         case 1: 
// //         cout<<"Addition will be"<<a+b<<endl;
// //         break;
// //         case 2:
// //         cout<<"Substraction will be"<<a-b<<endl;
// //         break;
// //         case 3:
// //         cout<<"Multiplication will be"<<a*b<<endl;
// //         break;
// //         case 4:
// //         cout<<"Division will be"<<a/b<<endl;
// //         break;
// //         default:
// //         cout<<"Invalid input"<<endl;
// //         return 0;

// //     }
// // }
//                 //  ARRAY
// // #include<iostream>
// // using namespace std;
// // void print(int arr[],int size){
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //     print(arr,5);
// //     return 0;

// // }

// // .................................................................................

// // find the minimum and maximum number of array

// // #include<iostream>
// // #include<climits>
// // using namespace std;


// // int maxvalue(int arr[],int size){
// //     int max=INT_MIN;
// //     for(int i=0;i<size;i++){
// //         arr[i]>max;
// //         max=arr[i];
// //     }
// //     return max;
// // }
// // int minvalue(int arr[],int size){
// // int min=INT_MAX;
// // for(int i=0;i<size;i++){
// //     if(arr[i]<min){
// //         min=arr[i];
// //     }
    
    
// // }
// // return min;
// // }
// // int main(){
// //     int arr[5]={4,8,3,5,10};
// //      int ans=maxvalue(arr,5);
// //      cout<<ans<<endl;
// //      int result=minvalue(arr,5);
// //      cout<<result<<endl;
// //      return 0;
// // }


// // Find the sum of all the element of an array
// // #include<iostream>
// // using namespace std;
// // int sum(int arr[],int size){
// //     int sum=0;
// //     for(int i=0;i<size;i++){
// //         sum=sum+arr[i];
// // }
// //     return sum;
// // }
// // int main(){
// //     int arr[7]={1,4,5,6,7,3,2};
// //     int result=sum(arr,7);
// //     cout<<result<<endl;
// //     return 0;

// // }
// // .............................................................................................
// // REVERSE THE ELEMENT OF AN ARRAY 

// // #include<iostream>
// // using namespace std;
// // void reverse(int arr[],int size){
// //     int a=0;
// //     int b=size-1;
// //     while(a<=b){
// //         swap(arr[a],arr[b]);
// //         a++;
// //         b--;
// //     }
   

// // }
// // void print(int arr[],int size){
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //     reverse(arr,5);
// //     print(arr,5);
// //     return 0;

// // }
// // ............................................................................

// // #include<iostream>
// // using namespace std;

// // void reversealternate(int arr[],int size){
// //     int a=0;
// //     int b=1;
// //     while(b<size){
// //         swap(arr[a],arr[b]);
// //         a=a+2;
// //         b=b+2;
// //     }
// // }
// // void print(int arr[],int size){
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //         reversealternate(arr,5);
// //         print(arr,5);
// //         // return 0;
// // }

// // ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

// // FIND THE UNIQUE NUMBER IN AN ARRAY = A NUMBER WHICH PRESENCE ONLY ONE TIME 
// // #include<iostream>
// // using namespace std;
// // int findunique(int arr[],int size){
// //     cout << "Unique elements in the array: ";
// //     for(int i=0;i<size;i++){
// //         bool isunique=true;
// //         for(int j=0;j<size;j++){
// //             if (i!=j && arr[i]==arr[j]){
// //                 isunique=false;
// //                 break;
// //             }
// //         }
// //         if( isunique){
// //             cout<<arr[i]<<"";
// //         }
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     int arr[8]={1,2,1,2,3,4,4,5};
// //   findunique(arr,8);
// //   return 0;
// // }
// // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''


// // Find the duplicacy in an  array 

// #include<iostream>
// using namespace std;
// int findduplicacy(int arr[],int size){
//     cout<<"Duplicate elements are"<<"";
//     for(int i=0;i<size;i++){
//         bool duplicate=false;
//         for(int j=i+1;j<size;j++){
//             if( arr[i]==arr[j]){
//                 duplicate=true;
              
//                 break;
//             }
//         }
//             if(duplicate){
//                 cout<<arr[i]<<" ";
//             }
        
            
//         }
//         cout<<endl;   
    
    

// }
// int main(){
//     int arr[6]={1,2,2,3,4,4};
//     findduplicacy(arr,6);
//     return 0;
// }


// // ..................................................................................................................
// // INTERSECTION OF AN ARRAY 
// // #include<iostream>
// // using namespace std;
// // int intersection(int a[],int size,int b[],int size2){
// //     for(int i=0;i<size;i++){
// //         int element =a[i];
// //         for(int j=0;j<size2;j++){
// //             if(element==b[j]){
// //                 cout<<b[j]<<"";
// //                 b[1000];
// //                 break;
// //             }
// //         }
       
// //     }
    
// // }
// // int main(){
// //     int a[1000];
// //     int size;
// //     cin>>size;
// //     for(int i=0;i<size;i++){
// //         cin>>a[i];
// //     }
// //     int b[1000];
// //     int size2;
// //     cin>>size2;
// //     for(int i=0;i<size2;i++){
// //         cin>>b[i];
// //     }
// //     intersection(a,size,b,size2);
// //     return 0;

// // }
 
// // .........................................................................................................


//  //  Linear SEARCH TECHNIQUE 
// //  #include<iostream>
// //  using namespace std;
// //  bool linearsearch(int arr[],int size,int key){
// //     for(int i=0;i<size;i++){
// //         if(arr[i]==key){
// //             return true;
// //         }
    
// //     }
// //     return false;

// //  }
// //  int main(){
// //      int arr[7]={1,5,4,7,8,9,10};
// //      int key ;
// //      cout<<"Enter key value"<<endl;
// //      cin>>key;
// //     bool result= linearsearch(arr,7,key);
// //     if(result){
// //         cout<<"Element is found "<<endl;

// //     }
// //     else{
// //     cout<<"Element not found"<<endl;
// //     }
// //     return 0;



// //  }





// // ...............................................................................................



//     //  BINARY SEARCH TECHNIQUE QUESTION


// //  A SIMPLE BINARY SEARCH TECHNIQUE CODE

// //it is technique used to search element in an sorted array 

// // #include<iostream>
// // using namespace std;
// // bool binarysearch(int arr[],int size,int key){
// //     int start=0;
// //     int end=size-1;
// //     int mid=start+(end-start)/2;
// //     while(start<=end){
// //         if(arr[mid]==key){
// //             return mid;

// //         }
// //         if(key>arr[mid]){
// //             start=mid+1;
// //         }
// //         else{
// //             end=mid-1;
// //         }
// //         mid=start+(end-start)/2;
// //     }
// //     cout<<"Number is not in array  found"<<endl;
// // }
// // int main(){
// // int arr[5]={4,5,6,7,8,};
// // int key;
// // cin>>key;
// // int isfound=binarysearch(arr,5,key);
// // cout<<"Index is at "<<isfound<<endl;


// // }


// // FIRST AND LAST OCCURENCE OF AN ELEMENT IN AN ARRAY

// // #include<iostream>
// // using namespace std;
// // int firstoc(int arr[],int size,int key){
// //     int s=0;
// //     int e=size-1;
// //     int ans=0;
// //     int mid=s+(e-s)/2;
// //     while(s<=e){
// //         if(arr[mid==key]){
// //             ans=mid;
// //             e=mid-1;
// //         }
// //         if(key>mid){
// //             s=mid+1;
// //         }
// //         else{
// //             e=mid-1;
// //         }
// //          mid=s+(e-s)/2; 
// //     }
// //     return ans;
// // }
// // int lastoc(int arr[],int size,int key){
// //     int s=0;
// //     int e=size-1;
// //     int ans=0;
// //     int mid=s+(e-s)/2;
// //     while(s<=e){
// //         if(arr[mid==key]){
// //             ans=mid;
// //             s=mid+1;
// //         }
// //         if(key>mid){
// //             s=mid+1;
// //         }
// //         else{
// //             e=mid-1;
// //         }
// //          mid=s+(e-s)/2; 
// //     }
// //     return ans;
// // }

// // int main(){
// //     int arr[6]={1,2,3,4,3,5,};
// //     int key;
// //     cout<<"Enter your key"<<endl;
// //     cin>>key;
// //    int first= firstoc(arr,6,key);
// //    cout<<first<<endl;
// //    int last= lastoc(arr,6,key);
// //    cout<<last<<endl;
// //     return 0;

// // }


// // .................................................................................

// // FIND THE PEAK ADDRESS IN AN MOUNTAIN ARRAY 
// // Mountain array={1,2,5,3};
// // #include<iostream>
// // using namespace std;
// // int peakaddress(int a[],int size){
// //     int s=0;
// //     int e=size-1;
// //     int mid=s+(e-s)/2;
// //     while(s<e){
// //    if(a[mid]<a[mid+1]){
// //     s=mid+1;
// //    }
// //    else{
// //     e=mid;
// //    }
// //    return a[e];
// //     }
// // }
// // int main(){
// //     int a[4]={1,2,5,3};
// //     int result=peakaddress(a,4);
// //     cout<<"Peak element will be"<<result<<endl;
// //     return 0;

// // }
// // ..................................................................................

// // FIND THE PIVOT NUMBER IN AN ARRAY
// // #include<iostream>
// // using namespace std;
// // int pivot(int a[],int size){
// //     int s=0;
// //     int e=size-1;
// //     int mid=s+(e-s)/2;
// //     while(s<e){
// //         if(a[mid]>=a[0]){
// //             s=mid+1;
// //         }
// //         else{
// //             e=mid;
// //         }
// //         mid=s+(e-s)/2;
// //     }
// //     return a[s];
// // }
// // int main(){
// //     int a[1000];
// //     int size;
// //     cin>>size;
// //     for(int i=0;i<size;i++){
// //         cin>>a[i];
// //     }
// //     int result=pivot(a,size);
// //     cout<<result<<endl;
// //     return 0;
// // } 

// // ................................................................................................


//     //  TOPIC =SORTING 


// // 1.selection sort= 

// // isme bhut saare rounds hote hai aur har round me sabse chhoti value ko selct krte hai aur right side me place kr dete 



// // #include<iostream>
// // using namespace std;
// // void selectionsort(int a[],int n){
// //     for(int i=0;i<n-1;i++){
// //         int minindex=i;
// //     for(int j=i+1;j<n;j++){
// //         if(a[j]<a[minindex]){
// //             minindex=j;
// //         }
// //     }  
// //     swap(a[minindex],a[i]);  
// // }
// // }
// // void printarray(int a[],int n){
// //     for(int i=0;i<n;i++){
// //         cout<<a[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     int a[5]={1,7,2,9,4};
// //     selectionsort(a,5);
// //     printarray(a,5);
// //     return 0;
    

// // }


// ///

// // 2 . BUBBLE SORT = isme ham bagal vale ko sort krte hai 

// // #include<iostream>
// // using namespace std;
// // void bubblesort(int arr[],int size){
// //     for(int i=0;i<size;i++){   
// //   // for n th round  
// //   for(int j=0;j<size-1;j++){
// //       if(arr[j]>arr[j+1])
// //           swap(arr[j],arr[j+1]);
      
// //   }
  
// //     }
// //   }
// // void printarray(int arr[],int n)
// //    {
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout <<endl;
// // }
// // int main(){
// //     int arr[6]={10,1,7,6,14,9};
// //     bubblesort(arr,6);
// //     printarray(arr,6);
// //     return 0;

// // }


// // ............................................................
// // 3 = INSERTION SORT
// // #include<iostream>
// // using namespace std;
// // int main(){
























    
// // }



// //  INTRODUCTION TO 2D ARRAY
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<4;j++){
// //             cout<<arr[i][j]<<" ";

// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

// // QUESTION= TO SEARCH AN ELEMENT IN 2D ARRAY OR NOT

// // #include<iostream>
// // using namespace std;
// // bool ispresent(int arr[][4],int key,int col,int row){
// // for(int row=0;row<3;row++){
// //     for(int col=0;col<4;col++){
// //         if(arr[row][col]==key){
// //          return true;
        
// //         }
      
// //     }
    
// // }
// // return false;

// // } // col btana pdta hai
// // int main(){
// //     int arr[3][4];
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<4;j++){
// //             cin>>arr[i][j];
// //         }
// //         cout<<endl;
// //     }
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<4;j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     int key;
   
// //     cout<<"Enter your key element"<<endl;
// //     bool found=ispresent(arr,18,4,3);
// //     if(found==1){
// //         cout<<" Element is present "<<endl;
// //     }
// //     else{
// //         cout<<"NAHI HAI YRR"<<endl;
// //     }
// //     return 0;
// // }


// //QUESTION =2= FIND THE SUM OF ELEMENT ROW WISE

// // #include<iostream>
// // using namespace std;
// // int sumofrow(int arr[][4],int row,int col){ // sum row wise
    
// //     for(row=0;row<3;row++){
// //         int sum=0;
// //         for(int col=0;col<4;col++){
// //             sum=sum+arr[row][col];

// //         }
// //         cout<<sum<<" ";
// //     }
   
   
// // }
// // int sumofcol(int arr[][4],int row,int col){
    
// //     for(col=0;col<4;col++){
// //         int sum=0;
// //         for(row=0;row<3;row++){
// //             sum=sum+arr[row][col];
// //         }
// //         cout<<sum<<" ";
// //     }
    
// // }
// // int main(){
// //     int arr[3][4]={{1,2,3,4},{8,5,6,7},{10,11,14,15}};
// //     sumofrow(arr,3,4);
// //     sumofcol(arr,3,4);
// //     return 0;
// // }


// // // QUESTION= 3: TO PRINT THE 2D ARRAY IN WAVE FORM
// // #include<iostream>
// // using namespace std;
// // void printwave(int abhie[][3],int row,int col){
// //     for(int col=0;col<3;col++){
// //         if(col%2==0){// top to bottom printing
// //         for(int row=0;row<3;row++){
// //             cout<<abhie[row][col]<<" ";
// //         }
// //         cout<<endl;
// //         }
// //         else{// bottom to top printing
// //             for(int row=2;row>=0;row--){
// //                 cout<<abhie[row][col]<<" ";
// //             }
// //          cout<<endl;
// //         }
// //     }
// // }
      
// // int main(){
// //     int abhie[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// //     printwave(abhie,3,3);


// // }
// // QUESTION 4: spiral printing of an 2D array 
// // #include<iostream>
// // using namespace std;
// // void spiralprinting(int arr[][3],int row,int col){
// //     int startingcol=0;
// //     int lastcol =col-1;
// //     int startingrow=0;
// //     int lastrow=row-1;
// //     while(startingrow<=lastrow && startingcol<=lastcol ){
// //         for(int i=startingrow;i<=lastcol;i++){
// //             cout<<arr[startingrow][i]<<" ";
// //         }
// //         startingrow++;
    
// //     for(int i=startingrow;i<=lastrow;i++){
// //         cout<<arr[i][lastcol]<<" ";
// //     }
// //     lastcol--;
// //     for(int i=lastcol;i<=startingcol;i++){
// //         cout<<arr[lastrow][i]<<" ";
// //     }
// //     lastrow--;
// //     for(int i=lastrow;i<=startingrow;i++){
// //         cout<<arr[i][startingcol]<<" ";
// //     }
// //     startingcol++;
// // }
// // }
// // int main(){
// //     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// //     spiralprinting(arr,3,3);
// //     return 0;

// // }




// ///     QUESTION= ROTATE YOUR MATRIX BY 90 DEGREE

// // #include<iostream>
// // using namespace std;
// // void rotate (int arr[][3],int row ,int col){
// //     int startingrow=0;
// //     int startingcol=0;
// //     int lastrow=row-1;
// //     int lastcol=col-1;
//     //      for( int i=0;i<col;i++){
//     //     for( int j=lastrow; j>=0;j--){
//     //     cout<<arr[j][i]<<" ";
      
//     //     }
        
//     //     cout<<endl;
        
//     // }
   
// // }
// // int main(){
// //     int arr[3][3];
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<3;j++){
// //             cin>> arr[i][j];
// //         }
// //         cout<<endl;
// //     }
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<3;j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// //     rotate(arr,3,3);
// //     return 0;

// // }


// //   BINARY SEARCH IN 2D ARRAY









