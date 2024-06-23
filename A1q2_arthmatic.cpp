#include<iostream>
using namespace std;
int main(){
    int a,b,*ptr1,*ptr2;
cout<<"enter the 1st number"<<endl;
cin >> a;
cout<<"enter the 2nd number"<<endl;
cin>> b;
ptr1=&a;
ptr2=&b;
int add=*ptr1+*ptr2;
int sub=*ptr1-*ptr2;
int multi=*ptr1**ptr2;
float div=(float)*ptr1/ (float)*ptr2;
cout<< "addition is :"<<add<<endl;
cout<< "sub is :"<<sub<<endl;
cout<< "multipliction is :"<<multi<<endl;
cout<< "div is : "<<div<<endl;    return 0;

}