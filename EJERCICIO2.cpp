/*Titulo :practico 1
Autor : Ricardo flores soruco
Descripcion: EJERCICIO 2,MENU.
Fecha: 2024-01-16
								ANALISIS

DEFINICION DEL PROBLEMA: se debe de crear un programa que funcione como menu el cual tenga las opciones de multiplicar
de dos y tres numeros, division de dos numeros, indicar el numeros mayor de 3 numeros,y solo se podra cerrar el programa con la tecla 's' o 'S'

DATOS DE ENTRADA : Se solicitara al usuario que ingrese a una de las opciones disponibles, se pedira ingresar datos numericos dos o tres numeros,

INFORMACION DE SALIDA : Se imprimira en pantalla los resultado que el usuario hayga escogido realizar.

VARIABLE : Se utilizaran las variables opcion, minuscula,COMO CHAR,las variables numero1,numero2,numero3,resultado,mayor;COMO DOUBLE

								DISEÑO

EL PROBLEMAS SE DIVIDIRA EN PEQUEÑOS PROBLEMAS PARA PODER REALIZARLO PASO A PASO :

- Se arran uso de las siguientes bibliotecas #include <iostream>, #include <conio.h> ,#include <cctype>

-#include <iostream> : Biblioteca estandar de C++ para poder utilizar las entradas y salida de datos

-#include <conio.h>  : Se utilizara para poder utilizar la function esperar tecla 

-#include <cctype>	 : Se utilizara para poder llamar a la funcion TOLOWER,
 la cual nos permite que el usuario puede colocar alguna letra y esta funcion aceptara tanto minuscula como mayuscula

-Se declararan variables de tipo char y double. las cuales las de tipo char seran las que se manejen en la funsion SWITCH y las DOUBLE para almacenar los numeros ingresados o resultados

-Se imprimira en pantalla las opciones disponible del menu,posteriormente la opcion elegida por el usuario se guardara en la variable minuscula

-Se hara uso del ciclo DO WHILE la cual nos permitira repetir las opciones del menu hasta que el usuario decida dar por terminado el programa 

-Se hara uso de la funcion SWITCH para poder mostrar las opciones disponibles del menu 
- Para la multiplicación se realizaran de la siguiente forma numero1*numero2 y numero3 en caso de tres numeros

- Para la division se realizaran de la siguiente forma el primer numero ingresado sera el dividendo y el segundo el divisor
se agregara la funcion if = para mostrar el resultado,else para generar un mensaje de error si se coloca al divisor 0 

-Para calcular el mayor de 3 número se utilizara la variable mayor en la cual se compararan con el signo del > y se hara uso del signo de ?
El signo de interrogación ? se utiliza como parte del operador ternario.

-Para salir se esta utilizando la funcion tolower las cual nos permite que la letra S sea aceptada como mayuscula o minuscula

PARA PULIR EL PROGRAMA :
se estan usando las funciones de _getch la cual nos permite esperar tecla y syste(cls)para limpiar pantalla
*/
#include <iostream>//Biblioteca estandar de C++
#include <conio.h>// necesario para utilizar el _getch()
#include <cctype> // para utilizar el tolower. nota: tambien se puede utilizar sin hacer uso de la libreria, pero lo recomendable es usar la libreria 
using namespace std;

