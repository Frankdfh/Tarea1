// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
//Explicacion: Utilize la funcion "top" para obtener el primer elemento de la pila

string getTope(stack<string> mi_pila)
{
    return mi_pila.top();
}

//devuelve la cantidad de elementos de "mi_pila"
//Explicacion: utilize la funcion "size" para obtener el tamañ de la pila
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size();
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
//Explicacion: utilize un ciclo while para recorrer la pila y si se encuentra "str" dentro de la pila
// devolver TRUE caso contrario devolver FALSE
bool existeEnPila(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty())
    {
        if(str==mi_pila.top())
            return true;
        mi_pila.pop();
    }
    return false;
}

//devuelve el elemento mayor de "mi_pila"
//Explicacion: Utilize 2 variables para poder identificar al numero mayor de la pila
// reemplazando el valor menor por el mayor mediante se recorre la pila
int getMayor(stack<int> mi_pila)
{
    int mayor=0;
    int num=0;
    while(!mi_pila.empty())
    {
        num=mi_pila.top();
        if(mayor<num)
        {
            mayor=num;
        }
        mi_pila.pop();
    }
    return mayor;
}

//devuelve el elemento menor de "mi_pila"
//Explicacion: Utilize una variable con un numero alto para compararlo con los demas y de esa manera
// encontrar el numero menor de la pila con un ciclo while
int getMenor(stack<int> mi_pila)
{
    int menor=100000000000;
    int num=0;
    while(!mi_pila.empty())
    {
        num=mi_pila.top();
        if(menor>num)
        {
            menor=num;
        }
        mi_pila.pop();
    }
    return menor;
}

//devuelve la cantidad de veces que se encuentra la letra 'a' minuscula en "mi_pila"
//Explicacion: Utilize una variable como contador para que cada vez que se encuentre
//la letra "a" se sume +1 de esa manera se optiene la cantidad de veces que se encuentra en la pila
int contarLetraA(stack<char> mi_pila)
{
    int contador=0;
    while(!mi_pila.empty())
    {
        if('a'==mi_pila.top())
        {
            contador++;
        }
        mi_pila.pop();
    }
    return contador;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
