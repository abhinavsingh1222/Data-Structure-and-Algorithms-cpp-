// recursion = when a function call itself until a specific condition is met
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){ // base condition 
//         return ;
//     }
//     cout<<"1"<<endl;
//     n--;
//     print(n); //recursive function
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }



//  print the name five times

// #include<iostream>
// using namespace std;
// void printName(string s,int n){
//     if(n==0){
//         return ;
//     }
//     cout<<s<<endl;
//     printName(s,n-1);

// }
// int main(){
//     int n=5;
// string s="abhie";
// printName(s,5);
// }


// print linearly from 1 to n

// #include<iostream>
// using namespace std;
// void printNo(int i,int n){
//     if(i>n){
//         return ;
//     }
//     cout<<i<<endl;
//     printNo(i+1,n);

// }
// int main()
// {
// int i=1;
// int n;
//  cin>>n;
//  printNo(i,n);
// }



// #include<iostream>
// using namespace std;
// void printing(int n){
// if(n==0){
//     return ;
// }
// cout<<n<<endl;
// printing(n-1);
// }
// int main(){
// int n;
// cin>>n;
// printing(n);
// }

// // print from 1 to n by using the concept of backtracking 
// #include<iostream>
// using namespace std;
// // use 0f backtracking
// void printing(int n){
//     if(n==0){
//         return ;
//     }
//     printing(n-1);
//     cout<<n<<endl;
    

// }
// int main(){
//     int n;
//     cin>>n;
//     printing(n);

// }



// parametrerised and functional recursion 

// 1. parameterised way 

// #include<iostream>
// using namespace std;
// void   sumi(int i,int sum){
//     if(i<0){
//         cout<<sum<<endl;
//         return ;
//     }
//     sumi(i-1,sum+i);
// }
// int main(){
//     int n;
//     cin>>n;
//     sumi(n,0);

// }


// 2. functional means = that return something not print 
// #include<iostream>
// using namespace std;
// int summation(int n){
//     if(n==0){
//         return 0;
//     }
//     return (n+ summation(n-1));
// }
// int main(){
//     int n;
//     cin>>n;
//    cout<<summation(n)<<endl;
      
// }


// question =reverse an array using recursion 
// #include<iostream>
// #include<vector>
// using namespace std;
// void reversi(int arr[],int a,int b){
  
//     if(a>=b){
//         return ;
//     }
//     swap(arr[a],arr[b]);
//     reversi(arr,a+1,b-1);

// }
// int main(){
//     int arr[4]={1,2,3,4};
//     reversi(arr,0,3);
//     for(int i=0;i<4;i++){
//         cout<<arr[i]<<"";
//     }
// }

// we can also reverse by using a single pointer 

// #include<iostream>
// #include<vector>
// using namespace std;
// void reversing(int arr[],int n,int i){

//     if(i>=n/2) {
//         return ;
//     }
//     swap(arr[i],arr[n-i-1]);
//     reversing(arr,n,i+1);
// }
// int main(){
//     int arr[4]={1,2,3,4};
//     reversing(arr,4,0); 
//     for(int i=0;i<4;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// check whether the string is palindrome or not 
// #include<iostream>
// using namespace std;
// bool isPalindrome(string name,int n,int i){
//     if(i>=n/2){
//         return true;
//     }
//     if(name[i]!=name[n-i-1]){
//         return false;
//     }
    
//    return  isPalindrome(name,n,i+1);

// }
// int main(){
//     string name="madam";
//     int n=name.length();
//    cout<< isPalindrome(name,n,0)<<endl;
// }


// multple recursion  calls

// 1.fibonacci number 
// #include<iostream>
// using namespace std;
// int fibonacciNo(int n){
//     if(n<=1){
//         return n;
//     }
//     int last=fibonacciNo(n-1);
//     int sl=fibonacciNo(n-2);
//     return last +sl;
// }
// int main(){
//     int n;
//     cin>>n;
//    cout<< fibonacciNo(n)<<endl;
// }





// print all subsequence 
// A subsequence is a contiguous or non contiguous sequences which follows the order 
// #include<iostream>
// #include<vector>
// using namespace std;
// void solve(vector<int> arr,vector<int> output,vector<vector<int>> &ans,int index){
//     // base case
//     if(index>=arr.size()){
//         ans.push_back(output);
//         return ;
//     }
//     // exclude
//     solve(arr,output,ans,index+1);
//     // include
//     int element=arr[index];
//     output.push_back(element);
//     solve(arr,output,ans,index+1);
// }
// vector<vector<int>> subset(vector<int> arr){
//     vector<vector<int>> ans;
//     vector<int>output;
//     int index=0;
//     solve(arr,output,ans ,index);
//     return ans;
// }
// int main(){
//     vector<int> arr={3,2,1};
//     vector<vector<int>> result=subset(arr);
//    for(auto subset : result) {

//     cout << "{ ";

//     for(auto element : subset) {
//         cout << element << " ";
//     }

//     cout << "}" << endl;
// }    

// }

