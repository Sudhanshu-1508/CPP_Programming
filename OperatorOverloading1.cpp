#include<iostream>
using namespace std;

class Demo
{
    private:
        int A,B;
    public:
        Demo(int i= 0, int j=0)
        {
            A = i;
            B = j;
        }
    void Display()
    {
        cout<<A<<"\n";
        cout<<B<<"\n";
    }
    friend Demo operator +(Demo obj1, Demo obj2);
    friend Demo operator -(Demo obj1, Demo obj2);
    friend Demo operator *(Demo obj1, Demo obj2); 
};

Demo operator +(Demo obj1, Demo obj2)
{
    cout<<"Inside  + operator function\n";
    return Demo(obj1.A+obj2.A, obj1.B+obj2.B);
}
Demo operator -(Demo obj1, Demo obj2)
{
    cout<<"Inside  - operator function\n";
    return Demo(obj1.A-obj2.A, obj1.B-obj2.B);
}
Demo operator *(Demo obj1, Demo obj2)
{
    cout<<"Inside  * operator function\n";
    return Demo(obj1.A*obj2.A, obj1.B*obj2.B);
}

int main()
{
    Demo X(10,20);
    Demo Y(30,40);
    Demo Ans(0,0);
    
    Ans = X + Y;
    Ans.Display();

    Ans = X - Y;
    Ans.Display();

    Ans = X * Y;
    Ans.Display();
    return 0;
}