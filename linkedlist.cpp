

// // concept of singly linked list 

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node(int data){// for a new node creation
//         this->data=data;
//         this->next=nullptr;
//     }

// };
// void insertiontale(node *&tale,int data){
//     node *temp=new node(data);
//     tale->next=temp;
//     tale=temp;
// }
// void print(node *&head){
//     node*p=head;
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//         p=p->next;
//     }
//     cout<<endl;
// }
// void deletion (node *&head,node *&tale){// to delete the last node 
//     if(head==nullptr){
//         cout<<"This linked list is empty"<<endl;
//     }
//     node *p=head;
//     while(p->next!=tale){
//         p=p->next;
//     }
//     p->next=nullptr;

// }
// void deletionfromanywhere(node *head,int element){
//     node *prev=nullptr;
//     node *curr=head;
//     while(curr->data!=element){
//         prev=curr;
//         curr=curr->next;
        
//     }
//     prev->next=curr->next;
//     delete curr;
// }
// int main(){
//     int d;
//     cin>>d;
//     node *first=new node(d);
//     node *head=first;
//     node*tale=first;
//     insertiontale(tale,6);
//     insertiontale(tale,7);
//     insertiontale(tale,8);
//     insertiontale(tale,9);
//     insertiontale(tale,10);
//     insertiontale(tale,11);
//     insertiontale(tale,12);
//     deletionfromanywhere(head,9);
//     print(head);
//     return 0;

// }


// concept of circular linked list 
#include<iostream>
using namespace std;
int main(){
    
}