
// // CIRCULAR LINKED LIST

// // we do not want to create head in circular linked list we can use tale for access of first and last node

// #include<iostream>
// using namespace std;
// class node{
//  public:
//  int data;
//  node *next;

// node(int data)// constructor
// {
//     this->data=data;
//     this->next=nullptr;

// }
// };
// void insertnode(node *&tail ,int element ,int data){

//     if (tail==nullptr){/// linked list is empty

//      node *newnode =new node(data);
//      tail=newnode;
//      tail->next=tail;
//     }
//     else{// list is not empty and element is present in list

//     node *curr=tail;
//     while(curr->data !=element){
//         curr=curr->next;
//     }
//     node *temp=new node(data);
//     temp->next=curr->next;
//     curr->next=temp;

//     }

// }
// void print(node*&tail){

// node*temp=tail;
// do{
//     cout<<temp->data<< " ";
//     temp=temp->next;

// }while(temp!=tail);
// cout<<endl;

// }

// int main(){
// node* tail=nullptr;
// insertnode(tail,3,4);
// print(tail);
// insertnode(tail,4,5);
// print(tail);
// return 0;

// }

// // Deletion in circular linked list
// // #include<iostream>
// // using namespace std;
// // class node{
// //  public:
// //  int data;
// //  node *next;
// //  node(int data){ // constructor
// //     this->data=data;
// //     this->next=nullptr;

// //  }
// // };
// // void insertnode(node *&tail ,int element ,int data){

// //     if (tail==nullptr){/// linked list is empty

// //      node *newnode =new node(data);
// //      tail=newnode;
// //      tail->next=tail;
// //     }
// //     else{// list is not empty and element is present in list

// //     node *curr=tail;
// //     while(curr->data !=element){
// //         curr=curr->next;
// //     }
// //     node *temp=new node(data);
// //     temp->next=curr->next;
// //     curr->next=temp;

// //     }

// // }
// // void print(node*&tail){

// // node*temp=tail;
// // do{
// //     cout<<temp->data<< " ";
// //     temp=temp->next;

// // }while(temp!=tail);
// // cout<<endl;

// // }

// // void deletion(node *&tail ,int value){
// //     if(tail==nullptr){ // for a empty list
// //         cout<<"List is empty,please check it"<<endl;

// //     }
// //     else{ // when the list is not empty

// //     node *prev=tail;
// //     node *curr=prev->next;
// //     while(curr->data != value)
// //     prev=curr;

// //     curr=curr->next;

// //     }
// //     node *curr;
// //     node *prev;
// //    prev ->next= curr ->next;

// //     curr->next=nullptr;
// //     delete curr;

// // }

// // int  main(){
// //   node* tail=nullptr;
// // insertnode(tail,3,4);
// // // print(tail);
// // insertnode(tail,4,5);
// // // print(tail);
// // insertnode(tail,5,6);
// // insertnode(tail,6,7);
// // insertnode(tail,7,8);
// // print(tail);
// // deletion(tail,4);
// // print(tail);
// // return 0;

// // }