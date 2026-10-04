// // what is hashmap=a hashmap is a data structure used to store the date in key value form


// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     // creation 
//     unordered_map<string,int> m;
//     // insertion in map
//     pair<string,int>p("hello",1);
//     m.insert(p);
//     pair<string,int> q("hii",2);
//     m.insert(q);

//     // accessing 
//     cout<<m.at("hello")<<endl;
    
//     // access through iterator
//     unordered_map<string,int> :: iterator it=m.begin();
//     while(it!=m.end()){
//         cout<< it->first <<" "<< it->second<<endl;
//         it++;
//     }
//     return 0;

// }


// int maximumFrequency(vector<int> &arr,int n){
//     unordered_map<int ,int> count;
//     int maxfreq=0;
//     int maxans=0;
//     for(int i=0;i<arr.size();i++){
//         count[arr[i]]++;
//         maxfreq=max(maxfreq,count[arr[i]]);
//     }
//     for(int i=0;i<arr.size();i++){
//         if(maxfrq=count[arr[i]]){
//             maxans=arr[i];
//             break;
//         }
//     }
//     return maxans;
// }



// check if array is sorted or not 

// #include<iostream>
// using namespace std;
// bool checkSorted(int arr[],int size){
//     int a=-1;
//     int max=INT_MIN;
//     for(int i=0;i<size ;i++){
//         if(arr[i]>arr[i+1]){
//          a=i;
//         }
//       if(arr[i]>max){
//         max=arr[i];
//         a++;
//       }
//     }
//     for(int i=a+1;i<size;i++){
//         if(arr[i]>max){
//             return false;
//         }

//     }
// }
// int main(){
//     int arr[5]=[3,4,5,1,2];
// }


// union of two sorted arraay 