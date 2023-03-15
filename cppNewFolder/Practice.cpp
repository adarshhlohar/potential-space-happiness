#include<iostream>
using namespace std;

class complex{
    int real,complex;
    public:
    void setData(int re, int ce);
    void getData();
};


void complex :: setData(int r , int c){
    real = r;
    complex = c; 
}


void complex :: getData(){
    cout<<"The value real part is : "<<real<<endl;
    cout<<"The value complex part is : "<<complex<<endl;
}


int main(){
    // we are ponting the object using pointer
    complex *ptr = new complex;
    (*ptr).setData(4,5);
    (*ptr).getData();

    complex c1;
    complex *ptr2 = &c1;
    (*ptr).setData(5,6);
    ptr->getData();

    
}