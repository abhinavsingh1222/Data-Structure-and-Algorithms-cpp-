// // #include<iostream>
// // using namespace std;
// // int main(){
// //     map<int,string> m;
// //     m[1]="abc";
// //     m[2]="cdc";
// //     m.insert({4,"des"});
    

// // }

// // concept of map

// // #include<iostream>
// // #include<map>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     int arr[8]={1,4,5,3,2,1,3 ,6};
// //     map<int ,bool> m;
// //     vector<int> ans;
// //     for(int i=0;i<8;i++){
// //         if(m[arr[i]]!=true){
           
// //         ans.push_back(arr[i]);
// //          m[arr[i]]=true;
            
// //         }
// //     }
// //     for(int i=0;i<ans.size();i++){
// //         cout<<ans[i]<<" ";
// //     }
// //     cout<<endl;
// // }

// // concept of set
// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// int main(){
//     int ans[9]={4,5,7,7,7,3,4,6,8};
//     set<int> s;
//     for(int i=0;i<9;i++){
//         s.insert(ans[i]);
//     }
//     for(set<int> ::iterator it=s.begin(); it!=s.end();++it){
//         cout<<*it<<endl;
//     }
// }