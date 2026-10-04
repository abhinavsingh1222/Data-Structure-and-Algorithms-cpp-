// linked list : A linked list is a linear data structure and it is made by the collection of nodes and a nodes have data and address of next node...
// !! -It is a dynamic data structure we can grow and shrink during run time ..

// Advanatage : no memory wastage is in linked list 
                // insertion and deletion is easy in linked list because no shifting is needed 
                // no continuous storage is needed

                   
                //  types of linked list 

// 1. Singly Linked List 
// 2. Doubly Linked List 
// 3. Circular Linked List  
// 4. circular Doubly linked List




// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node *next;
//     node(int data){ // constructor 
//         this->data=data;
//         this->next=nullptr;
//     }
// };
// // void Insertathead(node *&head,int data){ /// insertion at head
// //     node*temp=new node(data);  // creation of new node.
// //     temp->next=head;
// //     head=temp;

// // }
// insertionAttale(node *&tale,int data){
//     node *temp=new node(data);
//     tale->next=temp;
//     tale=temp;



// }
// void print(node *&head){
//     node *temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<< " ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     node *node1=new node(10);
//     node *head=node1;
//     node *tale=node1;
//     print(head);
//     insertionAttale(tale,12);
//     print(head);
//     insertionAttale(tale,13);
//    print (head);
//     return 0;

// }



// QUESTION - Insertion in linked list at head;
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node(int data){
//         this->data=data;
//         this->next=nullptr;
//     }
// };
//     void InsertionAthead(node *&head,int data){
//         node *temp=new node(data);
//         temp->next=head;
//         // head->next=nullptr;
//         head=temp;
//     }
    
//     void print(node *&head){
//         node *p=head;
       
//         while(p!=nullptr){
//             cout<< p->data << " ";
//             p=p->next;
//         }

//     }
// int main(){
//     node *node1=new node(5);
// //     node *head=node1;
  
// //     print(head);
// //     InsertionAthead(head,6);
// //     InsertionAthead(head,7);
// //     InsertionAthead(head,8);
// //     print(head);
// //     return 0;
// // }


// // // Question-2: Insertion of a node at tale in a linked list;;;
// #include<iostream>
// #include<map>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node *next=nullptr;
//     node (int data ){
//         this->data=data;
//         this->next=nullptr;

//     }

// };
//  void InsertionAttale(node *&tale,int data){
//     node *temp=new node(data);
//     tale->next=temp;
//     tale=temp;
    
// }
// void print(node *&head){
//     node *p=head;
//     while(p!=nullptr){
//         cout<<p->data<< " ";
//         p=p->next;
//     }
//     cout<<endl;

// }
// bool detectloop (node *head){
//     if (head=nullptr){
//         return false ;
//     }
//     map<node*,bool>visited;
//     node *temp=head;
//     while(temp!=nullptr){
//         if (visited[temp]==true){
//             return true;
//         }
//         visited[temp]=true;
//         temp=temp->next;
//     }
//     return false;

// }
// int main(){
//     node *node1=new node(5);
//     node *head=node1;
//     node*tale =node1;
//     print (head);
//     InsertionAttale(tale,6);
// InsertionAttale(tale,7);
// InsertionAttale(tale,8);
// InsertionAttale(tale,9);
// InsertionAttale(tale,10);
// InsertionAttale(tale,11);
// tale->next=head->next->next;
// print(head);
// bool ispresent= detectloop(head);
// cout<<ispresent<<endl;
//     return 0;
// }


// // QUESTION -3 :Insertion at middle or any location 

// // #include<iostream>
// // using namespace std;
// // class node{
// //     public:
// //     int data;
// //     node *next;
// //     node(int data){
// //         this->data=data;
// //         this->next=nullptr;

// //     }

// // };
// //   void InsertionAttale(node *&tale,int data){
// //     node *temp=new node(data);
// //     tale->next=temp;
// //     tale=temp;
    
// // }
// // void InsertionAtposition(node *& head,int position,int data){

// //   node *temp=head;
// //   int cnt=1;
// //   while(cnt<position){
// //     temp=temp->next;
// //     cnt++;
// //   }
// //   node *nodetoinsert=new node(data);
// //   nodetoinsert->next=temp->next;
// //   temp->next=nodetoinsert;
// // }
// // void print(node *&head){
// //     node *p=head;
// //     while(p!=nullptr){
// //         cout<<p->data<< " ";
// //         p=p->next;
// //     }
// //     cout<<endl;

// // }
// // int main(){
// // //     node *node1=new node(6);
// // //     node *head=node1;
// // //     node *tale =node1;
// // //     InsertionAttale(tale,7);
// // // InsertionAttale(tale,8);
// // // InsertionAttale(tale,9);
// // // InsertionAttale(tale,10);
// // // InsertionAttale(tale,11);
 
// // //     print(head);
// // //     InsertionAtposition(head,3,22);
// // //     print (head);
// // //     return 0;

// // // }


// // // DELETION IN LINKED LIST 


// // #include<iostream>
// // using namespace std;
// // class node{
// //     public :
// //     int data ;
// //     node *next;
// //     node(int data){
// //         this->data=data;
// //         this->next=nullptr;

// //     }
// // };
// //   void InsertionAttale(node *&tale,int data){
// //     node *temp=new node(data);
// //     tale->next=temp;
// //     tale=temp;
    
// // }
// // void print(node *&head){
// //     node *p=head;
// //     while(p!=nullptr){
// //         cout<<p->data<< " ";
// //         p=p->next;
// //     }
// //     cout<<endl;

// // }
// // void deletion(int position,node *&head){
// //     node* R=head;
// //     if (position==1){ // deleting first node
// //     head=head->next;
// //     R->next=nullptr;
// //     delete R;

// //     }
// //     else{// deleting any middle node or last node
// //        node *current=head;
// //        node *prev=nullptr;
// //        int cnt=1;
// //        while(cnt<position){
// //         prev=current;
// //         current=current->next;
// //         cnt++;
// //        }
// //        prev->next=current->next;
// //        current->next=nullptr;
// //        delete current ;

// //     }
// // }


// int main(){

//     node *node1=new node(6);
//     node *head=node1;
//     node *tale=node1;
//    InsertionAttale(tale,7);
// InsertionAttale(tale,8);
// InsertionAttale(tale,9);
// InsertionAttale(tale,10);
// InsertionAttale(tale,11);
// print(head);
// deletion(1,head);
// print (head);
// deletion(3,head);
// print(head);

// // deletion(5,head);
// // print(head);
// deletion(4,head);
// print(head);
//  return 0;
// }
// 
// 