int main(int argc, char *argv[]) 
{
	char opcion,minuscula;//estas variables solo seran usadas para la funcion switch
	double numero1,numero2,numero3,resultado,mayor;
	opcion = 0;//se inicializo en cero para que muestre la advertencia que aparecia "opcion no se esta inicializando para asignar a minuscula"
	
	do{
		minuscula = tolower(opcion);//Permitira que el usuario pueda salir con la letra S o s
		cout<<"ALUMNO : RICARDO FLORES SORUCO "<<endl<<endl;
		cout<<"   "<< "MENU"<<endl<<endl;
		cout<< "1:Multiplicación con 2 números "<<endl<<endl;
		cout<< "2:División con 2 números "<<endl<<endl;
		cout<< "3:Multiplicación con 3 números"<<endl<<endl;
		cout<< "4:Mayor de 3 números "<<endl<<endl;
		cout<< "S:Salir"<<endl;
		cin>>minuscula;
		
		switch(minuscula){
		case '1': 
			system("cls");//sirve para limpiar pantalla no es necesario libreria.
			cout<<"   "<<"MULTIPLICACION "<<endl<<endl;
			cout<<"ingrese el primer número "<<endl;
			cin>>numero1;
			cout<<"ingrese el segundo número "<<endl;
			cin>>numero2;
			resultado = numero1*numero2;
			cout<<"El resultado de la multiplicacion es de :"<<resultado<<endl<<endl;
			cout<<"Presion cualquier tecla para regresar al menu ";
			_getch();
			system("cls");
			break;
		case '2':
			system("cls");
			cout<<"   "<<" DIVISION "<<endl<<endl;
			cout<<"ingresa el dividendo "<<endl;
			cin>>numero1;
			cout<<"ingresa el divisor "<<endl;
			cin>>numero2;
			if (numero2 != 0){//se hara uso de la funcion if para dar la respuesta 
				resultado = numero1/ numero2;
				cout << "El resultado es: " << resultado <<endl<<endl;
			}else{//se dara el mensaje de error 
				cout<<"no se puede dividir entre cero "<<endl<<endl;
			}
			cout<<"Presion cualquier tecla para regresar al menu ";//permitira al usuario volver a la pantalla del menu
			_getch();// esperara que el usuario pricione cualquier tecla
			system("cls");//limpiara la pantalla para que se vuelva a mostrar las opciones del menu
			break;
		case '3':
			system("cls");
			cout<<"   "<<"MULTIPLICACION "<<endl<<endl;
			cout<<"ingrese el primer número "<<endl;
			cin>>numero1;
			cout<<"ingrese el segundo número "<<endl;
			cin>>numero2;
			cout<<"ingrese el tercer número "<<endl;
			cin>>numero3;
			resultado = numero1*numero2*numero3;
			cout<<"El resultado de la multiplicacion es de :"<<resultado<<endl<<endl;
			cout<<"Presion cualquier tecla para regresar al menu ";
			_getch();
			system("cls");
			break;
		case '4':
			system("cls");
			cout<<"MAYOR DE 3 MUNERO"<<endl<<endl;
			cout<<"ingrese el primer número "<<endl;
			cin>>numero1;
			cout<<"ingrese el segundo número "<<endl;
			cin>>numero2;
			cout<<"ingrese el tercer número "<<endl;
			cin>>numero3;
			system("cls");
			cout<<"MAYOR DE 3 MUNERO"<<endl<<endl;
			// se hara uso del operador ternario ? para asignar el valor a la variable mayor //esto depende de los numeros introducido por el usuario 
			mayor = (numero1 > numero2) ? ((numero1 > numero3) ? numero1 : numero3) : ((numero2 > numero3) ? numero2 : numero3);
			cout << "El mayor de los tres numeros es: " << mayor << endl;
			_getch();
			system("cls");
			break;
		case 's'://Se puede ejecutar sin estas opciones de case pero se esta utilizando para que no muestre el mensaje de default cuando se presione la tecla S o s
		case 'S':
			cout<<"Finalizando programa";break;
			
			default:cout<< "error vuelve a intentarlo."<<" "<<"presiona cualquier tecla"<<endl;
			_getch();
			system("cls");
			break;
		}	//switch
		/*el operador lógico && se utiliza para realizar una operación lógica de "Y" (AND) entre las dos condiciones.
		El operador && evalúa como verdadero si ambas condiciones a su izquierda y derecha son verdaderas. 
		nota: Si se puede utilizar una & pero al aser esto generara una advertencia lo ideal es utilizar las dos && //para no generar ninguna advertencia
		*/
	}while(minuscula !='S'&&minuscula !='s');
			
	return 0;
}

