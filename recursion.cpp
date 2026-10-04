// Recursion =when a function call itself is termed as recursion

// when ever a complex big problem's solution is depend on same type of small problem then it will be solve by recursion

// Base case in recursion = it is the condition where the function have to stop

// recursive function= recurrence relation aur base case aur base case me return likhna mandatory hai

// to find the factorial by recursion

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){// base case
//         return 1;
//     }
//     int smallerprb=factorial(n-1);
//     int bigprob=n*factorial(n-1);
//     return bigprob;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=factorial(n);
//     cout<<ans<<endl;
// }


//  Recursive Function = Base case hona madatory aur usme return likhna bhi
                    //   = recursive relation hoga
                    //   = processing likh skte hai like kuchh print karana hai ya fr update etc
         
                    
// to find the power by recursion

// #include<iostream>
// using namespace std;
// int power(int n,int  pow){
//     if(pow==0){
//         return 1;
//     }
//     int smallprobl=power(n,pow-1);
//     int big=n*smallprobl;
//     return big;
// }
// int main(){
//     int n,pow;
//     cin>>n>>pow;
//     int ans=power(n,pow);
//     cout<<ans<<endl;
    
// }

// to print counting
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return ;
//     }

//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

// #include<iostream>
// using namespace std;
// void reachhome(int src,int dest){
//     cout<<src<<dest<<endl;
//     if(src==dest){// base case
//      cout<<"Phuch gya "<<endl;
//      return ;
//  }
//  src++;// processing
//  reachhome(src,dest);// recursive call
// }
// int main(){
//     int src,dest;
//     cin>>src>>dest;
//     reachhome(src,dest);
// }


// to print fabanacci series by recursion
// #include<iostream>
// using namespace std;
// int fabanacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     int ans=fabonacci(n-1)+fabonacci(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;

// }

// count ways to reach the n-th stais 

// int countdistinctwaytoclimb(long lond stairs){
//     if(nstairs==0){
//         return 0;
//     }
//        if(nstairs==0){
//         return 0;
//     }
//     int ans=countdistinctwaytoclimb(nstairs-1)+countdistinctwaytoclimb(nstairs-2);// ya to ek jump hua hoga ya twice jump
//     return ans;
// }


// check whether the array is sorted or not by recursion
// #include<iostream>
// using namespace std;
// bool is_sorted(int arr[],int size){
//     if(size==0 || size==1){// base case
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//     bool ans=is_sorted(arr+1,size-1);
//     return ans;
//     }

// }
// int main(){
//     int arr[6]={2,4,6,9,11,19};
//    cout<< is_sorted(arr,6)<<endl;
// }


// to find the sum of integers of array by using recursion

// #include<iostream>
// using namespace std;
// int getsum(int arr[],int size){
//     if(size==0){// base case
//         return 0;
//     }
//     if (size==1){
//         return arr[0];
//     }
//     int remainingsum=getsum(arr+1,size-1);
//     int sum=arr[0]+remainingsum;
    
//    return sum;
  
// }
// int main(){
//     int arr[5]={1,2,4,8,3};
//     cout<<getsum(arr,5)<<endl;
//     return 0;

// }

// linear search problem by recursion
// #include<iostream>
// using namespace std;
// bool linearsearch(int arr[],int size,int key){
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }
//     else{
//         bool ans=linearsearch(arr+1,size-1,key);
//         return ans;
//     }
   
// }
// int main(){
//   int arr[5]={1,2,18,4,10};
//   int key;
//   cin>>key;
//   cout<<linearsearch(arr,5,key)<<endl;
// }


// Implementation of binary search by recursion
// #include<iostream>
// using namespace std;
// bool binarysearch(int arr[],int s,int e,int key){
//     if(s>e){
//         return false;
//     }
    
//     int mid=s+(e-s)/2;
//     if(arr[mid]==key){
//         return true;
//     }
//     if(arr[mid]>key){
//         bool ans=binarysearch(arr,s,mid-1,key);
//         return ans;
//     }
//     else{
//        bool ans2= binarysearch(arr,mid+1,e,key);
//         return ans2;
//     }


// }
// int main(){
//     int arr[5]={1,2,4,5,6};
//     int key=6;
//     int size=5;
//     cout<<binarysearch(arr,0,4,16)<<endl;
// }


// recursion with strings


// reverse the string by using recursion
// #include<iostream>
// using namespace std;
// void reverse(int i,int j,string &s){
//    if(i>j){
//     return ;
//    }
//    swap(s[i],s[j]);
//    i++;
//    j--;
//    reverse(i,j,s);
// }
// int main(){
//  string s="abhinavekta";
// reverse(0,10,s);
// cout<<s<<endl;
  

// }

// check string is palindrome or not  by recursion
// #include<iostream>
// using namespace std;
// bool palindrome(int a,int b,string s){
//     if(a>b){// base case
//         return true ;
//     }
//     if(s[a]!=s[b]){
//        return false;
//     }
//    else{
//     return palindrome(a++,b--,s);
//    }


// }
// int main(){
// string s="aba";
// cout<<palindrome(0,2,s)<<endl;
// }
//


// merge sort by using recursion

