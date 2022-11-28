#include<iostream>
using namespace std;

class Overloading
{
    public:
// Add@2ii
        int Add(int a , int b)
        {
            cout<<"addition of int\n";
        }
//
        float Add(float a , float b)
        {
            cout<<"Addtion of floats\n";
        }

        double Add(double a, double b)
        {
            cout<<"addition of doubles\n";
        }

        int Add(int a , int b , int c)
        {
            cout<<"Addtion of 3 int \n";
        }


};

int main()
{
    Overloading obj;
    obj.Add(11,21);      
    obj.Add(11,21,51);
    obj

    return 0;
}