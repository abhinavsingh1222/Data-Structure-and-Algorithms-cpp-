// #include<iostream>
// using namespace std;
// int  reverse(int n){
//     int result=0;
//     while(n!=0){
//         int r=n%10;
//         result=result*10+r;
//         n=n/10;
//     }
//     return result;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<reverse(n)<<endl;
//     return 0;
// }

// find the hcf and gcd of two number 
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
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b)<<endl;
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// bool armstrongnumber(int n){
//     int original=n;
//     int sum=0;
//     while(n!=0){
//         int r=n%10;
//         sum=sum+r*r*r;
//         n=n/10;
//     }
//     if(sum==original){
//         return true;
//     }
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//    cout<< armstrongnumber(n)<<endl;
// }


// find the second largest element in a array
// #include<iostream>
// #include<climits>
// using namespace std;
// int secondlargest(int arr[],int size){
//     int max=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
    
//     int sl=INT_MIN;
//     for(int i=0;i<size;i++ )
//     {
//         if(arr[i]==max){
//             continue;
//         }
//         if(arr[i]>sl ){
//             sl=arr[i];
//         }
        
//     }
//     return sl;

// }
// int main(){
//     int arr[6]={52,89,4,78,65,99};
//     cout<<secondlargest(arr,6)<<endl;
//     return 0;

// }

// // to left rotate an array 
// #include<iostream>
// using namespace std;
// void leftrotate(int arr[],int size=5){
//     int last=arr[4];
//     int first=arr[0];
//     for(int i=4;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=last;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     leftrotate(arr,5);
//     for(int i=0;i<5;i++){
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// } 


// largest odd number in an string 
// #include<iostream>
// using namespace std;
// string Largestodd(string num){
//     int n=num.length();
//     if(num[n-1]&2!=0){
//         return num;
//     }
//     int index=-1;
//     for(int i=n-1;i>=0;i--){
//         if(num[i]%2!=0){
//             index=i;
//             break;
//         }
//     }
//     return num.substr(0,index+1);
// }
// int main(){
// string num;
// cin>>num;
// cout<<Largestodd(num)<<endl;
// return 0;

// }



// Binary Search 
// #include<iostream>
// using namespace std;
// bool binarysearch(int arr[],int size=6,int target){
//     int s=0;
//     int e=size-1;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==target){
//             return true;
//         }
//         else if(arr[mid]>target){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return false;

// }
// int main(){
//     int arr[6]={1,3,4,5,7,8};
// }



// to find max consecative ones 

#include<iostream>
using namespace std;
int maxcons(int arr[],int size){
    int count=0;
    int i=0;
    int count2=0;
    for(int j=0;j<size;j++)
    {
      if(arr[j]==1){
        count++;
        i=j;
      }
      else if(arr[j]==0){
        i=j+1;
        if(count>count2){
        count2=count;
        }
        count=0;
      }
    }
    cout<< count2<<" ";
}
int main(){
    int arr[6]={1,1,0,1,1,1};
    cout<<maxcons(arr,6);
    return 0;
}

