
// // // // // // // // // //  BINARY TREE
// // // // // // // // // // It is non linear data structure .it is collection of multiple node , in which a node have only less than or equal two child only

// // // // // // // // // // CREATION OF BINARY TREE

// // // // // // // // #include<iostream>
// // // // // // // // #include<queue>
// // // // // // // // using namespace std;
// // // // // // // // class node{
// // // // // // // //     public:
// // // // // // // //     int data;
// // // // // // // //     node *left;
// // // // // // // //     node *right;
// // // // // // // //     node (int data){
// // // // // // // //         this->data=data;
// // // // // // // //         this->left=NULL;
// // // // // // // //         this->right=NULL;
// // // // // // // //     }
// // // // // // // // };

// // // // // // // // int main(){
// // // // // // // //     int x;
// // // // // // // //     int first;
// // // // // // // //     int second;
// // // // // // // //     cout<<"Enter the root node "<<endl;
// // // // // // // //     cin>>x;
// // // // // // // //     node *root=new node (x);
// // // // // // // //     queue<node *> q;
// // // // // // // //     q.push(root);
// // // // // // // //     while(!q.empty()){
// // // // // // // //         node *temp=q.front();
// // // // // // // //         q.pop();
// // // // // // // //         cout<<"Enter the left value of :"<<temp->data<<endl;
// // // // // // // //         cin>>first;//  creation of left node
// // // // // // // //         if(first!=-1){
// // // // // // // //             temp->left=new node(first);
// // // // // // // //             q.push(temp->left);
// // // // // // // //         }
// // // // // // // //         cout<<"Enter the right value of "<<temp->data<<endl;
// // // // // // // //         cin>>second;
// // // // // // // //         if(second!=-1){
// // // // // // // //             temp->right=new node(second);
// // // // // // // //             q.push(temp->right);
// // // // // // // //         }

// // // // // // // //     }

// // // // // // // // }

// // // // // // // // CREARTION OF BINARY TREE WITH DIFFERENT APPROACH(RECURSION )
// // // It has time complexity=o(n)because every node take o(1) time in creating so if there will be n node so it will be o(n)
// // // It has space complexity =o(h) where h=height of tree because it uses stack and height of stack will be the space complexity of it.and it in worst case it will be o(n) when it will be grow in one side only

// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:
// // //     int data;
// // //     node *left=NULL;
// // //     node *right=NULL;
// // //     node (int data){
// // //         this->data=data;
// // //         this->left=NULL;
// // //         this->right=NULL;
// // //     }
// // // };
// // // node *Binarytree(){ // creation of binary tree
// // //     int x;
// // //     cin>>x;
// // //     if(x==-1){
// // //        return NULL;
// // //     }
// // //     node *temp=new node(x);
// // //     cout<<"Enter the left side of : "<<temp->data<<endl;
// // //     temp->left=Binarytree();//left side banao
// // //     cout<<"Enter the right side of : "<<temp->data<<endl;
// // //     temp->right=Binarytree(); // right side banao
// // //     return temp;
// // // }
// // // // // // // // void preorder(node *root){ // traversal with the help of preorder
// // // // // // // //     if (root==NULL){
// // // // // // // //         return ;
// // // // // // // //     }
// // // // // // // //     cout<<root->data<<" ";
// // // // // // // //     preorder(root->left);
// // // // // // // //     preorder(root->right);
// // // // // // // // }
// // // // // // // // void Inorder(node *root){// traversal using inorder traversal
// // // // // // // //     if(root=NULL){
// // // // // // // //         return ;
// // // // // // // //     }
// // // // // // // //     Inorder(root->left);
// // // // // // // //     cout<<root->data<<" ";
// // // // // // // //     Inorder(root->right);

// // // // // // // // }
// // // // // // // // void postOrder(node *root){ // traversal using postorder
// // // // // // // //     if(root==NULL){
// // // // // // // //         return ;
// // // // // // // //     }
// // // // // // // //     postOrder(root->left);
// // // // // // // //     postOrder(root->right);
// // // // // // // //     cout<<root->data<<" ";
// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // // cout<<"Enter the root node "<<endl;
// // // // // // // // node *root;
// // // // // // // // root=Binarytree();
// // // // // // // // cout<<"Preorder traversing :"<<" ";
// // // // // // // // preorder(root);
// // // // // // // // cout<<"Inorder traversing :"<<" ";
// // // // // // // // Inorder(root);
// // // // // // // // cout<<"Postorder traversing :"<<" ";
// // // // // // // // postOrder(root);

