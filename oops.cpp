#include<iostream>
using namespace std;
class hero{
  private: 
     int health; // properties
     public:
     char level;
     void print(){
        cout<<level<<endl;
     }
     int gethealth(){
        return health;
     }
     char getlevel(){
        return level;
     }
     void sethealth(int h){
        health=h;
     }
     void setlevel(char ch){
        level =ch;
     }

};
int main(){

     hero a; // static allocation
     cout<<a.level<<endl;
     cout<<a.gethealth()<<endl;
      hero *b =new hero; // dynamic alloacation
      cout<<(*b).level<<endl;
      cout<<(*b).gethealth()<<endl;
//   hero ramesh; // creation of object
// //   ramesh.health=10;
//   ramesh.level='A';
//     ramesh.sethealth(70);
//   cout<<"Size of object "<< sizeof(ramesh)<<endl;
//   cout<<"Health is "<<ramesh.gethealth() <<endl;
//   cout<<"Level is "<<ramesh.level <<endl;
//   // use of set

 
// //   return 0;
// }


// // // NOTE- for an empty class the system assign 1 byte memry to its object 
// // // NOTE 2- if we want to acces the private data member of class then we use getter and setter function
// // // note 3- we create object of an class then an automatic constructor is called by the compiler
// #include<iostream>
// using namespace std;
// class hero{
//     public:
//     int health;
//     int level;
//     hero(){ // constructor called
//         cout<<"An automatic constructor is called"<<endl;
//     }
//       // parametarised constructor
//       hero( int health){
//         cout<<"this ->"<<this<<endl;
//       this -> health=health;// this is used as a pointer to an object
//       }
// };
// int main(){
//     // cout<<"hi"<<endl;
//      hero ramesh(10);
    
//      cout<<"Adres of ramesh wil be "<<&ramesh<<endl;
//     //  cout<<"I love Ekta"<<endl;
//      return 0;

}
// concept of copy constructor

#include<iostream>
using namespace std;
class hero{
public:
int health;
char level;
hero(int health){
    this-> health=health;
}


hero(int health,char level){ // parametiresd constructor
   this-> level=level;
   this-> health=health;

}
hero( hero &temp) { // copy constructor
     this-> health=temp. health;
     this->level= temp.level;
}  


};
int main(){
hero S(20,'A');

cout<<S.health<<endl;
cout<<S.level<<endl;
 hero R(S); // copy constructor
 cout<<R.health<<endl;
 cout<<R.level<<endl;
 return 0;

}

// #include<iostream>
// using namespace std;
// class hero{
//     public:
//     int health;
//     char level;
//     char name[7];
//      void print(){
//         cout<<endl;
//         cout<<"[Name :"<<name<<" ";
//     }
//     int gethealth(){
//         return health;
//     }
//     char getlevel(){
//         return level;
//     }
//     void sethealth( int  h){
//      health=h;

//     }
//      void setlevel( char ch){
//      level=ch;
     
//     }
//     void setname(char name[]){
//         // strcpy(this-> name,name);
//     }
   

// };
// int main(){
     
//     hero hero1;
//     hero1.gethealth();
//     hero1.sethealth(12);
//     hero1.setlevel('A');
//     char name[7]="ABHINAV";
//     hero1.setname(name);
//     hero1.print();

// } 


// oops = important pillar of oops 

// (1)-ENCAPSULATION- wrapping up data members and function 
                    //  An information hidding /data hidding 

// FULLY ENCAPSULATED CLASS= All the data members are private marked
// advantages of encapsulation 
// 1. data hiding 
// 2. if we want ,we can make class read only..
// 3.  code reuseability
// 4. encapsulation -> unit testing 

// implementation of encapsulation 

// #include<iostream>
// using namespace std;
// class student {
// private:
//   string name;
//   int age;
//   int height;
//   public:
//   int getage(){
//     return this->age;
//   }
// // };
// // int main(){

// //     student A ;

// // }


// //  CONCEPT OF INHERITANCE
// //  defi- 
// // Inheritance is a fundamental concept in object-oriented programming 
// // (OOP), where one class (called a child or subclass) can acquire 
// // properties and behaviors (methods) from another class 
// // (called a parent or superclass

// // ~~~ private data members of any super class can not be inherited

// // modes of inheritance-- public,private,protected 

//     // implementation 
//     #include<iostream>
//     using namespace std;
//     class human{ // parent class /super class
//        public:
//         int height;
//         public: 
//         int weight;
        
//         int age; 
//         int getage(){
//             return this->age;
//         }
//         void setweight(int w){
//             this->weight=w;
//         }
//     };
//     class Male : protected human{ //child class / sub clss of human
//      public :
//     string color;
//     void sleep(){
//         cout<<"Male is sleeping"<<endl;
//     }
//     int getheight(){
//         return this->height;
//     }

//     };
//     int main(){
//     Male m1;
//     cout<< m1.getheight()<<endl;

//     return 0;

 


