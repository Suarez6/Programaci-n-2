#include <iostream>
#include <stdlib.h>
using namespace std;

int n1, n2, n3;

int main()
{
    cout<<"Ingrese un numero: ";
    cin>>n1;
    cout<<"Ingrese otro numero: ";
    cin>>n2;
    cout<<"Ingrese otro numero: ";
    cin>>n3;
    if ((n1 > n2) && (n2 > n3))
    {
        cout<<n1;
        cout<<", "<<n2;
        cout<<", "<<n3<<endl;
    }
    if ((n3 > n2) && (n2 > n1))
    {
        cout<<n3;
        cout<<", "<<n2;
        cout<<", "<<n1<<endl;
    }
    if ((n2 > n1) && (n1 > n3))
    {
        cout<<n2;
        cout<<", "<<n1;
        cout<<", "<<n3<<endl;
    }
    if ((n2 > n3) && (n3 > n1))
    {
        cout<<n2;
        cout<<", "<<n3;
        cout<<", "<<n1<<endl;
    }
    if ((n3 > n1) && (n1 > n2))
    {
        cout<<n3;
        cout<<", "<<n1;
        cout<<", "<<n2<<endl;
    }
    if ((n1 > n3) && (n3 > n2))
    {
        cout<<n1;
        cout<<", "<<n3;
        cout<<", "<<n1<<endl;
    }
}
