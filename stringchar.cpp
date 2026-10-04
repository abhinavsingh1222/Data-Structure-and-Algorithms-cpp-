// #include<iostream>
// using namespace std;
// int main(){
//   char name[20];
//   cout<<"Enter your name"<<endl;
//   cin>>name;
//   name[2]='\0';
//   cout<<name<<endl;
// }

// important!--- cin stop execution when you give it to space ,tab and enter

// Question-1 -- Find the length of string

// #include<iostream>
// using namespace std;
// int findlength( char name[]){
//   int count=0;
//   // int size;
//   for(int i=0; name[i]!='\0';i++){
//     count++;

//   }
//   return count;
  
// }
// int main(){
//     char name[19];
//     cin>>name;
//     int n;
//    cout<<"Length of this string will be  "<<findlength(name);

// }



// QUESTION 2-- REVERSE THE STRING
// #include<iostream>
// using namespace std;
// void reverse (char a[],int size){
//   int s=0;
//   int e=size-1;
//   while(s<=e){
//     swap(a[s],a[e]);
//     s++;
//     e--;
//   }
// }
// int findlength( char name[]){
//   int count=0;
//   // int size;
//   for(int i=0; name[i]!='\0';i++){
//     count++;

//   }
//   return count;
  
// }
// int main(){
//     char name[20];
//     cout<<"Enter your string: ";
//      cin>>name;
//      int len= findlength(name);
//      reverse(name ,len );
//      cout<<"REVERSE STRING WILL BE  "<<name<<endl;
//      return 0;
       

// }

// QUESTION-- CHECK THE STRING IS PALINDROME OR NOT

// palindrome== if the reverse of string is equal to the original string it will be palindrome

// #include<iostream>
// using namespace std;
// char tolowercase(char ch){
//     if(ch>='a'&& ch <='z'){
//         return ch;
//     }
//     else{
//        char temp=ch-'A'+'a';  it will convert uppercase to lowercase
//        return temp;
//     }
// }
// bool palindrome(char a[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//     if(tolowercase( a[s] )!=tolowercase( a[e] ){
//         return 0;
//     }
//     else{
//         s++;
//         e--;

//     }
//     }
//     return 1;
    
// }

// int findlength( char name[]){
//   int count=0;

//   for(int i=0; name[i]!='\0';i++){
//     count++;

//   }
//   return count;
  
// }
// int main(){
//  char name[20];
//  cin>>name;
//  int len = findlength(name);
//  cout<<"palindrome or not !"<< palindrome(name,len)<<endl;
//  cout<"Charcater will be"  << tolowercase('b')<<endl;
//  cout<<"Character will be"  << tolowercase('C')<<endl;
//   return 0;

// }

// QUESTION-REVERSE WORDS IN AN STRING 








// QUESTION- maximum occuring character in an array
// #include<iostream>
// using namespace std;
// char  mostoccured(string str){
//     int arr[26]={0}; // create an array of length 26
//  for(int i=0;i<str.length();i++){
//     char ch= str[i]; assign the a ,b,c to index;
//     int number=0;
        //  number=ch-'a';
//     arr[number]++;
//  } 
// find maximum occuring charater.... 
//  int maxi=-1,ans=0;
//  for(int i=0;i<26;i++){
//     if(arr[i]>maxi){
//         ans=i;
//         maxi=arr[i];
//     }
//  } 
//  char finalAns='a'+ans;
//  return finalAns;
// }
// int main(){
//     string str;
//     cin>>str;
//   cout<<"most occured charcater is "<<mostoccured(str)<<endl;
// }

// FUNCTION used in string
// for finding length=strlen(string name);
// for comparing == strcmp(string 1,string 2)
// // #include<iostream>
// // #include<cstring>
// // using namespace std;
// // int main(){
// //     char name[29];
// //     cin>>name;
// //     int len=strlen(name);
// //     cout<<"length of string will be"<< len <<endl;
// //     return 0;
// // }

// #include<iostream>
// #include<cstring>
// string inserting(const string& str){
//     string temp=" ";
//     for(int i=0;i<str.length();i++ ){
//         if (str[i]==' '){
//          temp.push_back('@');
//          temp.push_back('4');
//          temp.push_back('0');
//         }
//         else{
//             temp.push_back(str[i]);
//         }
//     }
//       return temp;
// }
// using namespace std;
// int main(){
//     string  name;
//     getline(cin,name);// reads a line of input including spaces
//     inserting(name);
    
//     return 0;

// }

// conversion of string into a char array 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 string s="abc";
 char ca[s.length()];
 strcpy(ca,s.c_str());
 for(int i=0;i<s.length();i++){
        cout<< ca[i]<<" ";
 }
 cout<<endl;

return 0;
}