//     }

    // // TYPES OF INHERITANCE 
    // 1.SINGLE INHERITANCE
    // 2.MULTILEVEL INHERITANCE
    // 3. MULTIPLE INHERITANCE
    // 4.HYBRID INHERITANCE
    // 5. HEIRARCH INHERITANCE

        
        // 1.SINGLE INHERITANCE 
         
        //  when a class having only one parent class is called single inheritance 

        // #include<iostream>
        // using namespace std;
        // class Animal{
        //     public:
        //     int age;
        //     int weight;
        //     public:
        //     void speak(){
        //         cout<<" Speaking"<<endl;
        //     }
        // };
        // class Dog: public Animal{

        // };
        // int main(){
        //     Dog d;
        //     d.speak();

        // }


        // //   2.MULTILEVEL INHERITANCE 
        // Multilevel inheritance is when a subclass inherits from a class, 
        // and that class itself inherits from another class.
        // #include<iostream>
        // using namespace std;
        // class Animal{
        //     public:
        //     int age;
        //     int weight;
        //     public:
        //     void speak(){
        //         cout<<" Speaking"<<endl;
        //     }
        // };
        // class Dog: public Animal{

        // };
        // class Germanshefered : public Dog{

        // };
        // int main(){
        // Germanshefered  g;
        // g.speak();

        // }


        // 3. MULTIPLE INHERITANCE 
        // Multiple inheritance is when a class inherits from more than one class
    //    #include<iostream>
    //    using namespace std;
    //    class animal{
    //     public:
    //     void bark(){
    //         cout<<"Animal is barking"<<endl;
    //     }
    //    };
    //    class human{
    //     public:
    //     void speak(){
    //         cout<<"Human is speaking "<<endl;
    //     }
    //    };
    //    class hybrid: public animal, public human {

    //    }; 
    //    int main(){
    //     hybrid H1;
    //     H1.bark();
    //     H1.speak();
    //     return 0;


    //    }

    //   4. HIERARCHICAL INHERITANCE 
    //   when one class is serve as a parent for more than one class is termed as heirarchial inheritance 
    // #include<iostream>
    // using namespace std;
    // class A{
    //     public:
    //     void function(){
    //         cout<<"Inside first function"<<endl;
    //     }
    // };
    // class B :public A{
    //     public:
    //     void function2(){
    //         cout<<"I am inside second"<<endl;

    //     }
    // };
    // class C: public A{
    //     public:
    //     void function3(){
    //         cout<<"I am inside third one"<<endl;
    //     }
    // };

    // int main(){
    //  A obj1;
    //  obj1.function();
    //  B obj2;
    //  obj2.function();
    //  obj2.function2();
    //  C obj3;
    //  obj3.function3();
    //  return 0;
    // }


    // 5 .HYBRID INHERITANCE 
    // combination of more than one type of inheritance called hybrid inheritance 
    // #include<iostream>
    // using namespace std;
    // class D{
    //     public:
    //     int height=10;
    // };
    // class A{
    //     public:
    //     void hello(){
    //         cout<<"Hello ji chai pi lo ji"<<endl;
    //     }
    // };
    // class B: public A{
    //     public:
    //  void sum(){
    //     cout<<"Hello Handsome"<<endl;
    //  }
    // };
    // class C : public A, public D{
    //     void hat(){
    //         cout<<"Nikal bahen k laude"<<endl;
    //     }
    // };
    // int main(){
    //     C objc ;
    //     cout<<objc.height<<endl;
    //     objc.hello();
    //     return 0;
    
    // }


//    inheritance ambiguity= when same name of function is in two different parent class
//                          and if we call by their child class then it will confuse to call that particular function
                         // ~~~ for resolving this tyoe of problem we use scope resolation operator 
 
   
   
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };

// class Dog {
// public:
//     void speak() {
//         cout << "Dog barks" << endl;
//     }
// };

// class Puppy : public Animal, public Dog { // Inherits from both Animal and Dog
// };

// int main() {
//     Puppy p;
//     p.speak();  // Ambiguity: Which 'speak' method to call?
//     return 0;
// }


    // ~~~~~~~~~~ polymorphism 

    // When a thing existing in many forms are called polymorphism
    // There are two types of polymorphism are there 
    // 1.compile time polymorphism 
    //  2. Run time polymorphism 


 // 1. compile time polymorphism 
//  ---  when we know all the existing form during the compile is termed as compile time polymorphism 
// There are two types of compile time polymorphism 
// 1. Function Overloading 
// 2. operator overloading 


 // function overloading 

 //  function overloading is process in which there will be two or more function with same name having different parameters

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void sayhello(){
//         cout<<"Hello ji"<<endl;
//     }
//     void sayhello( string name){
//         cout<<"Namaste"<<endl;
//     }
// };
// int main(){
//     A obj;
    
//     obj.sayhello();

// }


// Operator overloading--Operator overloading allows you to define custom behavior for operators (like +, -, *, etc.)

// #include<iostream>
//  using namespace std;
 
//  class B{
//     public:
//     int a;
//     int b;
//     public:
//     int add(){
//         return a+b;
//     }
//     void operator +( B &obj){
//         int value1=this->a;
//         int value2=obj.a;
//         cout<<"Output is "<<value2-value1<<endl;
//     }

//  };
// int main(){
//     B obj1,obj2;
//     obj1.a=4;
//     obj2.a=7;
//     obj1+obj2;

// }



// RUN TIME POLYMORPHISM 

// method overriding 


// Method overriding is a concept in object-oriented programming (OOP)
//  where a subclass (child class) provides a new definition for a method that is 
//  already defined in its superclass (parent class).

// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog: public Animal{
//     public:
//     void speak(){
//         cout<<"Barking"<<endl;
//     }
// }; 
// class billi:public Dog{
//     public:
//     void speak(){
//         cout<<"MEAU MEAU"<<endl;
//     }
// };
// int main(){
//     billi obj;
//     obj.speak();
     
// }



       // Abstraction

/*Abstraction in programming is the concept of hiding complex details
//  and showing only the essential features to the user.*/
// #include<iostream>
// using namespace std;

// class Animal {
// public:
//     // Abstract method (does not have implementation here)
//     virtual void sound() = 0;  
// };

// class Dog : public Animal {
// public:
//     void sound() override {  // Dog's implementation of sound
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Dog dog;
//     dog.sound();  // Output: Dog barks
// }



// now the end of oops 
