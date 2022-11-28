#include<iostream>
using namespace std;

class Demo
{
    public:         // access sprcifier
        int i;     // instance variable
        int j;     // instance variable
        static int k;  // class variable
        static int l; //class variable
        
        Demo()  //default constructor
        {
            i = 0;
            j = 0;
        }
        Demo(int a, int b) // parametrised constructor
        {
            i = a;
            j = b;
        }
        void fun()  // instance method
        {

        }
        static void gun()  //class method
        {

        }
};

int Demo::k = 0;
int Demo::l = 69;

int main()
{
    cout<<"Value of k : "<<Demo::k<<"\n";
    cout<<"Value of l : "<<Demo::l<<"\n";
    
    Demo::gun();

    Demo obj1(10,11);
    Demo obj2(20,21);    

    cout<<"Value of i in obj1 : "<<obj1.i<<"\n";
    cout<<"Value of j in obj2 : "<<obj2.i<<"\n";

    cout<<"Value of i in obj1 :"<<obj1.j<<"\n";
    cout<<"Value of i in obj2 :"<<obj2.j<<"\n";

    obj1.fun();
    obj2.fun();
    return 0;
}