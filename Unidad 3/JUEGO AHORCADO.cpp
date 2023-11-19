#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(){
	
	char frase[60],rep[100],temporal[100];
	char pal;
	int longitud, a, o, inicial, acertado = 0, temp = 0,oportunidades = 9;
	int repetido=0,gano=0;
	cout<<"Bienvenido al juego del ahorcado \n\n";
	cout<<" INGRESA LA PALABRA PARA ADIVINAR: ";
	gets(frase);
	system ("cls");
	longitud = 0;
	inicial = 0;
	o = 0;
	rep[0] = ' ';
	rep[1] = '\0';
	do{
		
		system ("cls");
		temp=0;
		if(inicial == 0)
		{
			for(a=0;a<strlen(frase);a++)
			{
				if(frase[a] == ' ')
					{
				temporal[a] = ' ';
				longitud++;
				}
				else{
					temporal[a] = '_';
					longitud++;
				}
			}
		}
		
		inicial = 1;
		temporal[longitud] = '\0';
		for(a=0;a<strlen(rep);a++)
		{
			if(rep[a] == pal)
			{
				repetido = 1;
		        break;
			}
			 else
		    {
	    	  repetido = 0;
		  }
		}
		if(repetido == 0)
		{
			for(a=0;a<strlen(frase);a++)                  
			{
				if(frase[a] == pal)
				{
				temporal[a] = pal;
		        acertado++;
			    temp=1;
				}
			}
		}                                      
    if(repetido == 0)                                
	{
		if(temp == 0)
		{
			oportunidades = oportunidades - 1;
		}
		
	}
	else
	   {
        
           cout<<" ESA YA ESTA INSERTA OTRA ";
           cout<<"\n\n";
		}
		cout<<"\n";
		for(a=0;a<strlen(temporal);a++)                          
		{ 
			cout<<temporal[a];
		}
		cout<<"\n";
		if(strcmp(frase,temporal) == 0)               
		{
			gano = 1;
			break;
		}
		  cout<<"\n LETRAS ACERTADAS: "<<acertado;                     
		  cout<<"\n OPORTUNIDADES RESTANTES: "<<oportunidades;
		  cout<<"\n";
		  rep[o] = pal;
		  o++;
		  if (oportunidades==0)
		  {
		     break;
		  }
		  cout<<"INTRODUCE UNA LETRA: ";
		  cin>>pal;	   
	}
	while(oportunidades != 0);
	if(gano)
	{
		cout<<"\n\n FELICIDADES HAS GANADO";
	}
	else
	{
		cout<<"\n\n PERDISTE WE ";
	}
	cout<<"\n\n";
	cin.get();
	return 0;
    }
   	
	