// // // // // // // // return 0;
// // // // // // // // }

// // // // // // // //  INTERVIEW QUESTION ON BINARY TREE

// // // // // // // // Question 1= level order traversing
// // // // // // // // #include<iostream>
// // // // // // // // #include<queue>
// // // // // // // // #include<vector>
// // // // // // // // using namespace std;
// // // // // // // // class node{
// // // // // // // //     public:
// // // // // // // //     int data;
// // // // // // // //     node *left;
// // // // // // // //     node *right;
// // // // // // // //     node(int data){
// // // // // // // //         this->data=data;
// // // // // // // //         this->left =NULL;
// // // // // // // //         this->right=NULL;
// // // // // // // //     }
// // // // // // // // };
// // // // // // // // node *binarytree(){
// // // // // // // //     int x;
// // // // // // // //     cin>>x;
// // // // // // // //     if(x==-1){
// // // // // // // //         return nullptr ;

// // // // // // // //     }
// // // // // // // //     node *temp=new node(x);
// // // // // // // //     cout<<"Enter the left side of : "<<temp->data<<endl;
// // // // // // // //     temp->left=binarytree();
// // // // // // // //     cout<<"Enter the right side of : "<<temp->data<<endl;
// // // // // // // //     temp->right=binarytree();
// // // // // // // //     return temp;
// // // // // // // // }
// // // // // // // // vector<int> levelordertraverse(node *root){// traverse the nodes level wise
// // // // // // // //     queue<node *> q;
// // // // // // // //     vector<int> ans;
// // // // // // // //     q.push(root);
// // // // // // // //     node *temp;
// // // // // // // //     while(!q.empty()){
// // // // // // // //         temp=q.front();
// // // // // // // //         q.pop();
// // // // // // // //         ans.push_back(temp->data);
// // // // // // // //         if(temp->left){ //  agar left hai toh queue me dalo
// // // // // // // //             q.push(temp->left);
// // // // // // // //         }
// // // // // // // //         if(temp->right){// agar right hai toh queue me dalo
// // // // // // // //             q.push(temp->right);
// // // // // // // //         }

// // // // // // // //     }
// // // // // // // //     return ans;
// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // // cout<<"enter the root node of tree "<<endl;
// // // // // // // // node *root;
// // // // // // // // root=binarytree();
// // // // // // // // levelordertraverse(root);
// // // // // // // // return 0;
// // // // // // // // }

// // // // // // // // QUESTION 3=APPROACH TO FIND THE SIZE OF BINARY TREE

// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // class node {
// // // // // // // //     public:
// // // // // // // //     int data;
// // // // // // // //     node *left;
// // // // // // // //     node *right;
// // // // // // // //     node (int data){
// // // // // // // //         this->data=data;
// // // // // // // //         this->left=NULL;
// // // // // // // //         this->right=NULL;
// // // // // // // //     }
// // // // // // // // };
// // // // // // // // node *binarytree(){
// // // // // // // //     int x;
// // // // // // // //     cin>>x;
// // // // // // // //     if(x==-1){
// // // // // // // //         return nullptr;
// // // // // // // //     }
// // // // // // // //     node *temp=new node (x);
// // // // // // // //     cout<<"Enter the left node of  : "<<temp->data<<endl;
// // // // // // // //     temp->left=binarytree();
// // // // // // // //     cout<<"Enter the right node of  : "<<temp->data<<endl;
// // // // // // // //     temp->right=binarytree();
// // // // // // // //     return temp;
// // // // // // // // }
// // // // // // // // void size(node *root,int &count){ // approach to find the size
// // // // // // // //     if(root==nullptr){
// // // // // // // //         return ;
// // // // // // // //     }
// // // // // // // //     count++;
// // // // // // // //     size(root->left,count);
// // // // // // // //     size(root->right,count);

