
// recursion =calling itself to solve a big problem

// to find the factorial of a number by using recursion

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n)<<endl;
// }


// to reverse the string by using recursion

// #include<iostream>
// using namespace std;
// void reverse(string s,int index){
//     if(index>=s.length()){
//         return ;
//     }
//     reverse(s,index+1);
//     cout<<s[index]<<"";

// }
// int main(){
//     int index=0;
//     string s="abc";
//     reverse(s,index);
// }



// merge sort by recursion 

#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    // fill l
    int k=l;
    for(int i=0;i<n1;i++){
        L[i]=arr[k];
        k++;
    }
     
     for(int i=0;i<n2;i++){
        R[i]=arr[k];
        k++;
    }
    // merge them in arr 
    int i=0;
    int j=0;
    k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=L[j];
        j++;
        k++;
    }

}
void mergesort(int arr[],int l,int r){
    int m=l+(r-l)/2;
    if(l>=r){// base case
        return;
    }
    mergesort(arr,l,m);
    mergesort(arr,m,r);
    // merge krn dena hai ab
   merge(arr,l,m,r);
}
int main(){
    int arr[5]={3,2,1,5};
    int l=0;
    int r=4;
    mergesort(arr,0,4);
}