// // #include<iostream>
// // #include<array>
// // using namespace std;
// // int main(){
// //   int basic[3]={1,2,3}; 
// //   array<int,4> a={1,2,3,4};// stl array
// //   int size=a.size();
// //   for(int i=0;i<size;i++){
// //     cout<<a[i]<<endl;
// //   } 
// //   cout<<"Element at  2nd index"   <<a.at(2)<<endl;
// //   cout<<"Element or not"  <<a.empty()<<endl;// it will array is empty or not
// //   cout<<"First element "<<a.front()<<endl;
// //   cout<<"last element "<<a.back()<<endl;
// // }  


//             // VECTOR 
// // #include<iostream>
// // #include<vector>

// // using namespace std;
// // int main(){
// //   vector<int> v;// for unknown size
// // //   vector<int> a(5,1);// size will be 5 and it will initialize with 1 in every block
// //   cout<<"size--" <<v.capacity()<<endl;
// //   v.push_back(1);
// //     cout<<"size--" <<v.capacity()<<endl;
// //      v.push_back(2);
// //       cout<<"size--" <<v.capacity()<<endl;
// //        v.push_back(3);
// //       cout<<"size--" <<v.capacity()<<endl;
// //       cout<<" size" << v.size()<< endl;
// //       cout<<"Element at 0 index"<< v.at(0)<< endl;
// //       int size=v.size();
// //       cout<<"Before pop"  << endl;
// //       for(int i:v){
// //         cout<<i<<" ";

// //       }
// //       cout<<endl;
// //       v.pop_back();
// //        cout<<"After pop"  << endl;
// //       for(int i=0;i<v.size();i++){
// //         cout<<v[i]<<" ";

// //       }
// //       cout<<endl;
// // }

//        //DOUBLE ENDED QUEUE//



//        #include<iostream>
//        #include<deque>
//        using namespace std;
//         int main(){
//             deque<int> d;
//             d.push_back(1);
//             d.push_front(2);
//             for(int i:d){
//                 cout<<i<<" ";
//             }
//         // d.  pop_back();
//         //     cout<<endl;
//         //      for(int i:d){
//         //         cout<<i<<" ";
//         //     }
//             d.pop_front();
//             cout<< endl;
//               for(int i:d){
//                 cout<<i<<" ";
//             }
//             cout<<"Empty or not"<<d.empty()<<endl;
//         }


         //  LIST
      //   #include<iostream>
      //   #include<list>
      //   using namespace std;
      //   int main(){
      //       list<int> l;
      //       l.push_back(1);
      //       l.push_front(2);
      //      for(int i:l){
      //       cout<<i<<" ";
      //      }
      //      cout<<endl;
      //      l.erase(l.begin());
      //      cout<<"After erase"<<endl;
      //      for(int i:l){
      //       cout<<i<<" ";
      //      }
      //      cout<<endl;
      //   }
           // STACK --  LIFO--last in first out
        //    #include<iostream>
        // //    #include<stack>
        // //    using namespace std;
        // //    int main(){
        // //      stack<string> s;
        // //      s.push("abhinav");
        // //      s.push("Singh");
        // //      s.push("Thakur");
        // //     //  cout<<"Top element will be  "<<s.top()<<endl;
        // //      s.pop();
        // //        cout<<"Top element will be  "<<s.top()<<endl;
        // //    }
        


              // Queue  FIFO -First in first out
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string> q;
//     q.push("Ekta");
//     q.push("Singh");
//     q.push("Abhinav");
//     q.pop();
//     cout<<"Top element will be "<<q.front()<<endl;
//     return 0;

// }

// PRIORITY QUEUE
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
  
//     priority_queue<int> maxi;// max heap
//     priority_queue<int,vector <int> ,greater<int> >mini;// min-heap
//     maxi.push(2); 
//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(4);
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }
//  cout<<endl;
//  mini.push(5);
//  mini.push(3);
//   mini.push(4);
//  mini.push(8);
//  for(int i=0;i<n;i++){
//     cout<<mini.top()<<" ";
//     mini.pop();
//  }
// }

// set
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int> s;
//     s.insert(5);
//        s.insert(1);
//           s.insert(6);
//              s.insert(0);
//              for(auto i:s){
//                 cout<<i<<endl;
//              }
// }