// #include<iostream>
// using namespace std;
// void merge(int *arr,int s,int e){
//     int mid=s+(e-s)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;
//     int *first=new int [len1];
//     int *second =new int[len2];
//     // copy values to first and second array
//     int mainarrayindex=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[mainarrayindex++];
//     }
//     mainarrayindex=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[mainindex++];
//     }
//     // merge 2 sorted array
//     int index1=0;
//     int index2=0;
//     mainarrayindex=s;
//     while(index1<len1 && index2<len2){
//         if(first[index1]<second[index2]){
//             arr[mainarrayindex++]=first[index1++];--
//         }
//         else{
//         arr[mainarrayindex++]=second[index2++];
//     }
// }
// void mergesort(int *arr,int s,int e){
//     if(s>=e){//base case
//         return ;
//     }
//     int mid=s+(e-s)/2;
//     // left part ko sort krna hai
//     mergesort(arr,s,mid);
//     // right part ko sort karna hai
//     mergesort(arr,mid+1,e);
//     // dono ko merge kr do

// }

// int main(){
//     int arr[7]={38,27,43,3,9,82,10};
//     int n=7;
//     mergesort(arr,0,n-1);

// }



// // find the factorial of n
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
// int n;
// cin>>n;
// cout<<factorial(n)<<endl;
// return 0;
// }


// //to reverse the string by recursion
// #include<iostream>
// using namespace std;
// void reverse(string str,int index){
//     if(index>=str.length()){
//         return ;
//     }
//     reverse(str,index+1);
//     cout<<str[index]<<endl;
// }
// int main(){
//     string str="abc";
//     int index=3;
//     cout<<reverse(str,3)<<endl;
//     return 0;
// }


// code of fabonacci series by recursion
// #include<iostream>
// using namespace std;
// int  fabonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fabonacci(n-1)+fabonacci(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
// cout<<fabonacci(n)<<endl;
// return 0;
// }



// reverse a stack by using recursion

// stack reverse(stack <int> &st){
//        // base case
//        if(st.empty()){
//         return ;
//        }
//        int top=st.top();
//        st.pop();
//        reverse(st);// recursion leaf of trust
//        stack<int> temp;
//        while(!st.empty()){
//         temp.push(st.top());
//         st.pop();
//        }
//        st.push(top);
//       while(!temp.empty()){
//         st.push(temp.top());
//         temp.pop(); 
//       }
// //       return st;  
// //     }


// // practice of some recursion concept
// #include<iostream>
// using namespace std;
// int factorial(int n){
//   if(n==1){
//     return 1;
//   }
//   return n*factorial(n-1);
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<factorial(n)<<endl;

// }


// find the sum of digits of number through recursion
// #include<iostream>
// using namespace std;
// int addition(int n){
//   if(n==0){
//     return 0 ;
//   }
//   int r=n%10;
//     int sum=0;
//    sum=r+sum;
//   int ans=addition(n/10);
//   return sum+ans;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<addition(n)<<endl;
//   return 0;

// }


// print numbers from 1 to n 
// #include<iostream>
// using namespace std;
// void printing(int n){
//   if(n==0){
//     return ;
//   }
//  cout<<n<<" ";
//  printing(n-1);
// }
// int main(){
//   int n;
//   cin>>n;
//   printing(n);
//   return 0;
// }


// reverse a number using recursion 
// #include<iostream>
// using namespace std;
// void reverse(int n){
//   if(n==0){
//     return  ;
//   }
//   int r=n%10;
//   cout<<r<<" ";
//   reverse(n/10);
  
// }
// int main(){
//   int n;
//   cin>>n;
//   reverse(n);
  
// }

// count digits in a number by recursion
// #include<iostream>
// using namespace std;
// int no_of_digit(int n){
//   if(n==0){
//     return 0;
//   }
//   int count=0;
//   int r=n%10;
//   if(r!=0){
//   count++;
//   }
//   int rem=no_of_digit(n/10);
//   return rem+count;

// }
// int main(){
// int n;
// cin>>n;
// cout<<no_of_digit(n)<<endl;

// } 



#include<iostream>
using namespace std;
void merge(int *arr,int start,int end){
   int mid=(start+end)/2;
   int len1=mid-start+1;
   int len2=end-mid;
   int *first=new int [len1];// first array
   int *second=new int [len2];// second Array
   int mainArrayIndex=start;
   for(int i=0;i<len1;i++){
    first[i]=arr[mainArrayIndex++];
   }
   mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
    second[i]=arr[mainArrayIndex++];
   }
   // now merge 
   int index1=0;
   int index2=0;
   mainArrayIndex=start;
   while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
      arr[mainArrayIndex]=first[index1];
      index1++;
      mainArrayIndex++;
    }
    else{
      arr[mainArrayIndex]=second[index2];
      mainArrayIndex++;
      index2++;
    }
   }
   // agar first me bach gaye ho toh last me add kr do
   while(index1<len1){
    arr[mainArrayIndex++]=first[index1++];
   }
   while(index2<len2){
    arr[mainArrayIndex++]=second[index2++];
   }

}
void mergesort(int arr[],int start,int end){
  if(start>=end){
    return ;
  }
  int mid=(start+end)/2;
  //left part sort kro
  mergesort(arr,start,mid);
  // right part sort kro
  mergesort(arr,mid+1,end);
  // now both sorted array 
  merge(arr,start,end);
}
int main(){
  int arr[7]={12,22,10,3,5,77,1};
  int n=7;
  mergesort(arr,0,n-1);
   for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}