// // MOST IMPORTANT QUESTION ON LINKED LIST 

// //  ADD 2 NUMBERS
// //  -> ADD 2 NUMBER REPRESENTED BY LL 
// //  -> ADD 1 TO A NO. RPRESENTED BY LINKED LIST




// // #include<iostream>
// // using namespace std;
// // class node {
// //     public:
// //     int data;
// //     node *next;
// //     node (int data){
// //         this->data=data;
// //         this ->next=nullptr;
// //     }
// // };
// // void insert(node *&tail1,int data){
// //     node *temp=new node(data);
// //     tail1->next=temp;
// //     tail1=temp;
// // }
// // void print(node *&first){
// //     node *p=first;
// //     while(p!=nullptr){
// //         cout<<p->data<<" ";
// //         p=p->next;
// //             }
// //     cout<<endl;
// // }
// // void reverse(node *&first){
// //     node *curr=first;
// //     node *prev=nullptr;
// //     node *next=nullptr;
// //     while(curr!=nullptr){
// //         next=curr->next;
// //         curr->next=prev;
// //         prev=curr;
// //         curr=next;
// //     }
// //     return prev;
// // }
// // node *add(node *&first,node *&second ){
// //     int carry=0;
// //     node *ansHead=NULL;
// //     node *ansTail=NULL;
// //     while (first!=nullptr && second!= nullptr){
// //         int sum=carry+first->data+second->data;
// //         int digit=sum%10;
// //         node *temp=new node (digit );
// //         insert(ansHead,ansTail,digit);
// //         carry=sum/10;
// //     }
// //     while(first!=nullptr){
// //         int sum=carry+first->data
// //         int digit=sum%10;
// //           insert(ansHead,ansTail,digit);
// //         carry=sum/10;

// //     }
// //      while(second!=nullptr){
// //         int sum=carry+first->data
// //         int digit=sum%10;
// //           insert(ansHead,ansTail,digit);
// //         carry=sum/10;

// //     }
// //     while(carry!=0){
// //         int sum=carry;
// //            int digit=sum%10;
// //           insert(ansHead,ansTail,digit);
// //         carry=sum/10;
// //     }
// //     return ans;

// // }
// // node *Addtwolist(node *&first,node *&second){
// //     // STEP1= REVERSE BOTH LINKED LIST 
// //     first=reverse(first);
// //     second=reverse(second);
// //     // step2 = add both reverse linked list
// //     node *ans=add(first,second);
// //     // step3= reverse the ans linked list 
// //     ans=reverse(ans);
// //     return ans;
// // }

// // int main(){
// //     node *node1=new node(4);
// //     node *first=node1;
// //     node *tail1=node1;
// //     insert(tail1,5);
// //     print(first);
// //     node *node2=new node(3);
// //     node *second=node2;
// //     node *tail2=node2;
// //      first=second;
// //      tail1=tail2;
  
// //     insert(tail1,4);
// //     insert(tail1,5);
// //     print(first);
// //        first=node1;
// //      second=node2;
// //     cout<<first->data<<endl;
// //     cout<<second->data<<endl;
// //     Addtwolist(first,second);
// //     first=anshead;
// //     print(first);
// //     return 0;


// // }

// // merge sort in linked list 
// #include<iostream>
// using namespace std;
// class node {
//     public:
//     int data;
//     node *next;
//     node (int data){
//         this->data=data;
//         this->next=NULL;

//     }
// };
// void insert(node *&tail,int data){
//     node *temp=new node(data);
//     tail->next=temp;
//     tail=temp;
// }
// void print(node *&head){
//     node *p=head;
//     while(p!=nullptr){
//         cout<<p->data<<" ";
//         p=p->next;
//     }
//     cout<<endl;
// }
// node *findmid(node *&head){
//     node *slow=head;
//     node*fast=head->next;
//     while(fast!=nullptr && fast->next!=nullptr){
//         slow=slow->next;
//         fast=fast->next->next;
        
//     }
//     return slow;
// }
// node *merge(node *left,node *right){

// if(left==nullptr){
//     return right;
// }
// if(right==nullptr){
//     return left;
// }
//  node *ans=new node(-1);
//  node *temp=ans;
//  while(left!=nullptr && right!=nullptr){
//     if (left->data <right->data){
//         temp->next=left;
//         temp=left;
//         left=left->next;
//     }
//     else{
//         temp->next=right;
//         temp=right;
//         right=right->next;
//     }
   
//  }
// while(left!=nullptr){
//       temp->next=left;
//         temp=left;
//         left=left->next;
// }
// while(right!=NULL){
//       temp->next=right;
//         temp=right;
//         right=right->next;
// }
// ans=ans->next;
// return ans;
// }
// node *mergesort(node *&head){
//     // base case
//     if(head==nullptr || head->next==nullptr){
//         return head;
//     }
//     node *mid=findmid(head);
//     node *left=head;
//     node *right=mid->next;
//     mid->next=nullptr;
//     // recurive calls to sor both half
//     left=mergesort(left);
//     right=mergesort(right);
//     // merge both left and right half
//     node *result=merge(left,right);
//     return result;
// }

// int main(){
//     node *node1=new node(3);
//     node *head=node1;
//     node*tail=node1;
//     insert(tail,5);
//     insert(tail,1);
//     insert(tail,2);
//     insert(tail,9);
//     print(head);
//    head= mergesort(head);
  
//     print(head);
//     return 0;


// }



