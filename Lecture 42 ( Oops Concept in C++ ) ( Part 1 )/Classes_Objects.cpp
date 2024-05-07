#include<iostream>
#include <string.h>
//Including another class which is present in another file 
// #include<NewFileInclude.cpp>
using namespace std;

//Created a class
class Hero{

    private :
   // private property can only access inside a class only
   int rank ;
   string teamname;

   // Properties
   public:
   //Public access modifier means we can access inside the class also or outside the class also.
   int age ;
//    string name ;
   char ch ;
   char *name;


    void kucbhi(){
    cout << rank << endl;
   }

   //Getter 
   int getrank(){
    return rank ;
   }

   string getteamname(){
    return teamname;
   }

   //Setter
   void setrank(int r){
    rank = r;
   } 

   void setteamname(string t){
    teamname = t;
   }

   //Constructor created by us  
   Hero(){
    cout << "Simple Constructor Made" << endl;
    name = new char[1001];
   }

   //Parameterized Constructor

   Hero(int age){

    //Here we are adding a value in a object of hero using this keyword  
    cout << "Address of this keyword : " << this << endl;
    this -> age = age ;

   }

   void setname(char name[]){
    strcpy(this->name , name);
   }

    void print(){
        cout << "Rank is : " << this->rank << endl;
        cout << "Teamname is : " << this->teamname << endl;
        cout << "Name is : " << this->name << endl;
    }

    //Creating destructor
    ~Hero(){
        cout << "Creating Destructor " << endl;
    }

    //Static datamemeber which belongs to class
    static int timetogo; 

    static int stf(){
        return timetogo ;
    }

};

//Intializing static varaible which belongs to class
int Hero::timetogo=5;

int main(){

    // Creating a object of another class which we have include 
    // NewClass h2 ;

    //Creating a object of class
    // Hero h1;

    // //Setting values for public properties
    // h1.age=100; 
    // h1.name="tekken";
    // h1.ch='T';
    // cout << "size : " << sizeof(h1) << endl;
    // cout << "Age of our Hero is : " << h1.age << endl;
    // cout << "Name of our hero is : " << h1.name << endl;
    // cout << "Startig character of our hero is : " << h1.ch << endl;

    // //Setting value for private prop outside the class
    // h1.setrank(100);
    // h1.setteamname("OmkaraObreoi");
    // //Accessing private properties outside a class using getter and setter 
    // cout << "Getting rank : " << h1.getrank() << endl;
    // cout << "Getting Teamname : " << h1.getteamname() << endl;

    // //padding and greedyalignment
    // cout << "Size of our object : " << sizeof(h1) << endl; 

    // //Created object dynamically 
    // Hero *b = new Hero ;

    // cout << "New age of our hero is : " << (*b).age << endl;
    // cout << "New Name of our hero is : " << (*b).name << endl;  
    // cout << "New Starting Character of our hero is : " << (*b).ch << endl;  


    //Creating a new object for constructor
    // Hero h(200) ;

    // //Printing address of Hero 
    // cout << "Address of Hero : " << &h << endl;

    // //Creating a new object dynamically for  constructor
    // Hero *h2 = new Hero;

    //Creating a object for copy constructor
    // Hero cpc;
    // cpc.setrank(100);
    // cpc.setteamname("Rudra Obreoi");

    // cout << "Priting value before copy : " << endl;
    // cout << "Getting Rank : " << cpc.getrank() << endl;
    // cout << "Getting TeamName : " << cpc.getteamname() << endl;

    // Hero copyconst(cpc);    

    // cout << "Priting value after copy : " << endl;
    // cout << "Getting Rank : " << copyconst.getrank() << endl;
    // cout << "Getting TeamName : " << copyconst.getteamname() << endl;

    Hero c1;
    c1.setrank(1);
    c1.setteamname("rudra ob");
    char name[7]="Mayank";
    c1.setname(name);
    c1.print();

    Hero *c2 = new Hero;
    delete c2;

    cout << "printing value of static variable : " << Hero::timetogo << endl;    

    cout << "Static Function : " << Hero::stf << endl;
}