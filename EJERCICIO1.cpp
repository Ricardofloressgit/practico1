/*Titulo :PRACTICO N#1
Autor : Ricardo flores soruco
Descripcion:DEFINICIONES DE ASIGNACIONES
Fecha: 2024-01-16
							ANALISIS
DEFINICION DEL PROBLEMA : se debe de realizar un programa en el que muestre si los valores asignados estan dentro de sus parametros establecidos
y mostrar la convercion si es correcta o incorrecta y comentar el porque es correcta o incorrecta

DATOS DE ENTRADA:Se solicitara al usuario ingresar la opcion que desee visualizar 

INFORMACION DE SALIDA :Se mostrar en pantalla el resultado,la convercion si es correcta o incorrecta y  su comentario del porque.

VARIABLES: Se definiran las variables de tipos: Int n1,n2,resp;,unsigned int nn1,nn2;,double d1,d2;,char c1;,bool b1;//las variables ya fueron definidas 
							DISEÑO
EL PROBLEMAS SE DIVIDIRA EN PEQUEÑOS PROBLEMAS PARA PODER REALIZARLO PASO A PASO :

-Se hara uso de las siguientes libreriaas #include <iostream>,#include <conio.h> para empezar el proceso

-las variables ya fueron definidas de tipos y valores.

-Se hara uso del ciclo DO WHILE para que las opciones se muestren cuantas veces el usuario lo desee

- Se imprimira el nombre del estudiante,posteriormente se montrara las opciones disponibles para poder visualizar los resultados

-Se imprimera los resultados de la opcion que el usuario haiga elegido

- Para serar el programa se utilizara 0 cualquier otra tecla que no se muestre en el menu, retornara al menu principal

*/
#include <iostream>// Libreria estandar de C++ en la cual se puede usar las entradas y salidas de datos e informacion
#include <conio.h>// es necesario para usar el esperar tecla 
using namespace std;// el uso de espacio de nombre para STD de la I/O


	int main(int argc, char *argv[]) 
	{
		
		/* los parametros de los tipos de datos:
		valores constantes 
		int = -2,147,483,648 a 2,147,483,647
		unsigned int= 0 a 4,294,967,295
		double = 1.7 x 10-308 a 1.7*10+308(15 dec 
		char = -128 a 127	
		bool = 0 si es falso y cualquier numero difernte de 0 es positivo
		*/
		int n1,n2;
		unsigned int nn1,nn2;
		double d1,d2,primer,segundo,tercero_char ;
		char c1,resp;
		bool b1;
		//variables con parametros establecidos
		primer = 2147483647;
		segundo = 42949672995;
		tercero_char = 127;
		// Aaignacion de valores 
		n1=2147483645;//correcto //esta dentro del parametro
		nn1=n1+3;//correcto //esta dentro del parametro
		d1=c1+n1;//incorrecto//esta dentro del parametro
		c1=n1+2;//incorrecto // mustra vacio ¿porque?
		b1=-1000;//correcto // su respuesta es positivo ya que//para ser positivo debe de ser diferente de cero
		/*PRUEBA PARA VISUALIZAR EL RESULTADO
		cout<<n1<<" "<<"1"<<endl;
		cout<<nn1<<" "<<"2"<<endl;
		cout<<d1<<" "<<"3"<<endl;
		cout<<c1<<" "<<"4"<<endl;
		cout<<b1<<" "<<"5"<<endl;*/
		do{
			
			cout<< "ALUMNO : Ricardo Flores Soruco "<<endl<<endl;
			cout<<"ingrese un numero"<<endl<<endl;
			cout<<"1: Ver resultado de la primera asignacion n1 "<<endl<<endl;
			cout<<"2: Ver resultado de la segunda asignacion nn1 "<<endl<<endl;
			cout<<"3: Ver resultado de la tercera asignacion d1 "<<endl<<endl;
			cout<<"4: Ver resultado de la cuarta asignacion c1 "<<endl<<endl;
			cout<<"5: Ver resultado de la Quinta asignacion b1 "<<endl<<endl;
			cout<<"0:salir"<<endl;
			cin>>resp;
				switch(resp){
					
					case '1': 
					cout<<"el resultado de la primera asignacion es : "<<endl;//imprimira el encabezado
					cout<<"Resultado"<<"     "<<"coversion"<<endl;//simula las cabezeras de la tabla
					cout<<"================================="<<endl;// solo es un separador como una linea horizontal
					cout<<n1<<"    "<<"CORRECTO"<<endl<<endl;// se mostrara el contenido de la variable. espacio y a direccion de conversion a lineas de abajo mostrara el resultado 
					cout<<"El resultado es correcto ya que el valor asignado no excede de los parametros establecidos en el tipo de dato de int "<<endl;//comentario o el porque de la conversion
					_getch();//esperar tecla  
					system("cls");//limpiar pantalla
			
					break;
					case '2': cout<<"el resultado de la segunda asignacion es : "<<endl;
					cout<<"Resultado"<<"     "<<"coversion"<<endl;
					cout<<"================================="<<endl;
					cout<<nn1<<"    "<<"CORRECTO"<<endl<<endl;
					cout<<"El resultado es correcto ya que el valor asignado no excede de los parametros establecidos en el tipo de dato de unsigned int "<<endl;
					_getch();
					system("cls");
					break;
					case '3': cout<<"el resultado de la tercera asignacion es : "<<endl;
					cout<<"Resultado"<<"     "<<"coversion"<<endl;
					cout<<"================================="<<endl;
					cout<<d1<<"    "<<"CORRECTO"<<endl<<endl;//la variable c1 no contiene valor 
					cout<<"El resultado es correcto, el valor esta dentro del los parametros establecidos en el tipo de dato de double "<<endl;
					cout<<"por motivo que la variable c1 no esta inicializada, al no estar inicializada Habría un comportamiento indefinido en C++"<<endl;
					cout<<"el valor específico de c1 no se ha proporcionado y es indeterminado. El resultado : 2.14748e+009"<<endl; 
					cout<<"es simplemente la representación en notación científica del valor numérico resultante de la operación,"<<endl;
					cout<<"basado en la indeterminación de c1 y la conversión implícita a int antes de la suma..";
					_getch();
					system("cls");
					break;
					case '4': cout<<"el resultado de la cuarta asignacion es : "<<endl;
					cout<<"Resultado"<<"     "<<"coversion"<<endl;
					cout<<"================================="<<endl;
					cout<<c1<<"             "<<"INCORRECTO"<<endl<<endl;
					cout<<"El resultado es incorrecto ya que el valor asignado excede a los parametros establecidos en el tipo de dato de char "<<endl;
					cout<<"Se realza la operacion modulo la cual se realizara de la siguiente forma : 2147483647 % 256 "<<endl;
					cout<<"el residuo sera : 255\nlo cual char adaptara a esas cantidad dentro de su parametros llegando a sus limites ida y vuelta"<<endl;
					cout<<"por ende el resultado caera en el 0 el cual el cero en la tabla ASCII es un caracter nulo";
					_getch();
					system("cls");
					break;
					case '5': cout<<"el resultado de la Quinta asignacion es : "<<endl;
					cout<<"Resultado"<<"     "<<"coversion"<<endl;
					cout<<"================================="<<endl;
					cout<<"  "<<b1<<"           "<<"CORRECTO"<<endl<<endl;
					cout<<"El resultado es positivo ya que en el tipo de datos bool si el numero asignado es diferente de cero sera positivo o VERDADERO"<<endl;
					_getch();
					system("cls");
					break;
					case '0': cout<<"opcion salir: "<<endl<<endl;
					cout<<"Finalizando programa "<<endl;
					break;
					default: cout<<"selecione una opcion disponible "<<endl<<endl;
					cout<<"presione culaquier tecla para regresar "<<endl;
					_getch();
					system("cls");
					break;
					};
					
				}while(resp!='0');
		
		
		
		return 0; 
}

