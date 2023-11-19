#include <iostream>
using namespace std;
 
int main(){
    int mes, dia;
    cout << "\t\t\tSIGNO ZODIACAL" << endl;
    cout << "(1)Enero \t(2)Febrero \t(3)Marzo \t(4)Abril" << endl;
    cout << "(5)Mayo \t(6)Junio \t(7)Julio \t(8)Agosto" << endl;
    cout << "(9)Septiembre \t(10)Octubre \t(11)Noviembre \t(12)Diciembre" << endl << endl;
    cout << "Ingrese la fecha de su cumpleaños (dia y mes):" << endl;
    cin >> dia >> mes;
     
    switch(mes) {
        
        case 1:
            if (dia < 21)
                cout << "acuario" << endl;
            else
                cout << "capricornio" << endl;
            break;
        
        case 2:
            if (dia < 21)
                cout << "Piscis" << endl;
            else
                cout << "acuario" << endl;
            break;
        
        case 3:
            if (dia < 21)
                cout << "aries" << endl;
            else
                cout << "picis" << endl;
            break;
            
        case 4:
            if (dia < 21)
            cout << "tauro" <<endl;
             else
            cout << "aries" << endl;
            break;
            
        case 5:
            if (dia < 21)
            cout << "geminis" << endl;
             else
            cout << "tauro"<< endl;
            break;
            
        case 6:
            if (dia <30)
            cout << "cancer" << endl;
             else
            cout <<"geminis" << endl;
            break;
            
        case 7:
            if (dia < 21)
            cout << "leo" << endl;
             else
            cout << "cancer"<<endl;
            break;
            
        case 8:
            if(dia < 21)
            cout  <<" virgo" << endl;
             else
            cout <<"leo" << endl;
            break;
            
        case 9:
            if  (dia< 21)
            cout << "libra"<<endl;
             else
            cout<<"virgo"<<endl;
            break;
            
        case 10:
            if(dia < 21)
            cout<<"escorpio"<<endl;
             else
            cout<<"libra"<<endl;
            break;
            
        case 11:
            if(dia < 21)
            cout<<"sagitario"<<endl;
             else
            cout<<"escorpio"<<endl;
            break;
            
        case 12:
            if(dia < 21)
            cout<<"capricornio"<<endl;
             else
            cout <<"sagitario"<<endl;
        
        default:
            cout << "INGRESE UNA FECHA VALIDA" << endl;
    }
 
    cin.ignore();
    return 0;
}
