#include<iostream>
using namespace std;

class Maths   //Class Declaration
{
    public:   //Access Specifier
    int iNo1;        //Characteristics
    int iNo2;       //Characteristics

    Maths()    //Constructor (default)
    {
        cout<<"Inside default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }
    Maths(int A, int B)       // constructor (parametrized)
    {
        cout<<"inside Paramterized constructor\n";
        iNo1 = A;
        iNo2 = B;
    }
    ~Maths()           //Destructor
    {
        cout<<"Inside Destructor\n";
    }

    int Addition()  //(Maths *this)
    {
        return  iNo1 + iNo2 ;           // Behaviour
    }

    int Substraction()  // (Maths *this)
    {
        return  iNo1 - iNo2 ;   // Behaviour
    }
};


int main()
{

    cout<<"Inside main function\n";

    Maths mobj1;
    Maths mobj2(10,11);
    int ret = 0;

    ret = mobj2.Addition();
    // ret = Addition(200)
    cout<<"Addition is :"<<ret<<"\n";

    ret = mobj1.Substraction();
    // ret = Substraction(100)
    cout<<"substraction is :"<<ret<<"\n";

    return 0;
}