#include <iostream>
#include <stdlib.h>
using namespace std;

int sexo, edad, tiempo;

int main()
{
    cout<<"Si usted es hombre coloque 1, ";
    cout<<"Si ested es mujer coloque 0: ";
    cin>>sexo;
    cout<<"Ingrese su edad:";
    cin>>edad;
    cout<<"Ingrese su tiempo en el maraton anterior(minutos):";
    cin>>tiempo;
    if (sexo == 1)
    {
        if (edad < 40)
        {
            if (tiempo < 150)
            {
                cout<<"Usted esta seleccionado"<<endl;
            }
            if (tiempo > 150)
            {
                cout<<"Usted no esta seleccionado"<<endl;
            }
        }
        if (edad >= 40)
        {
            if (tiempo <175)
            {
                cout<<"Usted esta seleccionado"<<endl;
            }
            if (tiempo > 175)
            {
                cout<<"Usted no esta seleccionado"<<endl;
            }
        }
    }
    if (sexo == 0)
    {
        if (tiempo < 180)
        {
            cout<<"Usted esta seleccionada"<<endl;
        }
        if (tiempo > 180)
        {
            cout<<"Usted no esta seleccionada"<<endl;
        }
    }
}

