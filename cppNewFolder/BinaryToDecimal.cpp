// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;

vector <int> binaryToDecimal(int num){
    vector <int> arr;
    int rem;
    while (num != 0)
    {
        rem = num%2;
        num = num/2;
        arr.push_back(rem);
    }
    reverse(arr.begin(),arr.end());
    return arr;
}


int main(){
    int n;
    cout<<"Enter the input for the n"<<endl;
    cin>>n;
    vector<int> array;
    array = binaryToDecimal(n);
    cout<<"The decimal to binary conversion is : "<<endl;
    for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }
    
}