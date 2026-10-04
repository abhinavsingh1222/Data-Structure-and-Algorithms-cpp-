//  SINGLY LINKED LIST 

// INSERTION IN SINGLY LINKED LIST 

// 1..Insertion at the head 
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
// //     node(int data){
// //         this->data=data;
// //         this->next=nullptr;
// //     }

// // };
// // void insertAthead(node *&head,int data){
// //     node *temp=new node (data);
// //     temp->next=head;
// //     head=temp;

// // }
// // void print(node *&head){
// //     node *P=head;
// //     while(P!=nullptr){
// //         cout<<P->data<<" ";
// //         P=P->next;
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     node *node1=new node(5);
// //     node *head=node1;
// //     insertAthead(head,10);
// //     print(head);
// //     return 0;



// // }

// // 2. Insert from the tail in singly linked list 
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node * next;
//     node(int data){
//         this->data=data;
//         this->next =nullptr;
//     }
// };
// void insertatTail(node *&head,int data){
//     node *temp=new node (data);
//     node *P=head;
//     while(P->next!=nullptr){
//       P=P->next;
      
//     }
//     P->next=temp;

   

// }

// 3.. insertion at any place in linked list 

// void insertAtanywhere(node *&head,int position,int data){
//     node *p=head;

//     int cnt=1;
//     while(cnt<position){
//         p=p->next;
//         cnt++;
//     }
//     node *temp=new node(data);
    
//     temp->next=p->next; 
//     p->next=temp; 
// }

// // deletion in singly linked list 
//  void deletion (node *&head){  //  from beginning 
//  node *p=head;
//  head=head->next;
// p->next=nullptr;
// delete p;

// }
// void deletionofAnynode(node *&head,int position){
//     if(head==nullptr){
//         cout<<"Linked list is empty"<<endl;
//     }
//     else{
//         node *p=head;
//         int cnt=1;
//         while(cnt<position){
//             p=p->next;
//             cnt++;
//         }
//         node *q=head;
//         while(q->next!=p){
//             q=q->next;
//         }
//         q->next=p->next;
//         p->next=nullptr;
//         delete p;
//     }
// }

// void print(node *&head){
//     node *P=head;
//     while(P!=nullptr){
//         cout<<P->data<<" ";
//         P=P->next;
//     }
//     cout<<endl;
// // }

// // int main(){
// //     node *node1=new node (5);
// //     node *head=node1;
// //     insertatTail(head,6);
// //     insertatTail(head,7);
// //     insertatTail(head,24);
// //     insertatTail(head,25);
// //     // insertatTail(head,26);
// //     print(head);
// //     // insertAtanywhere(head,3,30);
// //     // print(head);
// //     // deletion(head);
// //     // print(head);
// //     deletionofAnynode(head,2);
// //     print(head);
// //     return 0;

// // }

// //    Doubly Linked list 

//  /// insertion in doubly linked list 

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node *prev;
//     node(int data){
//         this->data=data;
//         this->next=nullptr;
//         this->prev=nullptr;

//     }
// };
// void insertathead(node *&head,int data){ /// insertion at head in doubly LL
//  node *temp=new node (data);
//  temp->prev=nullptr;
//  head->prev=temp;
//  temp->next=head;
//  head=temp;


// }
// void insertattail(node *&tail,int data) {   // insertion at tail
//   node *temp=new node (data);
//   tail->next=temp;
//   temp->prev=tail;
//   tail=temp;


// }
// void insertatanywhere(node *&head,int position,int data){
//     node *p=head;
//     int cnt=1;
//     while(cnt<position){
//         p=p->next;
//         cnt++;
//     }
//     node*q=head;
//     while(q->next!=p){
//         q=q->next;

//     }
//     node *temp=new node (data);
//     q->next=temp;
//     temp->prev=q;
//     temp->next=p;
//     p->prev=temp;


// }

// // DELETION IN DOUBLY LINKED LIST 
// void deleteathead(node*&head){
//     node *p=head;
//     head->next->prev=nullptr;
//     head=head->next;
//     delete p;
    
// }

// void deletionfromanywhere(node *&head,int position){ // delete the node from anywhere from the linked list 
//     node *p=head;
//     int cnt=1;
//     while(cnt<position){
//         p=p->next;
//         cnt++;
//     }
//     node*q=head;
//     while(q->next!=p){
//         q=q->next;

//     }
//     q->next=p->next;
//     p->next->prev=q;
//     p->next->prev=nullptr;
//     delete p;

// }



// void print(node *&head){
//     node *p=head;
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//         p=p->next;

//     }
//     cout<<endl;
// }

// int main(){
//     node *node1=new node(5);
//     node *head=node1;
//     node *tail=node1;
//     // insertathead(head,55);
//     // print(head);
//     insertattail(tail,6);
//      insertattail(tail,7);
//       insertattail(tail,8);
//        insertattail(tail,9);
//        print(head);
//        insertatanywhere(head,3,22);
//        print(head);
//        deletionfromanywhere(head,3);
//        print(head);
//        deleteathead(head);
//        print(head);
//     return 0;


// }

//    concept of circular  linked list 

// insertion of node in circular linked list 
#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node (int data){
        this->data=data;
        this->next=nullptr;

    }
};
    void print(node*head){
       
        node *p=head;
       do{
        cout<<p->data<<" ";
        p=p->next;
       
        } while(p!=head);
        cout<<endl ;
       
    }
    void insertathead(node *&head,int data){
        node *temp=new node(data);
        if(head==nullptr){
            temp->next=temp;
            // head->next=temp;
            head=temp;

        }
        else{
            node *p=head;
            while(p->next!=head){
                p=p->next;

            }
            temp->next=head;
            p->next=temp;
            head=temp;
        }
    
    }
    void insertattail(node *&head,node *&tail,int data){ // at the tail of linked list;;;;;
        node *temp=new node(data);
        tail->next=temp;
        temp->next=head;
        tail=temp;

    }
    void insertatany(node *&head,int value,int data){
        if(head==nullptr){
            node *newnode=new node(data);
            head=newnode;
            head->next=head;

        }
        else{
        node *p=head;
        while(p->data!=value){
            p=p->next;

        }
        node *temp=new node(data);
            temp->next=p->next;
            p->next=temp;
        
        }
    }

    // DELETION IN CIRCULAR LINKED LIST 
    void deletionathead(node*& head) {
        if (head==nullptr){
            cout<<"Empty"<<endl;
        }
      
        else{
            node *p=head;
            head=head->next;
            delete p;
        }
    }



    
      
    

int main(){
    node *node1=new node(4);
    node*head=node1;
    node *tail=node1;
    head->next=head;
  
    print(head);
    insertathead(head,5);
    print(head);
    insertattail(head,tail,77);
    print(head);
    insertatany(head,5,66);
    print(head);
    deletionathead(head);
    print(head);
    return 0;


}


 




