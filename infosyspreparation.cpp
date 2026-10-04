// now the practice of infosys coding assesment is started 


// Remove duplicate from a sorted array 

// #include<iostream>
// using namespace std;
// int removeduplicate(int nums[],int size){
//   int i=0;
//   for(int j=1;j<size;j++){
//     if(nums[i]!=nums[j]){
//       i++;
//       nums[i]=nums[j];
//     }
//   }
//   return i+1;
// }
// int main(){
//   int nums[3]= {1,1,2};
// cout<<removeduplicate(nums,3)<<endl;
// }

// move zeroes from end 

// #include<iostream>
// using namespace std;
// void movezeroes(int arr[],int size){
//   int i=0;
//   for(int j=0;j<size;j++){
//     if(arr[j]!=0){
//       swap(arr[i],arr[j]);
//       i++;
//     }
//   }
// }
// int main(){
// int arr[5]={0,1,0,3,12};
// movezeroes(arr,5);
// for(int i=0;i<5;i++){
//   cout<<arr[i]<<" ";
// }
// cout<<endl;

// }



// best time to buy and sell the stock 

// #include<iostream>
// using namespace std;
// int profit (int prices[],int size){
//   int buy_prices=prices[0];
//   int max_profit=0;
//   for(int i=0;i<size;i++){
//     if(prices[i]<buy_prices){
//       buy_prices=prices[i];
//     }
//     int current_profit=prices[i]-buy_prices;
//     if(current_profit>max_profit){
//       max_profit=current_profit;
//     }
    
//   }
//   return max_profit;
// }
// int main(){
//   int prices[6]={7,1,5,3,6,4};
//   cout<<profit(prices,6)<<endl;
//   return 0;
// }



// majority element present in the array 


// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int majority_Element(int arr[],int size){
// unordered_map<int,int> elements;
// for(int i=0;i<size;i++){
//   elements[arr[i]]++;
// }
// int max=0;
// for(auto it=elements.begin();it!=s.begin();it++){
//   if(elements->second >max){
//     max=elements->first;

//   }

// }
// return max;
// }
// int main(){
//   int arr[7]={2,2,1,1,1,2,2};
//   cout<<majority_Element(arr,7)<<endl;
// }




// sorting of data 
// 1. selection sort 
#include<iostream>
#include<climits>
using namespace std;
void selectionsort(int data[],int size){
int i=0;
while(i!=size-1){
int mini=i;
for(int j=i+1;j<size;j++){
    if(data[j]<data[mini]){
        mini=j;
    }
}
if(data[i]>mini){
    swap(data[i],data[mini]);
    i++;
}


}
}
int main (){
  int data[6]={7,1,3,4,6,5};
  selectionsort(data,6);
  for(int i=0;i<6;i++){
    cout<<data[i]<<" ";
  }
  cout<<endl;
}