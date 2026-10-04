
// Reference variable- when we give different names to same memory  


// #include<iostream>
// using namespace std;
// void update2(int &n){
//     n++;
// }
// void update(int n){
//     n=n+1;
// }
// int main(){
//  /*int i=5;
//  int &j=i;// create j as reference variable
//  cout<<i<<endl;
//  cout<<j<<endl;*/
//  int n=5;
//  cout<<"Before "<<n<<endl;
//  update2(n);
//  cout<<"After "<<n<<endl;
//  return 0;

// ............

// }
// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//   int  sum=a+b;
    
// }
// int main(){
//     int a=3;
//     int b=4;
//   sum(a,b);

//     return 0;
// }
// For making variable size of array we use heap memory
// we use new keyword for this 

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the size of array"<<endl;
//   cin>>n;
//   new int[n];
//   int *arr=new int [n];// variable size of an array
//   for(int i=0;i<n;i++){
//     cin>> arr[i];
//   }
//   for(int i=0;i<n;i++){
//     cout<< arr[i]<<endl;

//   }
//   return 0;

// }


// Dynamic Memory allocation

// 2d array having same number of rows and col
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int **arr= new int *[n];
//   for(int i=0;i<n; i++){
//     arr[i]=new int[n];
//   }
//   // creation done
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cin>>arr[i][j];
//     }
//   }
//    for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout << arr[i][j];
//     }
//     cout<< endl;
// //   }
// // return 0;
// // }

// // Dynamic allocation having different number of rows and col
// #include<iostream>
// using namespace std;
// int main(){
//   int m;
//   cout<<"Enter the number of rows "<<endl;
//   cin>>m;
//   int n;
//   cout<<"Enter the number of col"<<endl;
//   cin>>n;
// int **arr=new int*[n];
// for (int  i = 0; i < m; i++)
// {
//   arr[i]=new int[n];
// }
//  for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cin>>arr[i][j];
//     }
//   }
//    for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cout << arr[i][j];
//     }
//     cout<< endl;
//   }
/// clearing memory

// for(int i=0;i<row;i++){
//   delete[] arr[i];
// }
// delete arr[];
  
// }


// MACROS===A piece of code in a program 
//            that is replaced by value of macro

  // #include<iostream>
  // using namespace std;
  // #define PI 3.14 // marcos decleartion 
  // int main(){
  //  int r=5;
  //  double area= PI*r*r;
  //  cout<<"Area will be"<<area<<endl;
  //  return 0;


  // }
    
    
    // GLOBAL VARIABLE -- A variable which can be used in anywhere in the whole program 
// #include<iostream>
// using namespace std;
// int score =12;
// void printscore(int score){
//   cout<<" PHODJDH"<<score<<endl;
// }

// int main(){
// cout<<"score will be "<<score<<endl;
// printscore(score);
// return 0;
// }



// INLINE FUNCTION--
// #include<iostream>
// using namespace std;
// void update(int a,int b){
//   a++;
//   b++;
//   cout<<a <<" "<<b <<endl;
// }
// int main(){
//   int a=2,b=4;
//   update(a,b);

// }
