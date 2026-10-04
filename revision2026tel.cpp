#include<iostream>
using namespace std;
int reverse(int n){
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum=rem+sum*10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
    return 0;

}


// find the hcf of a number 


#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
}
int main(){
    int a=6,b=12;

}