#include <iostream>
#include <fstream>
#include <math.h>
#include <list>
#include <vector>
#include "Evaluador.h"
using namespace std;

///////////////////////////////////////////////////////////////////
///////////////////////////// PARTE 1 /////////////////////////////
///////////////////////////////////////////////////////////////////

//Devuelve el segundo elemento de arreglo (dado)
int getSegundoElemento(int* arreglo)
{
    return -1;
}

//Devuelve la direccion de memoria del primer valor de arreglo (dado)
int* getDireccionPrimerElemento(int arreglo[5])
{
    return NULL;
}

//Escribe todo el contenido de valores (dado) en el archivo con nombre nombre_archivo (dado)
void escribir(string nombre_archivo,vector<int>valores)
{
}

//Lee los valores del vector previamente guardado en la funcion escribir y los devuelve en un vector tal y como se escribio
vector<int> leer(string nombre_archivo)
{
    vector<int> respuesta;

    return respuesta;
}

//Devuelve la mediana de los valores almacenados en lista (dado)
double obtenerMediana(list<int>lista)
{
    return -1.0;
}

///////////////////////////////////////////////////////////////////
///////////////////////////// PARTE 2 /////////////////////////////
///////////////////////////////////////////////////////////////////

//Realizar las clases Operador, Sumar y Restar descritas en el diagrama UML adjunto

//**Figura**
//Constructor vacio: no hace nada
//getTipo(): devuelve "Figura"
//getArea(): funcion abstracta
//getPerimetro(): funcion abstracta

//**Rectangulo**
//Constructor: inicializa los atributos de clase dados los parametros
//getTipo(): devuelve "Rectangulo"
//getArea(): devuelve el area del circulo dado su base y altura como atributo de clase
//getPerimetro(): devuelve el perimetro dado su base y altura como atributo de clase

//**Circulo**
//Constructor: inicializa los atributos de clase dados los parametros
//getTipo(): devuelve "Circulo"
//getArea(): devuelve el area del circulo dado su radio como atributo de clase
//getPerimetro(): devuelve el perimetro dado su radio como atributo de clase

///////////////////////////////////////////////////////////////////
////////////////////////////// Main ///////////////////////////////
///////////////////////////////////////////////////////////////////

void evaluar();
void evaluar2();

int main ()
{
    //Funcion evaluadora parte 1
    cout<<"Evaluador parte 1"<<endl<<"================="<<endl;
    evaluar();


    //Evaluacion parte 2
    //Descomentar para evaluar
    cout<<"Evaluador parte 2"<<endl<<"================="<<endl;
    evaluar2();

    return 0;
}


///////////////////////////////////////////////////////////////////////
///////////////////////////// Evaluador 2 /////////////////////////////
///////////////////////////////////////////////////////////////////////

void evaluar()
{
    double nota = evaluarEscondido();

    int a1=10;
    int a2=20;

    char b1='a';
    char b2='b';

    double c1=1.43;
    double c2=5.23;

    cout<<endl<<"Nota: "<<nota<<"/8"<<endl<<endl;
}

void evaluar2()
{
    double nota = 0;

//    cout<<"**Clase Rectangulo**"<<endl;
//    cout<<"Test constructor:\t\t";
//    Rectangulo r1(10,20);
//    Rectangulo r2(4,3);
//    Rectangulo r3(10,20);
//
//    if(r1.base == 10
//        && r1.altura == 20
//        && r2.base == 4
//        && r2.altura == 3
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test getTipo():\t\t\t";
//
//    if(r1.getTipo() == "Rectangulo"
//        && r2.getTipo() == "Rectangulo"
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test getArea():\t\t\t";
//
//    if(r1.getArea() == 200
//        && r2.getArea() == 12
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test getPerimetro():\t\t";
//    if(r1.getPerimetro() == 60
//        && r2.getPerimetro() == 14
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//
//    cout<<"**Clase Circulo**"<<endl;
//    cout<<"Test constructor:\t\t";
//    Circulo c1(10);
//    Circulo c2(4);
//    Circulo c3(10);
//
//    if(c1.radio== 10
//        && c2.radio == 4
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test getTipo():\t\t\t";
//
//    if(c1.getTipo() == "Circulo"
//        && c2.getTipo() == "Circulo"
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test getArea():\t\t\t";
//
//    if(fabs(c1.getArea() - 314.0)<0.00001
//        && fabs(c2.getArea() - 50.24)<0.00001
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
//    cout<<"Test getPerimetro():\t\t";
//    if(fabs(c1.getPerimetro() - 62.8)<0.00001
//       && fabs(c2.getPerimetro() - 25.12)<0.00001
//        )
//    {
//        nota+=1;
//        cout<<"Correcto"<<endl;
//    }else
//    {
//        cout<<"Incorrecto"<<endl;
//    }
//
    cout<<endl<<"Nota: "<<nota<<"/7"<<endl;
}
