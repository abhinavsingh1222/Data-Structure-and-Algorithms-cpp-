// // // // REVISION OF LINKED LIST 


// // // // concept of insertion at head and tale and also at any location

// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // // public:
// // // int data;
// // // node *next;
// // // node(int data){
// // //     this->data=data;
// // //     this->next=nullptr;
// // // }

// // // };
// // // void insertionathead(node *&head,int data){ // insertion at head
// // //     node *temp=new node(data);
// // //     temp->next=head;
// // //     head=temp;
// // // }
// // // void insertionattale(node *&tale,int data){ // insertion at tale
// // //     node *temp=new node(data);
// // //     tale->next=temp;
// // //     tale=temp;
// // // }

// // // void insertanywhere(node *&head,int data,int position){// insertion at anywwhere
// // //     node *temp=head;
// // //     int count=1;
// // //     while(count<position){
// // //         temp=temp->next;
// // //         count++;
// // //     }
// // //    node *nodetobeinsert=new node(9);
// // //    nodetobeinsert->next=temp->next;
// // //    temp->next=nodetobeinsert;
   
// // // }

// // // void print(node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // int main(){
// // //     node *node1=new node(5);// here new is used as a dynamic memory allocation
// // //     node *head=node1;
// // //     node *tale=node1;
// // //     // print(head);
// // //     insertionattale(tale,6);
// // //     insertionattale(tale,7);
// // //     insertionattale(tale,8);
// // //     print(head);
// // //     insertanywhere(head,9,3);

// // //      print(head);
// // //     return 0;
// // // }


// // // Deletion in singly linked list 

// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node (int data){
// // //         this->data=data;
// // //         this->next=nullptr;

// // //     }
// // // };
// // // void insertionattale(node *&tale,int data){ // insertion at tale
// // //     node *temp=new node(data);
// // //     tale->next=temp;
// // //     tale=temp;
// // // }
// // // void print(node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // void deletion(node *&head,int position){
// // //     node *R=head;
// // //     if(head==nullptr){
// // //         cout<<"LL is empty"<<endl;
// // //     }
// // //    if(position==1){// deletion of first node 
   
// // //     head=head->next;
// // //     R->next=nullptr;
// // //     delete R;
// // //    }
// // //    else{ // deleting any middle node or last node
// // //     node *curr=head;
// // //     node *prev=nullptr;
// // //     int cnt=1;
// // //     while(cnt<position){
// // //         prev=curr;
// // //         curr=curr->next;
// // //         cnt++;
// // //     }
// // //     prev->next=curr->next;
// // //     curr->next=nullptr;
// // //     delete curr;


// // //    }

// // // }
// // // int main(){
// // //     node *node1=new node(5);
// // //     node *head=node1;
// // //     node *tale=node1;
// // //   insertionattale(tale,6);
// // //   insertionattale(tale,7);
// // //   insertionattale(tale,8);
// // //   print(head);
// // //   deletion(head,3);
// // //   print(head);
// // //   return 0;
 
     
// // // }


// // // CONCEPT OF CIRCULAR LINKED LIST 
// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node(int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //     }
// // // };
// // // void insertion(node *&tale,int element,int data){ // we element to insert because we does not have knowledge about the head and tale due to its circularity

// // //     if(tale==nullptr){ // when linked list is empty

// // //       node* temp=new node(data);
      
// // //       tale=temp;  
// // //       temp->next=tale;
// // //     }
// // //     else{
// // //         node *curr=tale;
// // //         while(curr->data!=element){
// // //             curr=curr->next;
// // //         }
// // //         node *temp=new node (data);
// // //         temp->next=curr->next;
// // //         curr->next=temp;
// // //     }



// // // }

// // // void print(node *&tale){
// // //     node *temp=tale;
// // //     do{
// // //         cout<<temp->data<<" ";
// // //         temp=temp->next;
// // //     }
// // //     while(temp!=tale);
// // //     cout<<endl;
// // // }
// // // void deletion(node *&tale,int value){
// // //     if(tale==NULL){
// // //         cout<<"LL is empty "<<endl;
// // //     }
// // //     else{//list is not empty
// // //         node *prev=tale;
// // //         node *curr=prev->next;
// // //         while(curr->data!=value){
// // //             prev=curr;
// // //             curr=curr->next;
// // //         }
// // //         prev->next=curr->next;
// // //         curr->next=NULL;
// // //         delete curr;

// // //     }
// // // }
 
// // // int main(){
// // //   node *tale=nullptr;
// // //   insertion(tale,5,3);
// // //  print(tale);
// // // insertion(tale,3,4);
// // // insertion(tale,4,5);
// // // insertion(tale,5,6);
// // // print(tale);
// // // deletion(tale,5);
// // // print(tale);

// // // }



// // // MOST IMPORTANT QUESTION ON LINKED LIST 
// // //  REVRSE A LINKED LIST = isme ham har ek node ko pakad ke pichhe point kr rhe hai

