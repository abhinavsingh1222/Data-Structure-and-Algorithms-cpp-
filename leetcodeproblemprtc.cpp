// //    BASIC MATHS PROBLEM 

// // count no of digit in an input number
// // #include<iostream>
// // using namespace std;
// // int countdigit(int &n){
// //     int count=0;
// //     while(n!=0){
        
// //         int rem =n%10;
// //         n=n/10;
// //         count++;
// //     }
// //     return count;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     int result=countdigit(n);
// //     cout<<result<<endl;

// // }



// // !!!!!!! REVERSE THE DIGIT 
// // #include<iostream>
// // using namespace std;

// // int reverse(int &n){
// //     int sum=0;
// //     while(n!=0){
// //         int r=n%10;
// //         sum=sum*10+r;
// //         n=n/10;
        
// //     }
// //     return sum;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     cout<<reverse(n)<<endl;
// // }

// // !!!!!!!!!!CHECK THE NUMBER IS PALINDROME OR NOT
// // #include<iostream>
// // using namespace std;
// // bool isplindrome(int &n){
// //     int original=n;
// //     int sum=0;
// //     while(n!=0){
// //         int rem=n%10;
// //         sum=sum*10+rem;
// //         n/10;
// //     }
// //     if(sum==original){
// //         cout<<"yes"<<endl;
// //     }
// //      cout<<"no"<<endl;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //    isplindrome(n);
// // }


// //  find hcf of a  number =euclidean aproach
// // #include<iostream>
// // using namespace std;
// // int gcd(int &a,int &b){
// //     while(b!=0){
// //         int temp=b;
// //         b=a%b;
// //         a=temp;
// //     }
// //     return a;
// // }
// // int main(){
// //     int a, b;
// //     cin>>a>>b;
// //     cout<<gcd(a,b)<<endl;
// //     return 0;

// // }


// // // print fabonacci series 
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     int a=0;
// //     int b=1;
// //     cout<<a<<b<<"";
// //     int sum=0;
// //     for(int i=2;i<n;i++){
// //         sum=a+b;
// //         cout<<sum<<"";
// //         a=b;
// //         b=sum;

// //     }
// //     cout<<endl;
// // }


// // check number is prime or not
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cin>>n;
// //     if(n<=1){
// //         cout<<"no"<<endl;
// //     }
// //     if(n==2){
// //         cout<<"yes"<<endl;
// //     }
// //     if(n%2==0){
// //         cout<<"no"<<endl;
// //     }
// //     for(int i=3;i^2<=n;i=i+2){
// //         if(n%i==0){
// //             cout<<"no"<<endl;
// //         }
// //         else{
// //             cout<<"yes"<<endl;
// //         }
// //     }
// // }




// ///// NOW SOME EASY AND BASIC QUESTION OF ARRAY 

// // // question = find sum of all elements of array 
// // #include<iostream>
// // using namespace std;
// // int sum(int arr[],int size){
// //     int add=0;
// //     for(int i=0;i<9;i++){
// //         add=add+arr[i];

// //     }
// //     return add;
// // }
// // int main(){
// //     int arr[9]={1,2,3,4,5,6,7,8,9};
// //     cout<<sum(arr,9)<<endl;
// //     return 0;
// // }


// // // find the maximum and minimum number of an array
// // #include<iostream>
// // #include<climits>
// // using namespace std;
// // int maximum(int arr[],int size){
// //     int maxi=INT_MIN;
// //     for(int i=0;i<7;i++){
// //         if(arr[i]>maxi){
// //             maxi=arr[i];
// //         }
// //     }
// //     return maxi;
// // }
// // int minimum(int arr[],int size){
// //     int min=INT_MAX;
// //     for(int i=0;i<7;i++){
// //         if(arr[i]<min){
// //             min=arr[i];
// //         }
// //     }
// //     return min;
// // }

// // int main(){
// //     int arr[7]={2,45,87,3,99,100,54};
// //     cout<<maximum(arr,7)<<endl;
// //     cout<<minimum(arr,7)<<endl;
// //     return 0;
// // }


