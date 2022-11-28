#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
       
       
        Demo()
        {
           i = 1;
           j = 21;
        }
        Demo(int c, int y)
        {
            i = c;
            j = y;
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20);

    const Demo obj3;
    const Demo obj4(10,20);

    return 0;
}