// // #include<iostream>
// // using namespace std;
// // class node {
// //     public:
// //     int data;
// //     node *next;
// //     node(int data){
// //         this->data=data;
// //         this->next=nullptr;
// //     }
// // };
// // void insertionattale(node *&tale,int data){ // insertion at tale
// //     node *temp=new node(data);
// //     tale->next=temp;
// //     tale=temp;
// // }
// // void print(node *&head){
// //     node *p=head;
// //     while(p!=nullptr){
// //         cout<<p->data<<" ";
// //         p=p->next;
// //     }
// //     cout<<endl;
// // }
// // node * reverseLL(node *head){
// //     if(head==nullptr || head->next==nullptr){
// //         return head;
// //     }
// //     node *curr=head;
// //     node *prev=nullptr;
// //     node *forward=NULL;
// //     while(curr!=NULL){
// //         forward=curr->next;
// //         curr->next=prev;
// //         prev=curr;
// //         curr=forward;
// //     }
// //     return prev;

// // }
// // int main(){
// // node *node1=new node(3);
// // node *head=node1;
// // node *tale=node1;
// // insertionattale(tale,5);
// // insertionattale(tale,7);
// // insertionattale(tale,9);
// // print(head);

// // head=reverseLL(head);
// // print(head);
// // return 0;
// // }



// // 2  find the middle node of an linked list
// // == iske  liye lenght of ll nikalna pdega
// // #include<iostream>
// // using namespace std;
// // class node {
// //     public:
// //     int data;
// //     node *next;
// //     node(int data){
// //         this->data=data;
// //         this->next=nullptr;
// //     }
// // };
// // void insertionattale(node *&tale,int data){ // insertion at tale
// //     node *temp=new node(data);
// //     tale->next=temp;
// //     tale=temp;
// // }
// // void print(node *&head){
// //     node *p=head;
// //     while(p!=nullptr){
// //         cout<<p->data<<" ";
// //         p=p->next;
// //     }
// //     cout<<endl;
// // }
// // int getlenght(node *&head){
// //     node *p=head;
// //     int count=0;
// //     while(p!=nullptr){
// //         count++;
// //         p=p->next;
// //     }
// //     return count;
// // }
// // node *middlenode(node *&head){
// //     int len=getlenght(head);
// //     int ans=len/2;
// //     node *temp=head;
// //     int cnt=0;
// //     while(cnt<ans){
// //         temp=temp->next;
// //         cnt++;
// //     }
// //     return temp;
// // }
// // int main(){
// //     node *node1=new node(3);
// //     node *tale=node1;
// //     node *head=node1;
// //     insertionattale(tale,5);
// //     insertionattale(tale,7);
// //     insertionattale(tale,9);
// //     insertionattale(tale,10);
// //     print(head);
// //     node *middle=middlenode(head);
// //     cout<< " midle node's data will be"<<middle->data<<endl;
// //     return 0;


// // }


// // 3 == REVERSE THE LINKED LIST BY K group
// #include<iostream>
// using namespace std;
// class node {
//     public:
//     int data;
//     node *next;
//     node(int data){
//         this->data=data;
//         this->next=nullptr;
//     }
// };
// void insertionattale(node *&tale,int data){ // insertion at tale
//     node *temp=new node(data);
//     tale->next=temp;
//     tale=temp;
// }
// void print(node *&head){
//     node *p=head;
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//         p=p->next;
//     }
//     cout<<endl;
// }
// node *reverseKgroup(node *&head,int k){
//     node *prev=nullptr;
//     node *curr=head;
//     node *curr2=head;
//     node *frwrd=nullptr;
//     node *frwrd2=nullptr;
//     int cnt=0;
//     while(cnt<k){
//         curr2=curr2->next;
//         cnt++;
//     }
//     frwrd2=curr2;
//     while(curr!=curr2){
//         frwrd=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=frwrd;
//     }
//    head->next=frwrd2;
//     return prev;

// }
// int main(){
//     node *node1=new node(3);
//     node *tale=node1;
//     node *head=node1;
//     insertionattale(tale,5);
//     insertionattale(tale,7);
//     insertionattale(tale,9);
//     insertionattale(tale,10);
//     insertionattale(tale,11);
//     print(head);
//     head=reverseKgroup(head,3);
//     print(head);
//     return 0;
// }

// 1 ./ Detect cycle in linked list 
// #include<iostream>
// #include<map> 
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;

//     }
// };
// void print(node *&head){ // for printing linked list
//     node *p=head;
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//         p=p->next;
// }
// cout<<endl;
// }
// void insertTail(node *&tail,int data){
//     node *temp=new node(data);
//     tail->next=temp;
//     tail=temp;
// }
// bool detectloop(node *&head){
//     if(head==nullptr){
//         return false;
//     }
//     map<node *,bool> visited;
//     node *temp=head;
//     while(temp!=nullptr){
//         if(visited[temp]==true){
//             return true;
//         }
//         visited[temp]=true;
//         temp=temp->next;
//     }
//     return 0;

// }

// int main(){
//     node *node1=new node(5);
//     node *head=node1;
//     node *tail=node1;
//     insertTail(tail,6);
//     print(head);

// }


// SECOND APPROACH TO FIND THE LOOP FLOYDDETECTION METHOD
// bool floyddetectloop(node *head){
//     node *slow=head;
//     node *fast=head;
//     while(slow!=nullptr && fast!=nullptr){
//         fast=fast->next;
//         if(fast!=nullptr){
//             fast=fast->next;
//         }
//         slow=slow->next;
//         if(slow==fast){
//             cout<<"Present at "<<slow->data<<endl;
//             return slow;
//         }
//     }
//     return nullptr;
// }

