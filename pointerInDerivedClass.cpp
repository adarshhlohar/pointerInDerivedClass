#include<iostream>
using namespace std;

class baseClass{
    public:
    int baseVar;
    void display(){
        cout<<"The value of baseVar in baseClass is : "<<baseVar<<endl;
    }
};

class derivedClass : public baseClass{
    public:
    int derivedVar;
    void display(){
        cout<<"The value of derived var in derived class is : "<<derivedVar<<endl;
        cout<<"the value baseVar in derived Class is : "<<baseVar<<endl;
    }
};



int main(){
    baseClass *base_class_pointer;
    baseClass baseObj;

    derivedClass *derived_class_pointer;
    derivedClass derivedObj;


    // the base calss is pointing to the derived object it can calls the base class function display
    base_class_pointer = &baseObj;
    base_class_pointer->baseVar = 23;
    base_class_pointer->display();

    // the derived class pointer is pointing to the derived class object also it can calls the derived class display
    derived_class_pointer = &derivedObj;
    derived_class_pointer->baseVar = 32;
    derived_class_pointer->derivedVar = 54;
    derived_class_pointer ->display();


    // The derived class pointer is pointing to the  base class object It can gives error
    // derived_class_pointer = &baseObj;
    // derived_class_pointer->baseVar = 90;
    // derived_class_pointer ->derivedVar = 88;
    // derived_class_pointer ->display();




}