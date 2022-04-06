#include <iostream>
#include <stdlib.h>
using namespace std;
void menu();
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();

main()
{
    menu();
}
void menu()
{
    int n;
    n=1;
    while(n<=11)
    {
        cout<<"Menu Principal"<<endl;
        cout<<"1. Multiplos de 7"<<endl;
        cout<<"2. Sumatoria 3(n)"<<endl;
        cout<<"3. Promedio"<<endl;
        cout<<"4. Numero perfecto"<<endl;
        cout<<"Elija una opcion (1-12): "<<endl;
        cin>>n;
        if (n ==1)
        {
            ejercicio1();
        }
        if (n == 2)
        {
            ejercicio2();
        }
        if (n == 3)
        {
            ejercicio3();
        }
        if (n == 4)
        {
            ejercicio4();
        }
        system("pause");
        system("cls");
    }
}
/*Multiplos de 7*/
void ejercicio1()
{
    int i;
    i=1;
    while(i<=1000)
    {
        if (i%7 == 0)
        {
            cout<<i<<" es multiplo de 7"<<endl;
        }
        i++;
    }
}
/*Cálculo de operación*/
void ejercicio2()
{
    long s, n, i;
    cout<<"Ingrese el numero hasta el que queiere multiplicar: "<<endl;
    cin>>n;
    i=1;
    s=0;
    while (i<=n)
    {
       s = s + (3*i);
       i++;
    }
    cout<<"La sumatoria es: "<<s<<endl;
}
/*Leer Promedio*/
void ejercicio3 ()
{
    float nota, total, a, b, c, d;
    int i;
    total=0;
    i=1;
    while(i<=4)
    {
        cout<<"Ingrese la nota"<<i<<": ";
        cin>>nota;
        total = total + nota;
        i++;
    }
    total = total / 4;
    if (total >= 3)
    {
        cout<<"nota definitiva: "<<total<<" (Aprobo)"<<endl;
    }
    else
    {
        cout<<"nota definitiva: "<<total<<" (Reprobo)"<<endl;
    }
}
/*Número perfecto*/
void ejercicio4()
{
    int n, i, p;
    i = 1;
    cout<<"Ingrese el numero que quiere saber si es perfecto: ";
    cin>>n;
     p = n / i;
    while(i<n)
    {
        if (n%i == 0)
        {
            cout<<i<<endl;
        }
        i++;
    }
}













