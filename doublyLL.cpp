// // //  !!!!!!   DOUBLY LINKED LIST !!!!!!!!!
// // #include<iostream>
// // using namespace std;
// // class node{
// //     public:
// //     int data;
// //     node *prev;
// //     node * next;
// //     node(int data){
// //         this->data=data;
// //         this->next=nullptr;
// //         this->prev=nullptr;
// //     }
// // };
// // void print(node *&head){
// //     node *temp=head;
// //     while(temp!=nullptr){
// //         cout<<temp->data << " ";
// //         temp=temp->next;
// //     }
// //     cout<<endl;
     
// // }
// // int getlen(node *&head){
// //     int len=0;
// //     node *temp=head;
// //     while(temp!=nullptr){
// //          len++;
// //         temp=temp->next;
       
// //     }
// //     cout<<"Lenght of linked list is "<<len<<endl;
// // }
// // void InsertAthead(node *&head,int data){ /// INSERT A NODE AT HEAD
// //     node *temp= new node(data);
// //     temp->next=head;
// //     head->prev=temp;
// //     head=temp;

// // }
// // void InsertAttale(node *&tale,int data){ // INSERT A NODE AT TALE
// //     node *temp=new node( data );
// //     tale->next=temp;
// //     temp->prev=tale;
// //     tale=temp;


// // }
// // void InsertAtposition(node *&head,int position,int data){
    
// //     node *temp=head;
// //     int cnt=1;
// //     while(cnt<position){
// //         temp=temp->next;
// //         cnt++;

// //     }
// // node *nodeToinsert=new node(data);
// // nodeToinsert->next=temp->next;
// // temp->next->prev=nodeToinsert;
// // temp->next=nodeToinsert;
// // nodeToinsert->prev=temp;



// // }
// // int main(){

// // node *node1=new node(5);
// // node *head=node1;
// // node *tale=node1;

// // getlen(head);

// // InsertAttale(tale,6);
// // InsertAttale(tale,7);
// // InsertAttale(tale,8);
// // InsertAttale(tale,9);
// // InsertAttale(tale,10);
// // print (head);
// // InsertAtposition(head,3,22);
// // print( head);

// // return 0;



// // }


// // DELETION IN DOUBLY LINKED LIST /
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node *prev;
//     node(int data){
//         this->data=data;
//         this->prev=nullptr;
//         this->next=nullptr;

//     }
// };
// void InsertAttale(node *&tale, int data) {
//     node *temp = new node(data);
//     tale->next = temp;
//     temp->prev = tale;
//     tale = temp;  // Update the tale to the newly added node
// }

// void deletion(node *&head){ // delete first node 
//     if (head==nullptr){
//         cout<<"Linked is empty "<<endl;

//     }
//     else{
//         node *R=head;
//         R->next->prev=nullptr;
//         head=R->next;
//         R->next=nullptr;
//         delete R;

//     }
// }
// void deletelastnode(node *&head){// delete last node 
//     node *A=head;
//     while(A->next!=nullptr){
//         A=A->next;

//     }
//     node *E=head;
//     while(E->next!=A){
//         E=E->next;
//     }
//     E->next=nullptr;
//     A->prev=nullptr;
//     delete A;


// }
// void print(node *&head) {
//     node *temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void deletefromposition(node *&head,int position ){
//     node *R=head;
//     int cnt=1;
//     while(cnt<position){
//         R=R->next;
//         cnt++;
//     }
//     node *S=head;
//     while(S->next!=R){
//         S=S->next;

//     }
//     S->next=R->next;
//     R->next->prev=S;
//     delete R;

//     }


// int main(){
//     node *node1=new node(5);
//     node *head=node1;
//     node *tale=node1;
//     InsertAttale(tale,6);
//     InsertAttale(tale,7);
//     InsertAttale(tale,8);
//     // print(head);
//     // deletelastnode(head);
//     // print(head);
//     deletefromposition(head,3);
//     print(head);
//     return 0;
// }