// // // // // // // // }
// // // // // // // // int totalsize(node *root){
// // // // // // // //     int count=0;
// // // // // // // //     size(root,count);
// // // // // // // //     cout << "Total size: " << count << endl;
// // // // // // // // }

// // // // // // // // int size(node *root){// another approach to find the size
// // // // // // // //     if(root==nullptr){
// // // // // // // //         return 0;
// // // // // // // //     }
// // // // // // // //     return (1+size(root->left)+size(root->right));
// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // //     int count=0;
// // // // // // // //     node *root;
// // // // // // // //     cout<<"Enter the value of root node "<<endl;
// // // // // // // //     root=binarytree();
// // // // // // // //     size(root,count);
// // // // // // // //     totalsize(root);

// // // // // // // // }

// // // // // // // // QUESTION 3 =SUM OF ALL TREE NODES
// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // class node
// // // // // // // // {
// // // // // // // // public:
// // // // // // // //     int data;
// // // // // // // //     node *left = nullptr;
// // // // // // // //     node *right = nullptr;
// // // // // // // //     node(int data)
// // // // // // // //     {
// // // // // // // //         this->data = data;
// // // // // // // //         this->left = nullptr;
// // // // // // // //         this->right = nullptr;
// // // // // // // //     }
// // // // // // // // };
// // // // // // // // node *binarytree()
// // // // // // // // {
// // // // // // // //     int x;
// // // // // // // //     cin >> x;
// // // // // // // //     if (x == -1)
// // // // // // // //     {
// // // // // // // //         return nullptr;
// // // // // // // //     }
// // // // // // // //     node *temp = new node(x);
// // // // // // // //     cout << "Enter the left node of  : " << temp->data << endl;
// // // // // // // //     temp->left = binarytree();
// // // // // // // //     cout << "Enter the right node of :" << temp->data << endl;
// // // // // // // //     temp->right = binarytree();
// // // // // // // //     return temp;
// // // // // // // // }
// // // // // // // // int totalsum(node *root,int &sum){
// // // // // // // //     if(root==nullptr){
// // // // // // // //         return 0;
// // // // // // // //     }
// // // // // // // //     sum=sum+root->data;
// // // // // // // //     totalsum(root->left,sum);
// // // // // // // //     totalsum(root->right,sum);
// // // // // // // //     return sum;
    
// // // // // // // // }
// // // // // // // // secoond approach to find the sum
// // // // // // // // int maximum(node *root){
    
// // // // // // // //     if(root==nullptr){
// // // // // // // //         return 0;
// // // // // // // //     }
// // // // // // // //     return root->data+maximum(root->left)+maximum(root->right);
// // // // // // // // }


// // // // // // // // int main(){

// // // // // // // //     int sum=0;
// // // // // // // //     node *root;
// // // // // // // //     cout << "Enter your root node " << endl;
// // // // // // // //     root = binarytree();
// // // // // // // //    cout<<"Total sum will be : "<<maximum(root);

// // // // // // // //     return 0;
// // // // // // // // }


// // // // // // // // QUESTION =COUNT THE LEAF NODE IN A TREE AND ALSO NON LEAF NODES

// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // class node
// // // // // // {
// // // // // // public:
// // // // // //     int data;
// // // // // //     node *left = nullptr;
// // // // // //     node *right = nullptr;
// // // // // //     node(int data)
// // // // // //     {
// // // // // //         this->data = data;
// // // // // //         this->left = nullptr;
// // // // // //         this->right = nullptr;
// // // // // //     }
// // // // // // };
// // // // // // node *binarytree()
// // // // // // {
// // // // // //     int x;
// // // // // //     cin >> x;
// // // // // //     if (x == -1)
// // // // // //     {
// // // // // //         return nullptr;
// // // // // //     }
// // // // // //     node *temp = new node(x);
// // // // // //     cout << "Enter the left node of  : " << temp->data << endl;
// // // // // //     temp->left = binarytree();
// // // // // //     cout << "Enter the right node of :" << temp->data << endl;
// // // // // //     temp->right = binarytree();
// // // // // //     return temp;
// // // // // // }
// // // // // // // int countleaf(node *root,int &count)// to count the number of leafs in tree
// // // // // // // {
    