// /// find the second maximum value of an array
// // #include<iostream>
// // #include<climits>
// // using namespace std;
// // int secondmost(int arr[],int size){
// // int maxi=INT_MIN;
// // for(int i=0;i<5;i++){
// //     if(arr[i]>maxi){
// //         maxi=arr[i];
// //     }
// // }
// // int secondlargest=0;
// // for(int i=0;i<5;i++){
// //     if(arr[i]>secondlargest && arr[i]!=maxi){
// //         secondlargest=arr[i];
// //     }
// // }
// // return secondlargest;
// // }
// // int main(){
// //     int arr[5]={1,8,3,4,9};
// //     cout<<secondmost(arr,5)<<endl;
// //     return 0;

// // }


// // Find the missing number in an array
// // #include<iostream>
// // using namespace std;
// // int missingno(int arr[],int size){
// //     int originalsum=0;
// //     for(int i=1;i<=5;i++){
// //         originalsum=originalsum+i;
// //     }
// //     int sum=0;
// //     for(int i= 0;i<5;i++){
// //         sum=sum+arr[i];
// //     }
// //    int  result=originalsum-sum;
// //     return result;
// // }
// // int main(){
// //     int arr[5]={1,2,0,3,4};
// //    cout<<missingno(arr,5);
// //    return 0;
// // }


// // Linear search in an array 
// // #include<iostream>
// // using namespace std;
// // bool linearsearch(int arr[],int size,int key){

// //     for(int i=0;i<8;i++){
// //         if(arr[i]==key){
// //             return true;
// //         }
// //     }
// //     return false;
    
// // }
// // int main(){
// //     int arr[8]={1,2,3,4,70,9,8,1};
// //     int key;
// //     cin>>key;
// //     bool result=linearsearch(arr,8,key);
// //     if(result==true){
// //         cout<<"yes"<<endl;
// //     }
// //     else{
// //         cout<<"NO"<<endl;
// //     }
// // }



// // concept of set in c++ == matlab set me sab kuch unique aur ordered way me hota hai
// // #include<iostream>
// // #include<set>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     int arr[6]={1,1,5,4,3,3};
// //     set<int> s;
// //     for(int i=0;i<6;i++){
// //         s.insert(arr[i]);

// //     }
// //     for( set<int> :: iterator i=s.begin();i!=s.end(); ++i){
// //         cout<<*i<<endl;
// //     }
    
// // }



// //  TO FIND THE UNION OF TWO ARRAYS 
// // #include<iostream>
// // #include<vector>
// // #include<set>
// // using namespace std;
// // int main(){
// //  int arr[4]={1,2,3,4};
// //  int arr2[6]={1,2,3,7,8,9};
// //  vector<int> result;
// //  for(int i=0;i<4;i++){
// //     result.push_back(arr[i]);
// //  }
// //  for(int i=0;i<6;i++){
// //     result.push_back(arr2[i]);
// //  }
// //  set<int> s;
// //  for(int i=0;i<result.size();i++){
// //     s.insert(result[i]);
// //  }
// //  vector<int> ans;
// //  for(set <int> :: iterator i=s.begin();i!=s.end();++i){
// //     ans.push_back(*i)
// //  }
// // // ab return kr do ans 

// // }


// // to find the maximum consecatives ones

// // #include<iostream>
// // using namespace std;
// // int maxconsecative(int arr[],int size){
// //     int count=0;
// //     int count2=0;
// //     for(int i=0;i<6;i++){
// //         int count=0;
// //         for(int j=i;j<6&& arr[j]!=0;j++){
// //             count++;
// //             i=j;
// //         }
// //         if(count>count2){
// //             count2=count;
// //         }
// //     }
// //     return count2;
// // }
// // int main(){
// //     int arr[6]={1,1,0,1,1,1};
// //     cout<<maxconsecative(arr,6)<<endl;
// // }


// // left rotate an array by one place 

// // #include<iostream>
// // using namespace std;
// // void rotateleft(int arr[],int size){
// //     int first=arr[0];
// //     for(int i=0;i<5;i++){
// //         arr[i-1]=arr[i];
// //     }
// //     arr[4]=first;
// //     // return arr;
// // }
// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //     rotateleft(arr,5);
// //     for(int i=0;i<5;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }


// // move zeroes to last 
// // #include<iostream>
// // using namespace std;
// // void movezeroes(int arr[],int size){
// //     int i=0;
// //     for(int j=0;j<13;j++){
// //         if(arr[j]!=0){
// //             swap(arr[i],arr[j]);
// //             i++;
// //         }
// //     }
// // }
// // int main(){
// //     int arr[13]={1,2,0,3,4,0,5,0,0,7,0,8,9};
// //     movezeroes(arr,13);
// //     for(int i=0;i<13;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }


// // Binary search 
// // #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int n,int target){
    
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     // bool found=false;
//     while(s<=e){
//         if(arr[mid]==target){
//             // found=true;
//             return mid;
//         }
//         else if(arr[mid]<target){
//         s=mid+1;
//     }
//     else{
//         e=mid-1;
//     }
//     mid=s+(e-s)/2;
// }
// // if(found==false){
//     return -1;
// // }


// }
// int main(){
//     int arr[8]={6,7,8,9,10,11,13,17};
//     int target;
//     cin>>target;
//    cout<< binarysearch(arr,8,target)<<endl;
//    return 0;

// }



// first and last occurence of an element in an bs
// #include<iostream>
// using namespace std;
// int firstoccurence(int arr[],int size,int key){
//     int s=0;
//     int e=size-1;
//     int ans=-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;

// }
// int lastoccurence(int arr[],int size,int key){
//     int s=0;
//     int e=size-1;
//     int ans=-1;
//     while(s<=e){
//        int mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(key>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[6]={1,2,2,2,2,2};
//     int key;
//     cin>>key;
//     cout<<"First occurence will be"<<firstoccurence(arr,6,key)<<endl;
//      cout<<"last occurence will be"<<lastoccurence(arr,6,key)<<endl;
//     return 0;

// }


// to find peak index in an mountain array
// #include<iostream>
// using namespace std;
// int peakindex(int arr[],int size){
//     int s=0;
//     int e=size-1;
//     while(s<=e){
//         int m=s+(e-s)/2;
//         if(arr[m]<arr[m+1]){
//             s=m+1;
//         }
//         else{
//             e=m-1;
//         }
      
//     }
//     return arr[s];
// }
// int main(){
//     int arr[5]={3,4,5,1,2};
//     cout<<peakindex(arr,5)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int valuesno(int n){
//     int count=0;
//     while(n>0){
//         int rem=n%10;
//         n=n/10;
//         count++;
//     }
//     return count;
// }
// bool isplindrome (int n){
//     int originalno=n;
//     int sum=0;
//     while(n>0){
//         int r=n%10;
//         sum=sum*10+r;
//         n=n/10;
//     }
//     int no=sum;
//     if(no==originalno){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<isplindrome(n)<<endl;

// }
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     int temp;

//     while(b!=0){
//         temp=b;
//         b=a%b;
//         a=temp;
//     }
//     return a;
// }
// int main(){
//     int a;
//     int b;
//     cin>>a>>b;
//     cout<<gcd(a,b)<<endl;
// }

// to find the lcm of two numbers 
// #include<iostream>
// using namespace std;
// int lcm(int a,int b){
//    for(int i=1;i<=10;i++){
//      int lcm=i*a;
//      if(lcm==b){
//         return lcm;
//      }

//    }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<lcm(a,b)<<endl;
// }


// check whether the number is armstrong or not 
// #include<iostream>
// #include<cmath>
// using namespace std;
// bool is_armstrong(int n){
//     int count=3;// imagine number of digits are given '
//     int origi=n;
//     int sum=0;
//     while(n!=0){
//         int r=n%10;
//         sum =sum+pow(r,3);
//         cout<<sum<<" ";
//         n=n/10;
//     }
//     int result=sum;
//     if(result==origi){
//         return true;
//     }
//     else{
//         return false;
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<is_armstrong(n)<<endl;
//     return 0;
// }


