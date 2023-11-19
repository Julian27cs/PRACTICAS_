#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main (){
	system("COLOR B0");
	const int numalumnos = 5;
	int asistencia [numalumnos];
		for(int i=0; i<numalumnos; i++){
		asistencia [i]=0;
		
	}
	cout<<"BIENVENIDO ASISTENCIA"<<endl;
	cout<<"REGISTRA ASISTENCIA"<<endl;
	cout<<"NOMBRE"<<endl;
	for(int i=0; i<numalumnos; i++){
	string nombre; 
	char asistio;
	cout<<"alumno: "<<i+1<<" : ";
	cin>>nombre;
	cout<<"SI ASISTIO (S/N)";
	cin>>asistio;
	if(asistio =='S' or asistio == 's'){
		asistencia[i] = 1;
		
	}
	
	}
	int faltas = 0;
	for(int i=0; i<numalumnos; i++){
		if(asistencia[i] == 1){
			faltas ++;
		}
	}
int acistencia = 0;
	for(int i=0; i<numalumnos; i++){
		if(asistencia[i] == 1){
			acistencia ++;
		}
}
	cout<<"numero de faltas"<<faltas<<endl;
	cout<<"numero de acistencia"<<acistencia<<endl;
	return 0;
}
