// // // // Queue is that type of data structure in which the data or element which was first entered that will first out.
// // // // i.e it is called first in first out FIFO

// // // // creation of queue queue<data type> queue name;

// // // // // #include<iostream>
// // // // // #include<queue>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     queue<int> q;
// // // // //     q.push(11);
// // // // //     q.push(15);
// // // // //     q.push(13);
// // // // //     cout<<"Size od queue is "<<q.size()<<endl;
// // // // //     q.pop();
// // // // //     cout<<"Size od queue is "<<q.size()<<endl;
// // // // //     if(q.empty()){
// // // // //         cout<<"Queue is empty "<<endl;
// // // // //     }
// // // // //     else{
// // // // //         cout<<"Queue is not empty "<<endl;
// // // // //     }
// // // // //     cout<<"Front element will be"<<q.front()<<endl;
// // // // //     cout<<" last element will be "<< q.back()<<endl;
// // // // //     return 0;

    
// // // // // // } 

// // // // // // IMPLEMENTATION OF QUEUE WITH THE HELP OF ARRAY
// // // // #include<iostream>
// // // // using namespace std;
// // // // class queue{
// // // //     public:
// // // //     int front;
// // // //     int rear;
// // // //     int *arr;
// // // //     int size;
// // // //     queue(int size){
// // // //         this->size=size;
// // // //       arr=new int [size];
// // // //       front=-1;
// // // //       rear=-1;
// // // //     }
// // // //     void push(int element){
// // // //         if(rear==size){
// // // //             cout<<"Queue is Full"<<endl;
// // // //         }
// // // //         else{
// // // //             arr[rear]=element;
// // // //             rear++;
// // // //         }
// // // //     }
// // // //     void pop(){
// // // //         if(front==-1&& rear==-1){
// // // //             cout<<"Queue is empty"<<endl;
// // // //         }
// // // //         else{
// // // //             front++;
// // // //         }
// // // //     }
// // // //     bool isempty(){
// // // //         if(front==-1 && rear==-1){
// // // //             cout<<" Queue is empty "<<endl;
// // // //         }
// // // //         else{
// // // //             cout<<"Queue is not empty "<<endl;
// // // //         }
// // // //     }
// // // //     int top(){
// // // //         if(front==-1 && rear==-1){
// // // //             cout<<" Queue is empty "<<endl;
// // // //         }
// // // //         else{
// // // //             return arr[front];
// // // //         }
// // // //     }
// // // // };
// // // // int main(){
// // // //     queue q(5);
// // // //     q.push(11);
// // // //     q.push(12);
// // // //     q.push(13);
// // // //     q.push(14);
// // // //   cout<< q.top()<<endl;
// // // //   q.pop();
// // // //   cout<< q.top()<<endl;
// // // //   q.isempty();

// // // //     return 0;
     
// // // // }


// // // // CIRCULAR QUEUE
// // //  #include<iostream>
// // //  using namespace std;
// // //  class queue{
// // //     public:
// // //     int front ;
// // //     int rear ;
// // //     int *arr;
// // //     int size;
// // //     queue(int size){
// // //         this->size=size;
// // //         arr=new int [size];
// // //         front= -1;
// // //         rear= -1;

// // //     }
// // //     void push( int element){
// // //         if (front==0 && rear==size-1){
// // //             cout<<"Queue is full"<<endl;
// // //         }
// // //         else if(front==-1 && rear==-1){
// // //             arr[rear]=element;
// // //             front =rear=0;
// // //             arr[rear]=element;
// // //         }
// // //         else if ( rear==size-1 && front!=0){
// // //             rear=0;
// // //             arr[rear]=element;
// // //         }
// // //         else{
// // //             rear++;
// // //             arr[rear]=element;
// // //         }
// // //     }
// // //     void pop(){
// // //         if(front==-1){
// // //             cout<<"Queue is empty "<<endl;
// // //         }
// // //         else if(front==rear ){
// // //             front=rear=-1;
// // //         }
// // //         else if(front==size-1){
// // //             front=0;
// // //         }
// // //         else{
// // //             front++;
// // //         }
       

// // //     }
// // //     bool isempty(){
// // //         if(front==-1){
// // //             cout<<" Queue is empty"<<endl;
// // //     }
// // //     else{
// // //         cout<<"Queue is not empty"<<endl;
// // //     }
// // // }
// // //     int top(){
// // //         if(front==-1){
// // //             cout<<" Queue is empty"<<endl;  
// // //     }
// // //     else{
// // //         return arr[front];
// // //     }
// // // }

