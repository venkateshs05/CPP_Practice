#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter 1st number"<<endl;
    cin>>x;
    cout<< "enter 2nd number"<<endl;
    cin>>y;
    cout<< "x="<<x<<"\ty="<<y<<endl;
    void swap(int*,int*);
    swap(&x,&y);
    /*x=x+y;
    y=x-y;
    x=x-y;
    */
    cout<< "x="<<x<<"\ty="<<y<<endl;


    return 0;
}
void swap(int*a,int*b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

}