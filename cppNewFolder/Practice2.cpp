#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
    void setData(int ,float );
    void getData();
};

void Shop :: setData(int i, float p){
    id  = i;
    price = p;
}

void Shop :: getData(){
    cout<<"The id of the item is : "<<id<<endl;
    cout<<"The price of the item is : "<<price<<endl;
}

int main(){
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;

    int i,id;
    float price;

    for ( i = 0; i < size; i++)
    {
        cout<<"Enter The value of id and price : "<<endl;
        cin>>id>>price;
        ptr->setData(id,price);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item Number : "<<i+1<<endl;
        ptrTemp->getData();
    }
    
    
}