// // // // // // //     if(root==nullptr){
// // // // // // //         return 0;
// // // // // // //     }
// // // // // // //     if(root->left==NULL && root->right==NULL){
// // // // // // //         count++;
// // // // // // //         return 0;
// // // // // // //     }
// // // // // // //     countleaf(root->left,count);
// // // // // // //     countleaf(root->right,count);
// // // // // // //     return count;
// // // // // // // }
// // // // // // int countnonleaf(node *root, int &count) {
// // // // // //     if (root == nullptr) {
// // // // // //         return 0;
// // // // // //     }

// // // // // //     if (root->left != nullptr || root->right != nullptr) {
// // // // // //         count++;
// // // // // //     }

// // // // // //     countnonleaf(root->left, count);
// // // // // //     countnonleaf(root->right, count);

// // // // // //     return count;
// // // // // // }

// // // // // //    int main(){
// // // // // //     int count=0;
// // // // // //     node *root;
// // // // // //     cout << "Enter your root node " << endl;
// // // // // //     root = binarytree();
// // // // // //     // cout<<"Total leaf node will be :"<<countleaf(root,count)<<endl;
// // // // // //     countnonleaf(root,count);
// // // // // //     cout<<"Total non leaf node will be"<<count<<endl;
// // // // // // }

// // // // // // QUESTION =HEGHT OF BINARY TREE
// // // // // // int height(node *root){
// // // // // //     if(root==nullptr){
// // // // // //         return 0;
// // // // // //     }

// // // // // //  return (  1+max(height(root->left)),height(root->right))
// // // // // // }


// // // // // // QUESTION 4= LARGEST VALUE IN EACH LEVEL

// // // // // #include<iostream>
// // // // // #include<queue>
// // // // // #include<vector> 
// // // // // using namespace std;
// // // // // class node{
// // // // //     public :
// // // // //     int data;
// // // // //     node *left;
// // // // //     node *right;
// // // // //     node(int data){
// // // // //         this->data=data;
// // // // //         this->left=nullptr;
// // // // //         this->right=nullptr;
// // // // //     }
// // // // // };
// // // // // vector<int> largestlevel(node *root){
// // // // //     queue<node *> q;
// // // // //     vector<int> ans;
// // // // //     q.push(root);
// // // // //     ans.push_back(root->data);
// // // // //     while(!q.empty()){
// // // // //         node *temp=q.front();
// // // // //         q.pop();
// // // // //         if(temp->left){
// // // // //             q.push(temp->left);
// // // // //         }
// // // // //         if(temp->right){
// // // // //             q.push(temp->right);
// // // // //         }
// // // // //         if(temp->left->data > temp->right->data){
// // // // //           ans.push_back(temp->left->data);
            
// // // // //         }
// // // // //         else{
// // // // //             ans.push_back(temp->right->data);
    

// // // // //     }
    
// // // // // }
// // // // // return ans;
// // // // // }
// // // // // node *binarytree(){
// // // // //     int x;
// // // // //     cin>>x;
// // // // //     if(x==-1){
// // // // //         return nullptr;
// // // // //     }
// // // // //     node *temp=new node(x);
// // // // //     cout<<"Enter the left value of :"<<temp->data<<endl;
// // // // //     temp->left=binarytree();
// // // // //     cout<<"Enter the right value of :"<<temp->data<<endl;
// // // // //     temp->right=binarytree();
// // // // //     return temp;
// // // // // }
// // // // // int main(){
// // // // //     node *root;
// // // // //     cout<<"Enter the root value of tree : " << endl;
// // // // //     root=binarytree();
// // // // //     largestlevel(root);
// // // // //     return 0;

// // // // // }





