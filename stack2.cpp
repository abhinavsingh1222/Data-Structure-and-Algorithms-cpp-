// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// stack<int> st;
// st.push(2);
// st.push(1);
// cout<<st.top()<<endl;
// cout<<st.empty()<<endl;
// return 0;
// }


// implementation of stack using array


// #include<iostream>
// using namespace std;
// class stack{
//     public:
//     int top;
//     int *arr;
//     int size;
//     stack(int size){
//         this->size=size;
//         arr=new int [size];
//         top=-1;
//     }
//     void push(int data){
//         if(top==size){
//             cout<<"Stack is overflow"<<endl;

//         }
//         top++;
//         arr[top]=data;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"There is nothing to pop"<<endl;
//         }
//         top--;
//     }
//     int peek(){
//         if(top==-1){
//             cout<<"There is nothing to pop"<<endl;
//         }
//         return arr[top];
//     }
//     bool isempty(){
//          if(top==-1){
//          return true;
//         }
//         return false;
//     }
// };
// int main(){
//     stack st(2);
//     st.push(4);
//     st.push(5);
//     st.push(6);
//     st.push(7);
//     st.pop();
//     cout<<st.peek()<<endl;
//     //   cout<<top<<endl;

// }




// implementation of stack using array 
// #include<iostream>
// using namespace std;
// class stack{
//     public:
//     int *arr;
//     int top;
//     int size;
//     stack(int size){
//         this->size=size;
//         top=-1;
//         arr=new int[size];
//     }
//     // push the value in stack
//     void push(int element){
//         if(top==size-1){
//             cout<<"Sorry the stack is full"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=element;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"Sorry stack is empty"<<endl;
//             return ;
//         }
//         top--;
//     }
//     bool isempty(){
//         if(top==-1){
//             return true;
//         }
//         return false;
//     }
//     int peek(){
//         if(top==-1){
//             cout<<"Stack is empty"<<endl;
//             return ;
//         }
//         return arr[top];
//     }

// };


// int main(){
// stack st(4);
// st.push(2);
// st.push(3);
// st.push(3);
// st.push(4);
// cout<<st.peek()<<endl;
// st.push(5);
// cout<<st.peek()<<endl;


// }



// implementation of stack using linked list
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *next;
//     node (int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// class stack{
//     public:
//     node *head;
//     stack(){
//         head=NULL;
//     }
//     void push(int element){
//         node *newnode=new node(element);
//         newnode->next=head;
//         head=newnode;
//     }
//     void pop(){
//         if(head==NULL){
//             return ;
//         }
//         node *temp=head;
//         head=head->next;
//         delete temp;
//     }
//     int peek(){
//         if(head==nullptr){
//            cout<<"stack is empty"<<endl;
//            return 0;
//         }
//         return head->data;
//     }
// };
// int main(){
// stack st;
// st.push(13);
// st.push(14);
// cout<<st.peek()<<endl;
// return 0;

// }


// reverse a string using stack

// #include<iostream>
// #include<stack>
// using namespace std;
// string reverse(string &str){
//     stack<char> st;
//     for(int i=0;i<str.length();i++){
//         st.push(str[i]);
//     }
//     string ans="";
//     while(!st.empty()){
//      ans=ans+st.top();
//      st.pop();
//     }
//     return ans;

// }
// int main(){
//     string str="abhinavekta";
//    cout<< reverse(str)<<endl;
// }


#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class stack{
    public:
    node *head;
    stack(){
        head=nullptr;
    }
    void push(int element){
        node *newnode=new node(element);
        newnode->next=head;
        head=newnode;

    }
    void pop(){
        node *temp=head;
        head=head->next;
        delete temp;

    }
    int peek(){
            if(head==nullptr){
           cout<<"stack is empty"<<endl;
           return 0;
        }
        return head->data;
    }
};
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data;
        this->next=NULL;
    }
};
class stack{
    public:
    node *head;
    stack(){
        head=nullptr;
    }
    void push(int element){
        node *newnode=new node(element);
        newnode->next=head;
        head=newnode;

    }
    void pop(){
        node *temp=head;
        head=head->next;
        delete temp;

    }
    int peek(){
            if(head==nullptr){
           cout<<"stack is empty"<<endl;
           return 0;
        }
        return head->data;
    }
};
stack deletemiddle(stack &st,int& size){
    int count=0;
    stack<int> upper_stack_element;
    while(count!=size/2){
        upper_stack_element.push(st.top);
        st.pop();
        count++;
    }
    st.pop();
    while(!upper_stack_element.empty()){
        st.push(upper_stack_element.top());
        upper_stack_element.pop();
    }
    return st;

}
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
int size=st.size();
cout<<st.peek()<<endl;
deletemiddle(st,size);
}