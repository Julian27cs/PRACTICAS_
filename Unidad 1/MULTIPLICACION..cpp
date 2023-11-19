#include<iostream>
using namespace std;
int num1,num2;
int main(){
	char a;
	int suma,resta,multi;
	cout<<"(a)suma";
	cout<<"(b)resta";
	cout<<"(c)multi";
	cin>>a;
	switch (a){
		case'a':
		cout<<"digita el primer numero";
		cin>>num1;
		cout<<"digita el segundo numero";
		cin>>num2;
		suma=(num1+num2);
		cout<<"el resultado es"<<suma;
		break;
	    	case'b':
			cout<<"digita el primer numero";
			cin>>num1;
			cout<<"digita el segundo numero";
			cin>>num2;
			resta = num1-num2;
			cout<<" el resultado es "<<resta;
			break;
			case'c':
			    cout<<"digita el primer numero";
				cin>>num1;
				cout<<"digita el segundo numero";
				cin>>num2;
				multi = num1*num2;
				cout<<" el resultado es "<<multi;
				break:
	   	  defualt:
				  	 cout<<"no es ninguna operacion basica";
		    break:
			return 0;
				  	
				
					
	}
} 
