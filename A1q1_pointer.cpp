#include<iostream>
using namespace std;
int main()
{
    int num =20;
    int *ptr=&num;
    cout<< *ptr <<endl;
    ptr+=2;
    cout << *ptr <<endl;
    return 0;
}
