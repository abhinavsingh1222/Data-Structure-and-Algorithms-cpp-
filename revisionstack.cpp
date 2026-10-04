// creation of stack on stl = stack<int> s;(stack having name s)







// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack <int> s;
//     s.push(2); // push value in stack
//     s.push(3);
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     if(s.empty()){
//         cout<<"Stack is empty"<<endl;
//     }
//     else{
//         cout<<"hai kuch"<<endl;
//     }
//     return 0;

// }


// IMPLEMENTATION OF STACK WITH THE HELP OF ARRAY
// #include<iostream>
// using namespace std; 
// class stack{
//     public:
//     int top;
//     int *arr;
//     int size;
//     stack(int size){
//         this->size=size;
//         arr= new int [size]; // dynamically creation of array
//         top=-1;
//     }
//     void push(int element){
//         if(top==size){
//             cout<<"Stack is full"<<endl;
//         }
//         else{
//             top++;
//             arr[top]=element;
//         }


//     }
//     void pop(){
//         if(top >=0){
//             top--;
//         }
//         else{
//             cout<<"Stack is underflow" <<endl;
//         }

//     }
//     int peak(){
//         cout<<arr[top]<<endl;

//     }
//     bool isempty(){
//        if(top==-1){
//         return true;
//        }
//        return false;
//     }
// };
// int main(){
//     stack st(5);
//     st.push(22);
//     st.push(23);
//     st.push(24);
//     cout<<st.peak()<<endl;
//     return 0;

// }

// Question = 2 stack in one array = phla stack left to write then next vala right to left
// #include<iostream>
// using namespace std;
// class Twostack{
//     public:
//     int *arr;
//     int top1;
//     int top2;
//     int size;
//     Twostack(int s){
//         this->size=s;
//         top1=-1;
//         top2=s;
//         arr =new int[s];
//     }
//      void push1(int element){
//         if(top1==top2){
//             cout<<" Stack is empty"<<endl;
//         }
//         else{
//             top1++;
//             arr[top1]=element;
//         }
//      }
//      void push2(int element){
//         if(top-top>1){
//             top2--;
//             arr[top2]=element;
//         }
//         else{
//             cout<<"Stack is overflow"<<endl;
//         }

//      }
//      void pop1(){
//         if(top1==-1){
//             cout<<"Stack is empty"<<endl;
//         }
//         else{
//             top--;
//         }
//      }
//      void pop2(){
//         if()
//      }

// };
// int main(){
    
// }


// IMPORTANT INTERVIEW QUESTION OF STACK

// Question 1 = Reverse a string using stack

// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     stack <char> reverse;
//     for(int i=0; i<str.size();i++){
//         char ch=str[i];
//         reverse.push(ch);
//     }
//     string ans=" ";
//     while(!reverse.empty()){
//         char a=reverse.top();
//         ans.push_back(a);
//         reverse.pop();


//     }
//     cout<<"Reverse of this string is "<< ans<<endl;
//     return 0;

// }

// DELETE THE MIDDLE ELEMENT OF STACK 
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack <int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
 
//     int mid=s.size()/2;
//     stack<int> temp;
//     for(int i=0;i<mid;i++){
//    temp.push_back(s.top());
//    s.pop();
// }
// s.pop();// reach to delete the middle one 
// while(!temp.empty()){
//     s.push_back(temp.top());
//     temp.pop();
// }



// }



//  QUESTION =next smaller element 
// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int> nextsmallerelement( int *arr,int size){
//     vector<int> temp;
//     for(int i=0;i<4;i++){
//         for(int j=i+1;j<4;j++){
//             if(arr[j]<arr[i]){
//             temp.push_back(arr[j]);
//                 break;
//             }
//             else{
//                 temp.push_back(-1);
//                 break;   
//                    }
            
//         }


//     }
//     return temp;
// }
// int main(){
//    int arr[4]={2,1,4,3};
//   vector<int> result=  nextsmallerelement(arr,4);
//   for(int i=0;i<result.size();i++){
//     cout<<result[i];
//   }
//     return 0;

// }


// Largest Rectangular Area in Histogram 
// #include<iostream>
// using namespace std;
// int main(){
    
// }

// class solution{
//     public;
//     int largestrectangkeArea(vector<int> &heights){
//         vector<int> next(n);
//         next=nextsmallerelement(height,n);
//         vector<int> prev(n);
//         prev=prevsmallerElement(heights,n);
//         for(int i=0;i<n;i++){
//             int l=height[i];
//             int b=next[i]-prev[i]-1;
//             int newarea=l*b;
//             area=max(area,newarea);
//         }
//         return area;
//     }
// };

// famous and hard question on stack 
     
// getmin( ) in an stack in o(1)-t.c,o(1)-s.c 


#include<iostream>
using namespace std;
class stack{
    public:
    int top;
    int *arr;
    int size;
    stack(int size){
        this->size=size;
        arr=new int [size]// dynaamic array creation
        top=-1;

    }
    void push(int element){
        if(top==size){
            cout<<"Stack is full"<<endl;
        }
        else{
            top++;
            arr[top]=element;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            top--;
        }
    }
};
void getmin(int arr[]){
    for(int i)

}
int main(){
    stack <int> s;
    s.push(5);
    s.push(3);
    s.push(8);
    s.push(2);
    s.push(4);



}
