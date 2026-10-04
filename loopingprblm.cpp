// /*ALL THE LOOPING PROBLEM*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=1;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     while(  i<=n){
//         cout<<i;
//         i=i+1;
//     }
//     return 0;
// }
// FIND THE SUM OF N NUMBERS

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n value "<<endl;
//     cin>>n;
//     int i=1;
//     int sum=0;
//     while(i<=n){
//         sum =sum+i;
//         i=i+1;
//     }
//      cout<<"sum of the n numbers will be"<<sum<<endl;
//      return 0;
// }


// FIND THE SUM OF N EVEN NUMBERS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int i=2;
//     int sum=0;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     while(i<=n){
//        sum=sum+i;
//        i=i+2;

//     }
//     cout<<sum;
//     return 0;
// }

// CONVERSION OF FAHRENHEIT TO CELSIUS

// #include<iostream>
// using namespace std;
// int main(){
//     int cel,fah;
//     cout<<"Enter your fahrenheit temperture"<<endl;
//     cin>>fah;
//     cel=(fah-32)*5/9;
//     cout<<cel;
//     return 0;

// }


// CHECK THE GIVEN NUMBER IS PRIME OR NOT

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=2;
    while(i<n){
        // divide ho gya,not prime
       if(n%i==0){
    
        cout<<"Given number is not a prime number"<<endl;
       }
       else{
        cout<<"It is a prime number"<<endl;
       } 
       i=i+1;

    }
    return 0; 
}









