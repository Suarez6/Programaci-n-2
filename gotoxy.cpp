#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;

/*Nombre procedimiento: gotoxy(int x, int y))
  Objetivo:     Ubicar el cursor del teclado en una posición (x,y) en la
                pantalla.
  Parámetros:   x ---> Indica la posición x donde se ubicará el dato.
                y ---> Indica la posición y donde se ubicará el dato.
  Ejemplo:      gotoxy(5, 10);
                cout<<"Hola Mundo"  // Muestra en patalla "Hola Mundo"
                en la posición (5, 10)
*/

 void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }

 void ascii()
 {
     int posy=1;
     for (int i=0; i<=84; i++)
     {
         gotoxy(1, posy); cout<<(char)i<<" --->"<<i<<endl;
         gotoxy(25, posy); cout<<(char)(i+85)<<" --->"<<i+85<<endl;
         gotoxy(50, posy); cout<<(char)(i+170)<<" --->"<<i+170<<endl;
         posy++;
     }
 }


 void color(int c)
 {
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
 }

  void listacolor()
 {
     int posY=1;
     for (int i=0; i<=63; i++)
     {
         gotoxy(1, posY); color(i); cout<<"Color "<<i<<endl;
         gotoxy(25, posY); color(i+85); cout<<"Color "<<i+85<<endl;
         gotoxy(50, posY); color(i+170); cout<<"Color "<<i+170<<endl;
         color(7);
         posY++;
     }
 }

 /*Nombre procedimiento: lineah(int x, int y, int tam)
  Objetivo: Elaborar una línea horizontal en la pantalla
            en la posición (x,y) y el tamaño tam. char 196

  */

  void lineah(int x, int y, int tam, char borde)
  {
      if (borde=='s')
          for (int i=x; i<=x+tam; i++)
          {
                gotoxy(i, y);
                cout<<(char)196;
          }
      else
          for (int i=x; i<=x+tam; i++)
          {
                gotoxy(i, y);
                cout<<(char)205;
          }
  }

  void lineav(int x, int y, int tam, char borde)
  {
      if(borde=='s')
          for (int i=y; i<=tam; i++)
          {
              gotoxy(x, y);
              cout<<(char)179;
              y=y+1;
          }
        else
           for (int i=y; i<=tam; i++)
          {
              gotoxy(x, y);
              cout<<(char)186;
              y=y+1;
          }
  }
//Hay que organizarlo
  void cuadro(int x1, int y1, int x2, int y2, char tipo)
  {
      if (tipo=='s')
      {
          lineah(x1+1, y1, x2-x1, tipo);
          lineah(x1+1, y2-1, x2-x1, tipo);
          lineav(x1, y1+1, y2-y1, tipo);
          lineav(x2+2, y1+1, y2-y1, tipo);
          gotoxy(x1+2,y1);
          cout<<(char)218;
          gotoxy(x2,y1);
          cout<<(char)191;
          gotoxy(x1,y2);
          cout<<(char)192;
          gotoxy(x2,y2);
          cout<<(char)217;
      }
      else
      {
          lineah(x1+1, y1, x2-x1, tipo);
          lineah(x1+1, y2-1, x2-x1, tipo);
          lineav(x1, y1+1, y2-y1, tipo);
          lineav(x2+2, y1+1, y2-y1, tipo);
          gotoxy(x1+2,y1);
          cout<<(char)201;
          gotoxy(x2,y1);
          cout<<(char)187;
          gotoxy(x1,y2);
          cout<<(char)1200;
          gotoxy(x2,y2);
          cout<<(char)188;
      }
  }

void cuadroc(int x, int y, int tam, int col)
  {
      for (int i=y; i<=tam; i++)
      {
          for (int i=x; i<=x+tam; i++)
          {
                gotoxy(i, y);
                color(col);
                cout<<(char)219;
          }
          y=y+1;
      }
  }

  void cuadroR(int x1, int y1, int x2, int y2, int col)
  {
      for (int i=y1; i<=y2; i++)
      {
          for (int i=x1; i<=x2-x1; i++)
          {
                gotoxy(i, y1);
                color(col);
                cout<<(char)219;
          }
          y1=y1+1;
      }
  }

  void ventana1(int x1, int y1, int x2, int y2, int colfondo, int colsombra)
  {
      for (int i=y1; i<=y2; i++)
      {
          for (int i=x1; i<=x2-x1; i++)
          {
                gotoxy(i+1, y1+1);
                color(colsombra);
                cout<<(char)177;
                gotoxy(i, y1);
                color(colfondo);
                cout<<(char)219;
          }
          y1=y1+1;
      }
  }

  void ventana2(int x1, int y1, int x2, int y2,int coltitulo, int colfondo, int colsombra)
  {
      for (int i=y1; i<=y2; i++)
      {
          for (int i=x1; i<=x2-x1; i++)
          {
              if (i==y1)
              {
                  gotoxy(i, y1);
                color(coltitulo);
                cout<<(char)219;
              }
              else
              {
                gotoxy(i+1, y1+1);
                color(colsombra);
                cout<<(char)177;
                gotoxy(i, y1);
                color(colfondo);
                cout<<(char)219;
              }
          }
          y1=y1+1;
      }
  }
//Hasta aquí voy
 int main()
 {
    ascii();
    //listacolor();
    //lineah(9,2,10,'h');
    //lineav(8,3,10,'h');
    //cuadro(4,2,10,12,'s');
    //cuadroR(2,2,18,10,3);
    //ventana1(2,2,18,10,4,5);
    //ventana2(2,2,18,10,3,4,5);
    gotoxy(0,20);
 }
