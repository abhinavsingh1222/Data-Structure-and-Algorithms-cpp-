// // important questions based on stack 

// // question-1: reverse a string using stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string s="ekta";
//     stack<char> st;
//     for(int i=0;i<s.length(); i++){
//         char ch=s[i];
//          st.push(ch);
//     }
//     cout<<st.top()<<endl;
//     string ans="";
//     while(!st.empty()){
//       char c=st.top();
//       ans.push_back(c);
//       st.pop();

//     }
//     cout<<ans<<endl;
//     return 0;
    
// }

// Question2 = Delete the middle element 
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(9);
    st.push(2);
    st.push(4);

    cout << "Top element: " << st.top() << endl;

    // Get the number of elements in the stack (not size in bytes)
    int leng = st.size();  // Use st.size() to get the number of elements in the stack
    cout << "Number of elements in stack: " << leng << endl;
    int count=0;
   for(int i=0;i<leng<<i++){
    if(count==leng/2){
        
    }

   }

  

    return 0;
}

