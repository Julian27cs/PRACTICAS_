#include<iostream>
using namespace std;
int dia;
int main(){
	cout<<"dame el numero del dia de la semana";
	cin>>dia;
	switch(dia){
		case 1:
		cout<<"lunes";
		break;
		case 2:
		cout<<"martes";
		break;
		case 3:
		cout<<"miercoles";
		break;
		case 4:
		cout<<"jueves";
		break;
		case 5:
		cout<<"viernes";
		break;
		case 6:
		cout<<"sabado";
		break;
		case 7:
		cout<<"domingo";
		break;
										
		defaualt:
	    cout<<"no es ningun dia de la semana";
	}
}
