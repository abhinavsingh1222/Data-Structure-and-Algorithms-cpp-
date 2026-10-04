// #include<iostream>
// using namespace std;
// int power(){
//     int a,b;
//    cin>>a>>b;
//    int ans=1;
//    for(int i=1;i<=b;i++){
//       ans=ans*a;
//    }
//    return ans;
// }
// int main(){
  
//     int answer=power();
//     cout<<answer;
//      int ans=power();
//     cout<<ans;
//      int annswr=power();
//     cout<<annswr;
    
//    return 0;
// }
// functin that define number is even or not

// #include<iostream>
// using namespace std;
// bool even(int a){
//    if(a%2==0){
//       return 1;
//    }
//    return 0;
// }
// int main(){
//    int num1;
//    cin>>num1;
//    bool result=even( num1);
//    if(result==0){
//    cout<<"It is odd number"<<endl;

//    }
//    else{
//       cout<<"Number is even"<<endl;
//    }
  
// }
// // to find the value of ncr 

// #include<iostream>
// using namespace std;
// int fact(int n){
//   int  fact=1;
//    for(int i=1;i<=n;i++){
//       fact=fact*i;
//    }
//    return fact;
// }
// int ncr(int n ,int r){
//    int num=fact(n);
//    int deno=fact(n-r)*fact(r);
//    int ncr=num/deno;
//    return ncr;
// }
// int main(){
//    int n,r;
//    cin>>n >> r;
//    int ans=ncr(n,r);
//    cout<<"answer will be"<<ans;
//    return 0;

//  a function print counting upto n

//  #include<iostream>
//  using namespace std;
//  void printcounting(int n){
 
//     for( int i=1;i<=n;i++){
//         cout<<i<<endl;

//     }

//  }
//  int main(){
//       int n;
//       cin>>n;
//  printcounting(n);
 

//  }

// #include<iostream>
// using namespace std;
// bool isprime(int n){
//  for(int i=1; i<=n;i++){
//    if (n%i==0){
//       return 0;

//    }

//  }
//  return 1;
//  }



// int main(){
//    int n;
//    cout<<"Enter the number"<<endl;
//    cin>>n;
//     bool result=isprime(n);
//      if( result=0){
//       cout<<"It is a not prime number  "<<endl;
//      }
//      else{
//       cout<<"It is a prime number"<<endl;
//      }
// }
//  fabonacci series

#include<iostream>
using namespace std;
int fabonacci(int n){
  int sum=0;
  int a=1,b=2;
  cout<<a<<b;
  for(int i=1; i<=n;i++){
    sum=a+b;
    cout<<sum;
    a=b;
    b=sum;
    
   
  }
 


}
int main(){
   int n;
   cin>>n;
    fabonacci(n);
}







