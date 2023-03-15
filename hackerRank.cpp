#include<iostream>
#include<vector>

using namespace std;
 

 int main(){
    vector<char> var;
    string name = "Rohit";


    for (int i = 0; i < 5; i++)
    {
        var.push_back(name[5-i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<var[i]<<endl;
    }
    
 }