// // //   } ;
// // //  int main(){
// // //     queue qt(5);
// // //     qt.push(1);
// // //     qt.push(2);
// // //     qt.push(3);
// // //     qt.push(4);
// // //     qt.push(5);
// // //     cout<< qt.top() <<endl; 
// // //     qt.pop();
// // //     qt.push(6);
// // //     qt.pop();
// // //     qt.pop();
// // //     qt.pop();
// // //     qt.pop();
// // //     cout<< qt.top() <<endl; 
    
    
// // //     return 0;
     
// // //  }


// //     //  Implementatiion of DOUBLY Ended Queue using Array
// //     // #include<iostream>
// //     // using namespace std;
// //     // class queue{
// //     //     public:
// //     //     int front;
// //     //     int rear;
// //     //     int *arr;
// //     //     int size;
// //     //     queue(int size){
// //     //         this->size=size;
// //     //         arr=new int [size];
// //     //         front=-1;
// //     //         rear=-1;
// //     //     }

// //     //     void pushfront(int element){
// //     //         if(front==0 && rear=size-1){
// //     //             cout<<"Sorry Queue is full"<<endl;
// //     //         }
// //     //         else if (front==-1){
// //     //             front=rear=0;
// //     //             int [front]=element;
// //     //         }
// //     //         else if(front==0){
// //     //             front=size-1;
// //     //             int [front]=element;
// //     //         }
// //     //         else{
// //     //             front--;
// //     //             int [front]=element;
// //     //         }
// //     //     }
// //     //     void pushback(int element){
// //     //         if(front==0 && rear=size-1){
// //     //             cout<<"Sorry Queue is full"<<endl;
// //     //         }
// //     //         else if( front==-1){
// //     //             front=rear=0;
// //     //             int [rear]=element;
// //     //         }
// //     //         else if( rear==size-1 && front !=0){
// //     //             rear=0;
// //     //             int [rear]=element;
// //     //         }
// //     //         else{
// //     //             rear++;
// //     //             int [rear]=element;
// //     //         }
// //     //     }
// //     //     void popfront(){
// //     //         if(front==-1){
// //     //             cout<<"Queue is empty"<<endl;
// //     //         }
// //     //         else if (front==0){
// //     //             front=-1;
// //     //         }
        
// //     //         else{
// //     //             front++;
// //     //         }
// //     //     }
// //     //     void popback(){
// //     //         if(front==-1){
// //     //             cout<<"Queue is empty"<<endl;
// //     //         }
// //     //         else if(front ==rear){
// //     //             rear=-1;
// //     //         }
// //     //         else if(rear==0){
// //     //             rear=size-1;
// //     //         }
// //     //         else{
// //     //             rear--;
// //     //         }
// //     //     }

// //     // };
// //     // int main(){
// //     //     queue qt[4];


// //     // }  


// // //  COMPETATIVE AND IMPORTANT QUESTION OF QUEUE
 

// // // quest 1=  Reverse the element of queue
// // // #include<iostream>
// // // #include<queue>
// // // #include<stack>
// // // using namespace std;
// // // int main(){
// // //     queue<int> q;
// // //     q.push(4);
// // //     q.push(1);
// // //     q.push(10);
// // //     q.push(2);
// // //     q.push(6);
// // //     cout<<q.back()<<endl;
// // //     stack <int> s;
// // //     while(! q.empty()){
// // //         int element=q.front();
// // //         s.push(element);
// // //         q.pop();
// // //     } 
// // //     while(!s.empty()){
// // //         int d=s.top();
// // //         q.push(d);
// // //         s.pop();
// // //     }
// // //     while(! q.empty()){
// // //         cout<<q.front()<<" ";
// // //         q.pop();
// // //     }

// // // }


