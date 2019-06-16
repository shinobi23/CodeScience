#include <iostream> /*cout, cin*/
#include <conio.h> // getch();
#include <math.h> /*pow(double a, double b), sqrt(double x), */

//Funcion para calcular resultado con signo positivo
float ecuacion_cuadratica_positive(float a, float b, float c) {
      float x=-b+sqrt(pow(b,2)-4*a*c)/(2*a);
				return x/(2*a); //Reduccion de errores...
							}
//Funcion para calcular resultado con signo negativo												
float ecuacion_cuadratica_negative(float a, float b, float c) {
      float y=-b-sqrt(pow(b,2)-4*a*c)/(2*a);
				return y/(2*a); //Reduccion de errores...
			}
			
//Calcular el discriminante
delta_discriminante(float a, float b, float c) {
	float delta=pow(b,2)-4*(a*c);
	return delta;
												}


//scope			
using namespace std;

int main(void) {
	/*  Declaracion de variables como numeros que pertecen al conjunto de
	    de los numeros reales
	*/
	float a,b,c;
	do {
	//Asignar valores
	cout<<"[a] Introduzca el primer termino => ";
	cin>>a;
	cout<<"[b] Introduzca el segundo termino => ";
	cin>>b;
	cout<<"[c] Introduzca el tercero termino => ";
	cin>>c;
	//llama a la funcion
	float x= ecuacion_cuadratica_positive(a,b,c);
	float y= ecuacion_cuadratica_negative(a,b,c);
	float delta=delta_discriminante(a,b,c);
	/*
	  De acuerdo a la norma IEEE una variable cuyo valor es Nan
	  tiene la propiedad de que las comparaciones entre si mismos
	  siempre son falsas
	*/
	if (x != x || y != y){
		/*
		//cout<<"Operacion no valida"<<endl;*/
	    cout<<"Operacion no valida, no existe solucion"<<endl;
							}
    //Muestra el resultado si y solo si la ecuacion tiene solucion							
	else {
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;	
	cout<<"[ + ] Result Cuadratic Form : "<<x<<endl;
	cout<<"[ - ] Result Cuadratic Form : "<<y<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	cout<<"[ Detalles Discrimintante ]"<<endl;
	if (delta>0) {
		cout<<"dos raices reales distintas. la parabola corta el eje de las abscisas en dos puntos diferentes."<<endl;
					}
	else 
	if (x=y){
		cout<<"una raiz real, pero de multiplicidad dos o doble. La parabola solo toca en un unico punto al eje de las abscisas."<<endl;
				}
	else 
	if (delta<0){
		cout<<"dos raices complejas conjugadas. La parabola no corta al eje de las abscisas.(¡unidad imaginaria!)"<<endl;
				}
	cout<<"-----------------------------------------------------------------------------------------------------"<<endl;
	
				}
				  } while (1>0);	
					}
