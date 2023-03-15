#include<iostream>
using namespace std;

class CWH{
    protected:
    string s;
    float rating;
    public:
    CWH(string title,float r){
        s = title;
        rating = r;
    }
    void virtual display(){

    }
};


class CWHVideo : public CWH{
    float videoLen;
    public:
    CWHVideo(string s,float r,float vl) : CWH(s,r){
        videoLen = vl;
    }

    void display(){
        cout<<"The name of the video tutorial is "<<s<<endl;
        cout<<"The rating of the tutorial is "<<rating<<" out of 5 "<<endl;
        cout<<"The length of the tutorial is : "<<videoLen<<endl;
    }
};

class CWHText : public CWH{
    int words;
    public:
    CWHText(string s,float r,int wc) : CWH(s,r){
        words = wc;
    }

    void display(){
        cout<<"The name of the video tutorial is "<<s<<endl;
        cout<<"The rating of the tutorial is "<<rating<<" out of 5 "<<endl;
        cout<<"The length of the tutorial is : "<<words<<endl;
    }

};

int main(){
    string title;
    float rating,videoLen;
    int words;
    title = "Python Tutorial";
    rating =4.9;
    videoLen = 14.48;  
    CWHVideo PythonV(title,rating,videoLen);
    // PythonV.display();

    title = "Python Text tutorial";
    rating = 4.8;
    words = 455;
    CWHText PythonT(title,rating,words);
    // PythonT.display();

    CWH *tuts[2];

    tuts[1] = &PythonV;
    tuts[2] = &PythonT;

    tuts[1]->display();
    tuts[2]->display();
}