// // // // problem = mirror tree
// // // #include<iostream>
// // // using namespace std;
// // // class node {
// // //     public:
// // //     int data ;
// // //     node *left;
// // //     node *right;
// // //     node(int data){
// // //         this->data=data;
// // //         this->left=nullptr;
// // //         this->right=nullptr;
// // //     }
// // // };
// // // node * binarytree(){
// // //     int x;
// // //     cin>>x;
// // //     if(x==-1){
// // //         return nullptr;
// // //     }
// // //     node *temp=new node(x);
// // //     cout<<"Enter the left side of :"<<temp->data<<endl;
// // //     temp->left=binarytree();
// // //     cout<<"Enter the right  side of :"<<temp->data<<endl;
// // //     temp->right=binarytree();
// // //     return temp;
// // // }
// // // node *mirrortree(node *root){
// // //     if(root->left==nullptr && root->right ==nullptr){
// // //         return nullptr;
// // //     }
// // //     node *temp=root;
// // //    swap(temp->left,temp->right);
// // //     mirrortree(root->left);
// // //     mirrortree(root->right);
// // //     return temp;
// // // }
// // // void preorder(node *root){
// // //     if(root==nullptr){
// // //         return ;
// // //     // }
// // //     cout<<root->data<<" ";
// // //     preorder(root->left);
// // //     preorder(root->right);

// // // }
// // // int main(){
// // //     node *root;
// // //     cout<<"Enter your root node for tree : "<<endl;
// // //     root=binarytree();
// // //     mirrortree(root);
// // //     preorder(root);
// // //     return 0;

// // // }

// // // check two trees are same or not


// // #include<iostream>
// // using namespace std;
// // class node{
// //     public:
// //     int data;
// //     node *left=NULL;
// //     node *right=NULL;
// //     node (int data){
// //         this->data=data;
// //         this->left=NULL;
// //         this->right=NULL;
// //     }
// // };
// // node *Binarytree(){ // creation of binary tree
// //     int x;
// //     cin>>x;
// //     if(x==-1){
// //        return NULL;
// //     }
// //     node *temp=new node(x);
// //     cout<<"Enter the left side of : "<<temp->data<<endl;
// //     temp->left=Binarytree();//left side banao
// //     cout<<"Enter the right side of : "<<temp->data<<endl;
// //     temp->right=Binarytree(); // right side banao
// //     return temp;
// // }
// // bool isidentical(node*root1,node*root2){
// //     if(root1 ==nullptr && root2==nullptr){
// //         return 1;
// //     }
// //     if((!root1 && root2) || (root1 &&  !root2)){
// //     return 0;
// // }
// // if(root1->data!=root2->data){
// //     return 0;
// // }

// //   return   isidentical(root1->left,root2->left) && isidentical(root1->right,root2->right);
    
    
// // }
// // int main(){
// //     // node *root1;
// //     // node*root2;
// //     cout<<"Enter the data of root node "<<endl;
// //     root1=Binarytree();
// //     node*root2;
// //     cout<<"Enter the root data of second tree"<<endl;
// //     root2=Binarytree();

// //  bool ans=   isidentical(root1,root2);
// //  if(ans){
// //     cout<<"Tree is same"<<endl;
// //  }
// //  else{
// //     cout<<" Tree is different"<<endl;
// //  }
// //     return 0;
// // }


// // create  a mirror image of tree

// #include<iostream>
// using namespace std;
// class node {
//     public:
//     int data ;
//     node *left;
//     node *right;
//     node(int data){
//         this->data=data;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };
// node * binarytree(){
//     int x;
//     cin>>x;
//     if(x==-1){
//         return nullptr;
//     }
//     node *temp=new node(x);
//     cout<<"Enter the left side of :"<<temp->data<<endl;
//     temp->left=binarytree();
//     cout<<"Enter the right  side of :"<<temp->data<<endl;
//     temp->right=binarytree();
//     return temp;
// }
// node *mirrortree(node *root){
//     if(root==nullptr){
//         return nullptr ;
//     }
//     node *temp=root;
//     swap(temp->left,temp->right);
//     mirrortree(root->left);
//     mirrortree(root->right);
//     return temp;
// }
// int main(){
//     node *root;
//     cout<<"Enter the root node : "<<endl;
//     root=binarytree();
//     mirrortree(root);
    

// }

// QUESTION= left view of binary tree
#include<iostream>
using namespace std;
int main(){
    
}







 



