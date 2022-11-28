#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        void fun()
        {
            cout<<"Inside fun function\n";
            cout<<"Value of Public i :"<<i<<"\n";
            cout<<"Value of Private j :"<<j<<"\n";
            cout<<"Value of Protected k :"<<k<<"\n";
        }
};



int main()
{
    Base bobj;
    cout<<"inside main function \n";
    cout<<"Value of pub;ic i :"<<bobj.i<<"\n";
    /*
    cout<<"Values of private j :"<<bobj.j<<"\n";
    cout<<"Values of protected k:"<<bobj.k<<"\n";
    */

    bobj.fun();

    return 0;
}