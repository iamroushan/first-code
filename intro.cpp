#include<iostream>
using namespace std;

int main(){
    int number[15];
    cout<<"value at 15 index: "<<number[14]<<endl;
    cout<<"value at 20 index: "<<number[20]<<endl;
    cout<<endl<<"everything is fine"<<endl<<endl;

    int third[15]={2,7};
    int n=3;
    for(int i=0;i<n;i++)
    {
        cout<<third[i]<<" ";
    }


    int fourth[10]={1};
    n=10;
    int fourthSize=sizeof(fourth)/sizeof(int);
    cout<<"size of fourth is: "<<fourthSize<<endl;
}