    //    POINTERS -- it is used to store the address of variable

    // symbol table- it is an important data structure created and maintained by
    // compiler in order to keeep track of semantics of variables i.e it store information about the scope and binding
    // information about names,information, about instances of various entities 
    // such as  variable function name and objects etc.
    // POINTER ALWAYS HAVE 8 BYTE SIZE FOR ALL THE TYPE DATA
    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int num=5;
    //     cout<<num<<endl;
    //     // address of operatot
    //     cout<<"address of num will be " << &num <<endl;
    //         int *ptr =&num;  // decleration of pointer
    //  cout<<"Value will be: "<<*ptr<<endl;// it will print value .
    //  cout<<" Adress "<<ptr<<endl;// it will print adress hold by ptr variable

     
    //  return 0;    
    // } 
    // #include<iostream>
    // using namespace std;
    // int main(){
    //     double d;
    //     double *ptr=&d;
    //     cout<<" address of d will be " << ptr<< endl;
    //     cout<<&d<<endl;
    //     cout<<*ptr<<" ";
    //     cout<<"size of integer is "<<sizeof(d)<<endl;
    //     cout<<"Size of pointer to d"<<sizeof(ptr)<<endl;
    // }
    // #include<iostream>
    // using namespace std;
    // int main(){
        // int i=9;
        // int *p=0;
        // // p=&i;
        // // cout<<*p<<endl;
        // // int num=8;
        // // int a=num;
        // // a++;
        // // cout<<num<<endl;
        // int num=9;
        // int*p=&num;
        // (*p)++;
    //     cout<<"Final value will be "<<num<<endl;
    // return 0;
    // copying one pointer to another
    // int **q=&p;
    // cout<<p<<" -"<<q<<endl;
    // cout<<*p<<"- "<<*q<<endl;
    // }
    // imprtnt concept;
    // int i=4;
    // int *t=&i;
    // *t=*t+1;
    // cout<<*t<<endl;
    // cout<<"Before t"<<t<<endl;
    // t=t+1;
    // cout<<"After t increased it will be"<<t<<endl;
    // return 0;
    // }


        // MAIN AND IMPORTANT CONCEPT OF POINTER 
         
        // #include<iostream>
        // using namespace std;
        // int main(){
        //     int arr[4]={1,2,3,4};
        // //   cout<<arr<<endl;
        // //   cout<<&arr[0]<<endl;
        // //   cout<<*arr<<endl;
        // //   (*arr)++;
        // //   cout<<*arr<<endl;
        // //   cout<<*(arr+1)<<endl;
        // int i=3;
        // cout<<i[arr]<<endl;
        //   return 0;
        

        
        // formula-- arr[i]=*(arr+i)
        // i[arr]=*(i+arr)   it is also correcct

// #include<iostream>
// using namespace std;
// int main(){
    // int temp[10];
    // cout<< sizeof(temp)<<endl;
    // int *ptr=&temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl; 

// we can not change the address of first block of an array means
// symbol table mapping to address will never be changed


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int *p=&arr[0];
//     cout<<p<<endl;
//     p=p+1; 
//     cout<<p<<endl;
// }

//    character array 
// #include<iostream>
// using namespace std;
// int main(){
    // int arr[4]={1,2,3,4};
    // char ch[6]="abcde";
    // char *c=&ch[0];
    // cout<<arr<<endl;
    // cout<<ch<<endl; // attention here
    // cout<<c<<endl;// prints entire string
//     char temp='z';
//     char *p=&temp;
//     cout<<p<< endl;
//     return 0;
    
// }
        //  pointer in functions 
        // #include<iostream>
        // using namespace std;
        // void print(int*p){
        //     cout<<*p<<endl;
        // }
        // void update(int *p){
        //     p=p+1;
        // }
        // int main(){
        // //     int value=5;
        // //     int*p=&value;
        // //     // print(p);
        // //     cout<<"Before " << p <<endl;
        // //     update(p);
        // //     cout<<"After" <<p<<endl; 
        // // }


        // //    DOUBLE POINTER -It is used to store the adress of another pointer variable
        // #include<iostream>
        // using namespace std;
        // void update(int **p2){
        //     p2=p2+1;
        //     // *p2=*p2+1;
        //     // **p=**p+1;
        // }
        // int main(){  
        // int i=5;
        // int *p=&i;
        // int **p2=&p;
        // // cout<<"printing p"<<p<<endl;
        // // cout<<"address of p"<<&p<<endl;
        // // cout<<p2<<endl;
        // // cout<<*p2<<endl;
        // // cout<<**p2<<endl;
        // cout<<"Before"<<i<<endl;
        // cout<<"Before"<<p<<endl;
        // cout<<"Before"<<p2<<endl;
        // update(p2);
        // cout<<"After "<<i<<endl;
        // cout<<"After"<<p<<endl;
        // cout<<"After"<<p2<<endl;
        // return 0;
        // }
        // #include<iostream>
        // using namespace std;
        // int main(){
            
        // }