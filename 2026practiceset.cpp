// // practice all questions
// // count no of digit /reverse the digit /find the sum /find the product of the digit 
// #include<iostream>
// #include<cmath>
// using namespace std;
// int countdigit(int n){
//     int count=0;
//     while(n!=0){
//         int rem=n%10;
//         count++;
//         n=n/10;
//     }
//     return count;
// }
// int reverse(int n){
//     int rev=0;
//     while(n!=0){
//     int r=n%10;
//     rev=rev*10+r;
//     n=n/10;

//     }
//     return rev;
// }
// bool ispalindrome(int n){
//     int org=n;
//     int ulta=reverse(n);
//     if(ulta==org){
//         return true;
//     }
//     return false;
// }
// bool armstrong(int n){
//     int cnt=countdigit(n);
//     int org=n;
//     double sum=0;
//     while(n!=0){
//         int r=n%10;
//         sum=sum+pow(r,cnt);
//         n=n/10;
//     }
//     if(sum==org){
//         return true;
//     }
//     return false;
// }
// bool isprime(int n){
//     if(n<=1){
//         return false;
//     }
//     if(n==2){
//         return true;
//     }
//     if(n%2==0){// now to check the even number
//         return false;
//     }
//     // it is to check the odd numbers
//     for(int i=3;i*i<n;i+=2){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// double fact(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<countdigit(n)<<endl;
//     cout<<reverse(n)<<endl;
//     cout<<ispalindrome(n)<<endl;
//     cout<<armstrong(n)<<endl;
//     cout<<isprime(n)<<endl;
//     cout<<fact(n)<<endl;
//     return 0;

// }

// searching algorithms 

// 1 .linear search= linear search is technique of searching an element in an array or element set where data may be arrange or not 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={2,4,5,1,6,9,10};
//     int key;
//     cin>>key;
//     for(int i=0;i<7;i++){
//         if(arr[i]==key){
//             cout<<"haa hai"<<endl;
//             return 0;
//         }
//     }
//      cout<<"nahi hai"<<endl;
    
// }


// Binary search = it will be applicable only on sorted data 

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5]={1,2,3,4,5};
//     int key;
//     cin>>key;
//     int start=0;
//     int end=n-1;

//     while(start>=end){
//          int mid=start+(end-start)/2;
//          if(arr[mid]==key){
//             return mid;
//          }
//          else if(key>arr[mid]){
//             start=mid+1;
//          }
//          else{
//            end=mid-1;
//          }
//     }


// }

// lets practice the concept of an array 

// Array is an data container in which we store same type of data in contiguous memory location...

// #include<iostream>
// #include<climits>
// using namespace std;
// int maximum(int arr[],int size){
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//     }
//     return maxi;

// }
// int minimum(int arr[],int size){
//     int mini=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<mini){
//             mini=arr[i];
//         }
//     }
//     return mini;

// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<maximum(arr,5)<<endl;
//     cout<<minimum(arr,5)<<endl;

    
// }


// find the missing number in an array
// #include<iostream>
// using namespace std;
// int missing(int arr[],int size){
//     // int n=sizeof(arr);
//     int originalsum=size*(size+1)/2;
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//     }
//     return originalsum-sum;
// }
// int main(){
//     int arr[5]={1,2,0,3,4};
//     cout<<missing(arr,5);
//     return 0;
// }


// the concept of set = set is a container in stl that stores unique element only .duplicates are not allowed 
// #include<iostream>
// #include <set>
// using namespace std;
// int main(){
// int ekta[11]={1,2,2,3,1,5,5,7,6,6,8};
// set <int> s;
// for(auto i=0;i<11;i++){
//     s.insert(ekta[i]);
// }
// for(auto it=s.begin();it!=s.end();it++){
//     cout<<*it<<" ";
// }
// cout<<endl;
// // return 0;
// }


// the concept of hashmap

// hashing =hashing is technique to store and retrieve data very efficiently because it solve the problem in o(n) complexity


