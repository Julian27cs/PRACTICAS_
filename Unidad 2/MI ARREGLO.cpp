#include<iostream>
using namespace std;
int main (){
	int miarreglo[5];
	string nombres[3];
	miarreglo[0] = 10;
	miarreglo[1] = 20;
	miarreglo[2] = 30;
	miarreglo[3] = 40;
	miarreglo[4] = 50;
	
	//nombres
	
	nombres[0] = "zCRI CRI";
	nombres[1] = "JOVANA";
	nombres[2] = "JOSE";
	for(int b=0; b<=3; b++){
		cout<<"mis elementos:"<<b<<":"<<miarreglo[b]<<endl;
		
	}
	for(int p=0; p<=1; p++){
		cout<<"mis nombres de arreglo son:"<<nombres[p]<<endl;
	}
} 
