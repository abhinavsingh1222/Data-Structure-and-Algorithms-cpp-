// number is prime or not 


// #include<iostream>
// using namespace std;
// bool isprime(int n){
//  if(n<=1){
//     return false;
//  }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter your number"<<endl;
//     cin>>n;
//    if(isprime(n)){
//     cout<<"It is a prime number"<<endl;
//        }
//        else{
//         cout<<"It is not a prime numbre"<<endl;
//        }
//     return 0;

// // }

// // GIVE A NUMBER AND WE HAVE PROVIDE HOW MANY PRIME EXITS UPTO THAT NUMBER

// #include<iostream>
// using namespace std;
// bool isprime(int n){
//  if(n<=1){
//     return false;
//  }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int countprime(int n){
//     int count=0;
//    for(int i=2;i<n;i++){
//     if(isprime(i)){
//         count++;
//     }

//    }
//    return count;
// }
// int main(){
//     int n;
//     cin>>n;
//   isprime(n);
//  cout<<"Total prime number upto this will be"<< countprime(n)<<endl;
// }
//    sieve of Eratosthenes - By another method 
// #include<iostream>
// #include<vector>
// using namespace std;
// int countprime(int n){
//     int count=0;
//     vector<bool> prime(n+1,true);
//     prime[0]=prime[1]=false;
//     for(int i=2;i<n;i++){
//         if (prime[i]){
//             count++;
//             for(int j=2*i;j<n;j=j+1){
//                 prime[j]=0;
//             }
//         }
//     }
//     return count++;
// }
// int main(){
//      int n;
//      cin>>n;
//      cout<<"Total prime  number will be"<<countprime(n)<<endl;
// }

//  HOME WORK -SEGMENTED SIEVE

// #include<iostream>
// using namespace std;
// int main(){

// }

    //    GCD/HCF -highest common factor 

    //  FORMULA= GCD(a,b)=GCD(a-b,b); very important
    //  formula= gcd*lcm=a*b;
    // #include<iostream>
    // using namespace std;
    // int gcd(int a,int b){
    //     if (a==0){
    //         return b;
    //     }
    //     if(b==0){
    //         return a;

    //     }
    //     while(a!=b){
    //         if(a>b){
    //             a=a-b;
    //         }
    //         else{
    //             b=b-a;
    //         }
    //     }
    //     return a;
    // }
    // int lcm(int a,int b){
    //     int ans;
    //     int num=a*b;
    //     int deno=gcd(a,b);
    //     ans=num/deno;
    //     return ans;
        

    // }
    // int main(){
    //     int a,b;
    //     cout<<"Enter the value of a and b"<<endl;
    //     cin>> a>> b;
    //     int ohho=gcd(a,b);
    //     cout<<ohho<<endl;
    //    cout<<lcm(a,b)<<endl;
    //     return 0;

    // }



 