// // // QUESTION NO=2 FIRST NEGATIVE INTEGER IN EVERY WINDOW OF SIZE K
// // #include<iostream>
// // #include <deque>
// // using namespace std;
// // vector <int > printfirstnegativenumber( int a[],int size,int k){
// //     deque<int> dq;
// //     vector <int> ans;
// //     for(int i=0;i<k;i++){
// //         if(A[i]<0){
// //             dq.push_back(i);
// //         }
// //     }
// //     if(dq.size()>0){
// //         ans.push_back(A[dq.front()]);
// //     }
// //     else{
// //         ans.push_back(0);
// //     }
// //     for(int i=k;i<size;i++){
// //         if( !dq.empty() && i-dq.front() >=k){
// //             dq.pop_front();
// //         }
// //         if(A[i]<0){
// //             dq.push_back(i);
// //         }
// //         if(dq.size()>0){
// //             ans.push_back(A[dq.front()]);
// //         }
// //         else{
// //             ans.push_back(0);
// //         }
// //     }
// //     return ans;

// // }

// // int main(){
// //     int a[5]={-8,2,3,-6,10};
// //     printfirstnegativenumber(a,5,2);
// //     return 0;

// // }


// // Question 3: Reverse first k elements of queue 

// // #include<iostream>
// // #include<stack>
// // #include<deque>
// // using namespace std;
// // int main(){
// //     int k;
// //     cin>>k;
// // deque<int> q;
// // q.push_front(1);
// // q.push_front(2);
// // q.push_front(3);
// // q.push_front(4);
// // q.push_front(5);
// // stack <int> st;

// // while(q.size()!=k){
// //     int element=q.front();
// //     st.push(element);
// //     q.pop_front();
// // }
// // while(!st.empty()){
// //     int d=st.top();
// //     q.push_back(d);
// //     st.pop();
// // }
// // while(!q.empty()){
// //     cout<<q.front()<<" ";
// //     q.pop_front();
// // }
// // cout<<endl;

// // }


// //  Approach 2: solve it only by queue
// // = usme kuch nhi krna bs jo phle element aa jynge unhe nikal kr pichhe lga dena hai bss 



//     // Question = First non repeating character in a stream= given an input stream of character consisting only 
//                 //  of lower case alphabet the condition is you have to find first non repeating character

// // #include<iostream>
// // #include<queue>
// // #include<map>
// // using namespace std;
// // string FirstnonRepeating(string A){
// //     map<char,int> count;// for storing count of any number
// //     queue<char> q;
// //     string ans="";
// //     for(int i=0;i<A.size();i++){
// //         char ch=A[i];
// //         count[ch] ++;
// //         q.push(ch);
// //         while(!q.empty()){
// //             if(count[q.front()]>1){
// //                 q.pop();
                
// //             }
// //             else{
// //                 ans.push_back(ch);
// //                 break;
// //             }
// //         }
// //         if(q.empty()){
// //             ans.push_back('#');
// //         }
        
// //     }
// //     return ans;


// // }
// // int main(){
// //     string A="aabc";
// //     string result=FirstnonRepeating(A);
// //     cout<<result<<endl;
// //     return 0;
// // }

// // most important question =circular tour
// // description of problem = you have to given the amount of petrol and distance and there will be no of petrol pump in a 
// //                         a circular path and you have to find the start point that will reach to eac h pump without failing


// int ciculartour(int petrol[],int distance[],int n){
//   int start=0;
//   int front=0;
//   int rear=0;
//   int balance=0;
//   int count=0;
//   while(count<n){
//     int gain = petrol[rear] - distance[rear];
//     if(balance+gain>=0){
//       balance=balance+gain;
//       rear=rear++;
//     }
//     // else{
//       start=rear+1;
//       rear=start;
//       balance=0;
//       count=0;
//     }
//   }
//   return start;
// }

// Question =Interleave the first half of the queue with second half
// APPROACH NO 1;

//  #include<iostream>
//  #include<queue>
// using namespace std;
// int main(){
//   queue<int> q;
//   q.push(11);
//   q.push(12);
//   q.push(13);
//   q.push(14);
//   q.push(15);
//   q.push(16);
//   q.push(17);
//   q.push(18);
//   // cout<<q.front()<<endl;
//   queue<int> q1;
//   int originalsize=q.size()/2;
//   for(int i=0;i<originalsize;i++){
//     int d=q.front();
//     q1.push(d);
//     q.pop();
// }
// while(!q1.empty()){
//   int val=q1.front();
//   q1.pop();
//   q.push(val);
//   int value=q.front();
//   q.pop();
//   q.push(value);
// }
// while(!q.empty()){
//   cout<<q.front()<<" ";
//   q.pop();
// }
// cout<<endl;

// }







