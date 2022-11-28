#include<iostream>
using namespace std;

class Base
{
    public:            //Access specifier
        int A, B;

        void fun()          //function definition    1000
        {
            cout<<"Base Fun\n";
        }
        void gun(int i)        //function definition 2000
        {
            cout<<"Base gun with 1 integer\n";
        }
        void gun(int i , int j)        // overloaded function definition   3000
        {
            cout<<"Base gun with 2 integer\n";
        }
};

class Derived : public Base
{
    public:
        int X, Y;
        void sun()          //function definition      4000
        {
            cout<<"Derived function\n";
        }
        void fun()         //function redifinition            5000
        {
            cout<<"Derived fun\n";
        }

};

int main()
{
    
    Derived dobj;
    dobj.sun();
    dobj.fun();
   

    dobj.A;
    dobj.B;
    dobj.X;




    return 0;

}