// find the maximum occurence of an number in an array 

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int maximumfreq(int arr[],int size){
//     unordered_map<int ,int> count;
//     for(int i=0;i<size;i++){
//         count[arr[i]]++;
//     }
//     int maxi=0;
//     int ans=0;
//     for(auto it=count.begin();it!=count.end();it++){
//         if(it->second>maxi){
//             maxi=it->second;
//            ans=it->first;
//         }
//     }
//     return ans;

// }
// int main(){
// int arr[12]={1,2,2,3,4,4,4,7,77,3,5,1};
// cout<<maximumfreq(arr,12)<<endl;
// }


// count the numbers of even and odd numbers in an array

// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int> countevenodd(int arr[],int size){
//     int countforeven=0;
//     int countforodd=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]%2==0){
//          countforeven++;
//         }
//         else{
//             countforodd++;
//         }
//     }
//     return {countforeven,countforodd} ;
// }
// int main(){
//     int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//     vector<int> ans=countevenodd(arr,15);
//     for(int i=0;i<2;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;

// }


// reverse a given string 
#include<iostream>
// #include<string>
// #include<stack>
// using namespace std;
// string reversing(string hindutva){
//     stack <char> s;
//     string ans="";
//     for(int i=0;i<hindutva.length();i++){
//         s.push(hindutva[i]);
//     }
//     while(!s.empty()){
//        ans=ans+s.top();
//         s.pop();
//     }
//     return ans;

// }
// int main(){
//     string hindutva="jaishreeram";
//    cout<< reversing(hindutva)<<endl;
// }



// find the union of two arrays

// #include<iostream>
// #include<set>
// #include<vector>
// using namespace std;
// vector<int> unionarray(int arr1[],int arr2[],int size1,int size2){
// set<int> s;
// vector<int> ans;
// for(int i=0;i<7;i++){
//     s.insert(arr1[i]);
// }
// for(int i=0;i<5;i++){
//     s.insert(arr2[i]);
// }
// for(auto it=s.begin();it!=s.end();it++)
// {
// ans.push_back(*it);
// }
// return ans;
// }
// int main(){
//     int arr1[7]={1,2,3,3,4,5,7};
//     int arr2[5]={1,2,4,6,8};
//    vector<int> result= unionarray(arr1,arr2,7,5);
//    for(int i=0;i<result.size();i++){
//     cout<<result[i]<<" ";
//    }
//    cout<<endl;
// }



// find the max consecutive ones
// #include<iostream>
// using namespace std;
// int maxconsecativeones(int arr[],int size){
//     int count1=0;
//     int count2=0;
//     for(int i=0;i<8;i++){
//         if(arr[i]==1){
//             count1++;
//         }
//         if(arr[i]!=1 && count2<count1){
//           count2=count1;
//           count1=0;
//         }
//     }
//   return count2;
// }
// int main(){
//     int a[8]={1,1,0,1,1,1,1};
//     cout<<maxconsecativeones(a,8)<<endl;
//     return 0;

// }


// left rotate the array
// #include<iostream>
// using namespace std;
// void leftrotate(int a[],int size){
//     int first=a[0];
//     for(int i=0;i<size-1;i++){
//         a[i]=a[i+1];
//     }
//     a[size-1]=first;
// }
// int main(){
// int a[5]={1,2,3,4,5};
// leftrotate(a,5);
// for(int i=0;i<5;i++){
//     cout<<a[i]<<" ";
// }

// }


// 01

// #include<iostream>
// using namespace std;
// void reverse(int arr[],int size){
//     int s=0;
//     int e=size-1;
//   while(s<e){
//    swap(arr[s],arr[e]);
//     s++;
//     e--;

//   }
// }
// int main(){
//     int arr[6]={2,4,3,6,8,9};
//     reverse(arr,6);
//     for(int i=0;i<6;i++){
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

//    02 // rotate an array by k


#include<iostream>
using namespace std;
void rotate(int arr[],int size,int d){

int end=0;
while(end!=d){
    int last=arr[size-1];
for(int i=size-1;i>0;i--){
    arr[i]=arr[i-1];
}
 arr[0]=last;
end++;
}
}
int main(){
    int arr[5]={1,2,3,4,5};
    rotate(arr,5,2);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
}

