// // //  !!! CONCEPT OF STACK = A LINEAR DATA STRUCTURE

// // // stack is a data structure which follow the concept of LIFO(Which means last in first out)

// // // There are so many operation we can perform on stack
// // // 1.push = enter the value to stack
// // // 2.pop = delete any value from the stack'
// // // 3.peak = to find the top most value in a stack
// // // 4.empty = to check whether the stack is empty or not

// // // creation of stack = stack<int> s;
// // //   operations
// // //   s.push(2);
// // //   s.pop();
// // //   s.empty();
// // //   s.peak();

// // // #include<iostream>
// // // #include<stack>
// // // using namespace std;
// // // int main(){
// // // // stack<int> s; // creation of stack
// // // // s.push(2); // push 2 in stack;
// // // // s.push(3);
// // // // s.pop();
// // // // cout<< "printing top most value "<< s.top ()<<endl;
// // // // if (s.empty()){
// // // //     cout<<"stack is empty"<<endl;
// // // // }
// // // // else{
// // // //     cout<<"stack is not empty"<<endl;
// // // // }
// // // // cout<<" Size of stack is "<<s.size()<<endl;
// // // return 0;
// // // }


// // /// IMPLEMENTATION OF STACK BY USING ARRAY  

// // #include <iostream>
// // using namespace std;
// // class stack
// // {
// // public:
// //     // properties
// //     int top;
// //     int *arr;
// //     int size;
// //     // behaviour
// //     stack(int size)
// //     {
// //         this->size = size;
// //         arr = new int[size];
// //         top = -1;
// //     }
// //     void push(int element)
// //     {
// //         if (top == size)
// //         {
// //             cout << "Sorry stack is full" << endl;
// //         }
// //         else
// //         {
// //             top++;
// //             arr[top] = element;
// //         }
// //     }
// //     void pop()
// //     {
// //         if (top == -1)
// //         {
// //             cout << "Stack is empty" << endl;
// //         }
// //         else
// //         {
// //             top--;
// //         }
// //     }
// //     int peek()
// //     {

// //         if (top == -1)
// //         {
// //             cout << "Stack is empty" << endl;
// //         }
// //         else
// //         {
// //             return arr[top];
// //         }
// //     }
// //     bool isempty()
// //     {
// //         if (top == -1)
// //         {
// //             return true;
// //         }
// //         else
// //         {
// //             return false;
// //         }
// //     }
// // };
// // int main()
// // {
// //     stack st(5);
// //     st.push(22);
// //     st.push(23);
// //     st.push(24);
// //     cout << "stack's top most element is " << st.peek() << endl;
// //     st.pop();
// //     cout << "stack's top most element is " << st.peek() << endl;
// //     cout<< st.isempty()<<endl;
// //     return 0;
// // }

// // Implementation of stack by using linked list 
// #include<iostream>
// using namespace std;
// class node {
// public:
// int data;
// node *next;
// node (int data){
//   this->data=data;
//   this->next=NULL;

// }
// };
// class stack{
//   public:
//  node *head;
//   stack(){
//     head=nullptr;
//   }
//   void push(int element){
//     node *newnode=new node(element);
//    newnode->next=head;
//     head=newnode;
//   }
//   void pop(){
//     if(head==nullptr){
//  cout<<" SORRY stack is empty"<<endl;
//     }
//     else{
//     node *temp=head;
//     head=head->next;
//     delete temp;
//   }
//   }
//   int peek(){
//    if(head==nullptr){
//  cout<<" SORRY stack is empty"<<endl;
//     }
//     else{
//       return head->data;
//     }
//   }
// };

// int main(){
//   stack s;
//   s.push(1);
//   s.push(2);
//    s.push(3);
//   s.push(4);
//    s.push(5);
//   s.push(6);
//   cout<<" Top most element in stack is "<<s.peek()<<endl;
//   return 0;

// }