// to check whether the number is prime or not
// this will take time and having time complexity of o(n)

// #include<iostream>
// using namespace std;
// bool is_prime(int n){
//     if(n==0 || n==1){
//         return false;
//     }
//     if(n==2){
//         return true;
//     }
//     if(n%2==0){
//         return false;
//     }
//     for(int i=3;i<pow(i,2);i=i+2){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
    
//     return 0;
// }


// now it is time to revise the array

// to find the maximum and minimum number in an array
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
//     int arr[9]={4,8,7,6,1,34,5,3,2};
//     cout<<maximum(arr,9)<<endl;
//     cout<<minimum(arr,9)<<endl;
//     return 0;
// }

// to find the second maximum 
// #include<iostream>
// #include<climits>
// using namespace std;
// int secondmaximum(int arr[],int size){
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//     }
//     int secondmaxi=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>secondmaxi && arr[i]!=maxi){
//             secondmaxi=arr[i];
//         }

//     }
//     return secondmaxi;
// }
// int main(){
//     int arr[9]={4,8,7,6,1,34,5,3,2};
//     cout<<secondmaximum(arr,9)<<endl;

// }

// to find the max consecutive ones
// #include<iostream>
// using namespace std;
// int findmaxconsecative(int arr[],int size){
//     int count=0;
//     int count2=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==1){
//             for(int j=i+1;j<size && arr[j]!=0 ;j++){
//               count++;
//               i=j;
//             }
//         }
//         if(count>count2){
//             count2=count;
//         }
//     }
//     return count;
// }
// int main(){
//     int arr[10]={1,1,1,0,1,0,0,0,1,1};
//     cout<<findmaxconsecative(arr,10)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void movezeorstoend(int arr[],int size){
//     int i=0;
//     for(int j=0;j<size;j++){
//         if(arr[j]!=0){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//     }
// }
// int main(){
//     int arr[5]={1,0,0,0,1};
//     movezeorstoend(arr,5);
    
//     return 0;
 
// }



// // string practice set
// #include<iostream>
// using namespace std;
// int main(){
//     string s="abhinav";
//     int a=0;
//     int b=s.length()-1;
//     while(a<b){
//         swap(s[a],s[b]);
//         a++;
//         b--;
//     }
//     cout<<s<<endl;
// }


// #include<iostream>
// using namespace std;
// bool arerotated(string &s1,string &s2){
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     string temp=s1+s1;
//     if(temp.find(s2)!=string :: npos)
//     {
//         return true;
//     }
//     return false;

// }
// int main(){
//     string s1="abcd";
//     string s2="cdae";
//     cout<<arerotated(s1,s2)<<endl;
//     return 0;

// }




//  find the union and intersection of two array by using hash 
// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;
// vector<int> find_union(int a[],int b[],int size1,int size2){
//     map<int,int> m;
//     for(int i=0;i<size1;i++){
//         m[a[i]]++;
//     }
//     for(int i=0;i<size2;i++){
//         m[b[i]]++;
//     }
//     vector<int> ans;
//     map<int,int> :: iterator it=m.begin();
//     while(it!=m.end()){
//         ans.push_back(it->first);
//         it++;
//     }
//     return ans;
// }
// vector<int> find_intersection(int a[],int b[],int size1,int size2){
//      map<int,int> m;
//     for(int i=0;i<size1;i++){
//         m[a[i]]++;
//     }
//     vector<int> ans;
//     for(int i=0;i<size2;i++){
//         if(m[b[i]]>=1){
//             ans.push_back(b[i]);
//         }
//     }
//     return ans;
// }

// int main(){
//     int a[4]={2,4,6,8};
//     int b[5]={3,5,4,6,10};
//    vector<int> result=find_union(a,b,4,5);
//    vector<int> abhie=find_intersection(a,b,4,5);
//    for(int i=0;i<result.size();i++){
//     cout<<result[i]<<" ";
//    }
//    cout<<endl;
//     for(int i=0;i<abhie.size();i++){
//     cout<<abhie[i]<<" ";
//    }
//    cout<<endl;
//     return 0;
// }
