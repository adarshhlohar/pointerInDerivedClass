#include <iostream>
using namespace std;

class baseClass
{
public:
    int baseVar = 34;

    virtual void display()
    {
        cout << "This is the base Class and the value base Var is : " << baseVar << endl;
    }
};

class derivedClass : public baseClass
{
public:
    int derivedVar = 87;
    void display()
    {
        cout << "this is the derved Class and the value of derived class basevar is : " << baseVar << endl;
        cout << "this is the derved Class and the value of derived class derivedVar  is : " << derivedVar << endl;
    }
};

int main()
{
    baseClass *base_Class_Pointer;
    baseClass baseObj;

    derivedClass derivedObj;

    base_Class_Pointer = &derivedObj;
    base_Class_Pointer->display();
}