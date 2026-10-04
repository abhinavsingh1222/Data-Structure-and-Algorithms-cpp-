 // // // most important question on linked list


// // // REVERSE A LINKED LIST 
// // // #include<iostream>
// // // using namespace std;
// // // class node {
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node(int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //     }
// // // };
// // // void print(node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;

// // // }
// // // void insert(node *&tail,int data){

// // //     node *temp=new node(data);
// // //     tail->next=temp;
// // //     tail=temp;
// // // }
// // // node * reverseLinkedList(node*head){
// // //    if(head==nullptr || head->next==nullptr){
// // //     return head;
// // //    }
    
// // //     node *prev=nullptr;
// // //     node *curr=head;
// // //      node *forward=nullptr;
// // //     while(curr!=nullptr){
// // //        forward=curr->next;
// // //         curr->next=prev;
// // //         prev=curr;
// // //         curr=forward;
// // //     }
// // //     return prev;

// // // }

// // // int main(){
// // //     node *node1=new node(3);
// // //     node*head=node1;
// // //     node *tail=node1;
// // //     insert(tail,4);
// // //     insert(tail,5);
// // //     insert(tail,6);
// // //     insert(tail,7);
// // //     print(head);
// // //    head= reverseLinkedList(head);
// // //     print(head);
// // //     return 0;

// // // }


// // //    !!! MIDDLE OF LINKED LIST 
// // // #include<iostream>
// // // using namespace std;
// // // class node {
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node(int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //     }
// // // };
// // // void print(node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;

// // // }
// // // void insert(node *&tail,int data){

// // //     node *temp=new node(data);
// // //     tail->next=temp;
// // //     tail=temp;
// // // }
// // // int getlenght(node *head){
// // //     int len=0;
// // //     while(head!=nullptr){
// // //         len++;
// // //         head=head->next;
// // //     }
// // //     return len;
// // // }
// // // node *findMiddle(node *head){
// // //     int len=getlenght(head);
// // //     int ans= (len/2);
// // //     node *temp=head;
// // //     int cnt=0;

// // //     while(cnt<ans){
// // //         temp=temp->next;
// // //         cnt++;
// // //     }
// // // return temp;

// // // }
// // // int main(){
// // //     node *node1=new node(1);
// // //     node*head=node1;
// // //     node *tail=node1;
// // //     insert(tail,2);
// // //     insert(tail,3);
// // //     insert(tail,4);
// // //     insert(tail,5);
// // //     print(head);
// // //  node *middle=   findMiddle(head);
// // //  cout<<"Middle node is : "<<middle->data<<endl;
// // //  return 0;

// // // }



// // //        !!! REVERSE THE LINKED LIST [K GROUP]

// //  // by recursion 

// // // #include<iostream>
// // // using namespace std;
// // // class node {
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node (int data){
// // //         this ->data=data;
// // //         this->next=nullptr;

// // //     }
// // // };
// // // void print(node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;

// // //     }
// // //     cout<<endl;
// // // }
// // // void insertatTail(node *&tail ,int data){
// // //     node *temp=new node(data);
// // //     tail->next=temp;
// // //     tail=temp;
// // // }
// // // node *Kreverse(node *head,int k){
// // //     if (head==nullptr){
// // //         return nullptr;
// // //     }
// // //      node *prev=nullptr;// revrese first k group
// // //      node *curr=head;
// // //      node *next=nullptr;
// // //      int cnt=0;
// // //      while(curr!=nullptr && cnt<k){
// // //         next=curr->next;
// // //         curr->next=prev;
// // //         prev=curr;
// // //         curr=next;
// // //         cnt++;
// // //      }

// // //      //
// // //      if (next!=nullptr){ // recursion
// // //         head->next=Kreverse(next,k);
// // //      }
// // //      return prev;
// // // }

// // // int main(){
// // //     node *node1=new node(5);
// // //     node *head =node1;
// // //     node*tail=node1;
    
// // //     insertatTail(tail,7);
// // //     insertatTail(tail,3);
// // //     insertatTail(tail,8);
// // //     print(head);

// // //    head= Kreverse(head,2);

// // //     print(head);
// // //     return 0;


// // // }



// // // write a function to check given linked list is  circular or not 
// // // bool iscircular (node *&head){
// // //     if (head==nullptr){
// // //         cout<<"Empty linked list "<<endl;
// // //     }
// // //     else{
// // //         node *p=head;
// // //         while(p!=nullptr){
// // //             if (p->next==head){
// // //                 cout<<"It is circular linked list"<<endl;
// // //                 return true;
// // //             }
// // //             p=p->next;
// // //             else{
// // //                 cout<" It is circular linked list"<<endl;
// // //             }
// // //         }

// // //     }
// // // }


// // // DETECT AND REMOVE A LOOP IN LINKED LIST 
// // // Assumption of qstn asked on this topic is :
// // // 1. Detect cycle in LL.
// // // 2. Remove cycle from LL
// // // 3. beginng/start node of loop in LL 



// // //  1 DETECT LOOP IS PRESENT OR NOT IN LINKED LIST 


// // // #include<iostream>
// // // #include<map>

// // // using namespace std;
// // // class node {
// // //     public:
// // //     int data;
// // //     node *next;
// // //     node(int data){
// // //         this->data=data;
// // //         this->next=nullptr;
// // //     }
// // // };
// // // void print(node *&head){ // for printing linked list
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // // }
// // // cout<<endl;
// // // }
// // // void insertTail(node *&tail,int data){
// // //     node *temp=new node(data);
// // //     tail->next=temp;
// // //     tail=temp;
// // // }
// // // // bool detectloop(node *&head){
// // // //     if(head==nullptr){
// // // //         return false;
// // // //     }
// // // //     map<node *,bool>visited ;
// // // //     node* temp = head;
// // // //     while(temp!=nullptr){
// // // //         if(visited[temp]==true){
// // // //             return true;
// // // //         }
// // // //         visited[temp]=true;
// // // //         temp=temp->next;
// // // //     }
// // // //     return false;
  
// // // // }
// // // node * floydDetectloop(node *&head){ // floyd  cycle detection algorithms
// // //      if (head==nullptr){
// // //         return nullptr;
// // //      }
// // //      node*slow=head;
// // //      node *fast=head;
// // //      while(slow!=nullptr && fast!=nullptr){
// // //         fast=fast->next;
// // //         if(fast!=nullptr){
// // //             fast=fast->next;
// // //         }
// // //         slow=slow->next;
// // //         if(slow==fast){
// // //             cout<<"present at : "<<slow->data<<endl;
// // //             return slow;
// // //         }
// // //      }
// // //      return nullptr;
// // // }
// // // // GET THE STARTING NODE OF LOOP LINKED LIST 
// // // node * Getbegginning(node *&head){
// // //     if (head==nullptr){
// // //         return nullptr;

// // //     }
// // //     node *intersection= floydDetectloop(head);
// // //     node *slow=head;
// // //     while(slow!=intersection){
// // //         slow=slow->next;
// // //         intersection=intersection->next;

// // //     }
// // //     return slow;

// // // }
// // // //  remove the loop fron linked list 
// // // void removeloop(node*&head){
// // //      node *startingofloop=Getbegginning(head);
// // //      node *temp=startingofloop;
// // //      while(temp->next!=startingofloop){
// // //          temp=temp->next;
// // //      }
// // // temp->next=nullptr;
// // // }




// // // int main(){
// // // node *node1=new node(1);
// // // node *head=node1;
// // // node*tail=node1;
// // // insertTail(tail,2);
// // // insertTail(tail,3);
// // // insertTail(tail,4);
// // // insertTail(tail,5);
// // // insertTail(tail,6);
// // // insertTail(tail,7);
// // // print(head);
// // // tail->next=head->next->next;
// // // removeloop(head);
// // // if (floydDetectloop(head)!=nullptr){
// // //     cout<<"cycle is present"<<endl;
// // // }
// // // else{
// // //     cout<<"Cycle is not present"<<endl;
// // // }
// // // node *start=Getbegginning(head);

// // // cout<<" lOOP START AT :"<<start->data<<endl;

// // // return 0;

// // // }     



// // // REMOVE DUPLICATES from a linked list 
// // //1. from a sorted linked list 
// // //2. from a unsorted linked list 
   

// //    // Remove a duplicate from a sorted linked list 

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
// // //     void print(node *&head){
// // //         node *p=head;
// // //         while(p!=nullptr){
// // //             cout<<p->data<<" ";
// // //             p=p->next;
// // //         }
// // //         cout<<endl;
// // //     }
// // //     void insertTail(node *&tail,int data){
// // //         node *temp=new node(data);
// // //         tail->next=temp;
// // //         tail=temp;
// // //     }
// // //     void removeduplicacy(node *&head){
// // //         node *curr=head; 
// // //         node *forward=curr->next;
// // //         while(curr!=nullptr && curr->next!= nullptr){
// // //             if(curr->data==forward->data){

                
// // //                 curr->next=forward->next;
// // //                 delete forward;
                

// // //             }
// // //             curr=curr->next;
// // //             forward=forward->next;
// // //         }
// // //     }
// // // int main(){
// // //     node *node1=new node (1);
// // //     node *head=node1;
// // //     node *tail=node1;
// // //     insertTail(tail,2);
// // //     insertTail(tail,2);
// // //     insertTail(tail,3);
// // //     print(head);
// // //     removeduplicacy(head);
// // //     print(head);
// // //     return 0;
    

// // // }


// // // // Remove Duplicacy from a soretd linked list 
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
// // //     void print(node *&head){
// // //         node *p=head;
// // //         while(p!=nullptr){
// // //             cout<<p->data<<" ";
// // //             p=p->next;
// // //         }
// // //         cout<<endl;
// // //     }
// // //     void insertTail(node *&tail,int data){
// // //         node *temp=new node(data);
// // //         tail->next=temp;
// // //         tail=temp;
// // //     }
// // //     void removeduplicacy(node *&head){
// // //         node *curr=head;
// // //         while(curr!=nullptr){
// // //             node *temp=curr->next;
// // //             node *prev=curr;
// // //             while(temp!=nullptr){
// // //                 if (curr->data==temp->data){
// // //                     prev->next=temp->next;  
// // //                     delete temp;
// // //                     temp=prev->next;
                
// // //                 }
// // //                 else{
// // //                 prev=temp;
// // //                 temp=temp->next;
// // //                 }
// // //             }
        
// // //             curr=curr->next;

// // //         }
// // //     }
// // //     int main(){
// // //         node *node1=new node (4);
// // //         node *head=node1;
// // //         node *tail=node1;
// // //         insertTail(tail,2);
// // //         insertTail(tail,5);
// // //         insertTail(tail,4);
// // //         insertTail(tail,2);
// // //         insertTail(tail,2);
// // //         print(head);
// // //        removeduplicacy(head);
// // //         print(head);
// // //         return 0;

// // //     } 

// // // sorting in linked list 

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
// // // void insert(node *&tail,int data){
// // //     node *temp=new node (data);
// // //     tail->next=temp;
// // //     tail=temp;
// // // }
// // // void print(node *&head){
// // //     node *p=head;
// // //     while(p!=nullptr){
// // //         cout<<p->data<<" ";
// // //         p=p->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // void sort(node *&head){
// // //     node *p=head;
// // //     node *q=p->next;

// // //     while(p!=nullptr && q!=nullptr){
// // //         if (p->data>q->data){
// // //             int temp=p->data;
// // //             p->data=q->data;
// // //             q->data=temp;
// // //              }
// // //              p=p->next;
// // //              q= q->next;


// // //     }
// // // }
// // // node *sort( node *&head){
// // //     int zerocount=0;
// // //     int onecount=0;
// // //     int twocount=0;
// // //     node *temp=head;
// // //     while(temp!=nullptr){
// // //         if (temp->data==0){
// // //             zerocount++;
// // //         }
// // //         else if(temp->data==1){
// // //          onecount++;
// // //         }
// // //         else{
// // //         twocount++;
// // //         }
// // //         temp=temp->next;
// // //     }
// // //     temp=head;
// // //     while(temp!=nullptr){
// // //        if (zerocount!=0){
// // //         temp->data=0;
// // //         zerocount--;
// // //        } 
// // //        else if(onecount!=0){
// // //         temp->data=1;
// // //         onecount--;
// // //        }
// // //        else if(twocount!=0){
// // //         temp->data=2;
// // //         twocount--;
// // //        }
// // //        temp=temp->next;
// // //     }
// // //     return head;
// // // }

// // // int main(){
// // // node *node1=new node(1);
// // // node *head=node1;
// // // node *tail=node1;
// // // insert(tail,0);
// // // insert(tail,1);
// // // insert(tail,2);
// // // insert(tail,2);
// // // print(head);
// // // sort(head);
// // // print(head);
// // // return 0;

// // // }

// // // one more approach to sort the linked list /


// // // void merge(node *&head){
// // //     int zerocount=0;
// // //     int onecount=0;
// // //     int twocount=0;
// // //     node *temp=head;
// // //     while(temp!=nullptr){
// // //         if (temp->data==0){
// // //             zerocount++;
// // //         }
// // //         elseif(temp->data==1){
// // //          onecount++;
// // //         }
// // //         else{
// // //         twocount++;
// // //         }
// // //         temp=temp->next;
// // //     }
// // //     temp=head;
// // //     while(temp!=nullptr){
// // //        if (zerocount!=0){
// // //         temp->data=0;
// // //         zerocount--;
// // //        } 
// // //        elseif(onecount!=0){
// // //         temp->data=1;
// // //         onecount--;
// // //        }
// // //        elseif(twocount!=0){
// // //         temp->data=2;
// // //         twocount--;
// // //        }
// // //        temp=temp->next;
// // //     }
// // //     return head;
// // // }



// // // !! sort the linked list without changing the data 

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
// // void insert(node *&tail,int data){
// //     node *temp=new node (data);
// //     tail->next=temp;
// //     tail=temp;
// // }
// // void print(node *&head){
// //     node *p=head;
// //     while(p!=nullptr){
// //         cout<<p->data<<" ";
// //         p=p->next;
// //     }
// //     cout<<endl;
// // }
// // void insertat(node *&tail,node *curr){
// //     tail->next=curr;
// //     tail=curr;
// // }
// // // creat seperate three linked list
// // node *sortlist(node *&head){
// //     node *zerohead=new node(-1);
// //      node * zerotail=zerohead;
// //     node *onehead=new node(-1);
// //    node * onetail=onehead;
// //     node *twohead=new node (-1);
// //     node * twotail=twohead;

// // node *curr=head;
// // while(curr!=nullptr){
// //     int value=curr->data;
// //     if (value==0){
// //         insertat(zerotail,curr);
// //     }
// //     else if(value==1){
// //         insertat(zerotail,curr);
// //     }
// //     else if (value==2){
// //         insertat(twotail,curr);
// //     }
// //     curr=curr->next;
// // }
// //  // merge subthree linked list 
// //  if (onehead->next!=nullptr){
// //     zerotail->next=onehead->next;
// //  }
// //  else{
// //     zerotail->next=twohead->next;
// //  }
// //  onetail->next =twohead->next;
// //  twotail->next=nullptr;

// //  head=zerohead->next;
// //  delete zerohead;
// //  delete onehead;
// //  delete twohead;

// // }
// // int main(){
// // node *node1=new node(1);
// // node *head=node1;
// // node *tail=node1;
// // node *curr=head;
// // insert(tail,0);
// // insert(tail,1);
// // insert(tail,2);
// // insert(tail,2);
// // print(head);
// // insertat(tail,curr);
// // sortlist(head);
// // print(head);

// // return 0;

// // }


// // MERGE TWO SORTED LINKED LIST 
// // == merge two sorted linked list and final list is also sorted 
   
// void solve(node <int>* first,node<int>* second){
//     node *curr1=head1;
//     node *next1=curr->next;
//     node *curr2=second; 
//     node *next2=curr2->next;
//     while(next1!=nullptr && curr2!=null){
//         if  ( (curr2->data>=curr1->data) && (curr2->data<=next1->data)){
//             curr1->next=curr2;// add node in between
//             next2=curr2->next;
//             curr2->next=next1;
//             curr1=curr2; // update pointer
//             curr2=next2;
//         }
//         else{
//             // curr1 and next1 ko aage badhana padega
//             curr1=next1;
//             next1=next1->next;
//             if(next1==nullptr){
//                 curr1->next=curr2;
//                 return first;
//             }
//         }
//     }
//         return first;
//     }
// }


// node <int>*sorttwolist(node<int> *first,node<int>* second){
//     if (first==nullptr){
//         return second;
//     }
//     if (second==nullptr){
//         return first;
//     }
//     if (first->data <=second->data){
//         solve(first,second);
//     }
//     else{
//         solve(second,first);
//     }
// }

// check palindrome in a linked list 

//  Approach: 1
//  step 1 = create an array 
//  step2= copy the element of linked list in array 
//  step3= check palindrome by the help o array [approach]
// #include<iostream>
// #include<vector>
// using namespace std;
// class node {
//  public:
//  int data;
//  node *next; 
//  node (int data){
//     this->data=data;
//     this->next=nullptr;
//  }
// };
// void insert(node *&tail,int data){
//     node *temp=new node(data);
//     tail->next =temp;
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
// bool ispalindrome(node *&head){
//     vector<int> arr;
//     node *temp=head;
//     while(temp!=nullptr){
//         arr.push_back(temp->data);
//         temp=temp->next;
//     }
//     int n=arr.size();
//     int s=0;
//     int e=n-1;
//     while(s<=n){
//         if (arr[s]!=arr[e]){
//             return 0;

//         }
//         else{
//             s++;
//             e--;
//         }
//         return 1;
//     }

// }

// int main(){
//     node *node1 =new node(1);
//     node *head=node1;
//     node *tail=node1;
//     insert(tail,2);
//     insert(tail,1);
//     print(head);
//      bool palindrome=ispalindrome(head);
//      if (palindrome==1){
//         cout<<"yes it is palindrome"<<endl;
//      }
//      else{
// cout<<"no  it is not  palindrome"<<endl;
//      }
//     return 0;

// }
// second approach : to check palindrome
// step1= find middle node of linked list 
//  step2= reverse the linked after the middle node
//   step 3 =compare both halves... pl or not
// step 4= repeate 2 step 

// node *getmid(node *&head){
//     node *slow=head;
//     node *fast=head->next;
//     while(fast!=nullptr && fast->next!=nullptr){
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     return slow;

// }
// node *reverse(node *&head){
//     node *curr=head;
//     node *prev=nullptr;
//     node *next=nullptr;
//     while(curr!=nullptr){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     return prev;
// }

// bool ispalindrome(node*&head){
//     if (head==nullptr  || head->next==nullptr){
//         return true;
//     }
//     node *middle=getmid(head);// mid node 
//     // revrese the after mid node linked list
//     node *temp=middle->next;
//     middle->next=reverse(temp;)
//     // compare both halves
//     node *head1=head;
//     node *head2=middle->next;
//     while(head2!=nullptr){
//         if (head->data!=head->data){
//             return false;
//         }
//         head1=head->next;
//         head2=head->next;
//     }
//     // repeate step 2;
//       node *temp=middle->next;
//     middle->next=reverse(temp);
//     return true;

// }












































