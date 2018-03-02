#include <cstdlib>
#include <iostream>
#include "Cercle.h"
#include "Ellipse.h"
#include <vector>
#include <typeinfo>
using namespace std;

void Ellipse1(int &cont, float radi1, float radi2){
    Ellipse e = Ellipse(radi1, radi2);
    cont++;
    cout<<endl<<"L'area d'aquesta ellipse és de "<<e.getArea()<<endl;
}

void Cercle1(int &cont, float radi){
        Cercle c;
        c = Cercle(radi);
        cont++;
        cout<<endl<<"L'area d'aquest cercle és de "<<c.getArea()<<endl;
    }
bool ProvaRadi(float radi){
    if (radi<= 0){
        cout<< radi <<" es un radi invalid"<<endl;
                return false;
    }
    else{
        return true;
    }
}
void AfegirFigura(char ident, int &contcercles, int &contellipses){
    switch(ident){
        
        case  'C':
            float radi;
            cin>>radi;
            while(!ProvaRadi(radi)){
                cout<<"Introdueix un radi valid: "<<endl;
                cin>>radi;
            }
            Cercle1(contcercles, radi);
            break;
           
        case 'E':
            float radi1, radi2;
            cin>>radi1>>radi2;
            while(!ProvaRadi(radi1) || !ProvaRadi(radi2)){
                cout<<"Introdueix uns radis vàlids"<<endl;
                cin>>radi1>>radi2;
            }
            Ellipse1(contellipses, radi1, radi2);
            break;
        default:
            cout<<"Identificacio de figura invalida"<<endl<<endl;
            std::cin.ignore(1000,'\n');//Creem que 1000 caracters es més que suficient
            break;
    }
    
}
int main(int argc, char** argv) {
    int contcercles = 0, contellipses = 0, opcio;
    char identificador;
    string vec_opt[]={"Sortir","Afegir Figura", "Glossari de figures", "Llegir dades d'un fitxer"};
    vector <string> opt(vec_opt,vec_opt+4);
    
    cout <<"***Inici*** "<<endl; 
    do{        
        cout <<endl <<"Hola, que vols fer?"<<endl;
        for(int i=0;i<opt.size();i++){
            cout<<i + 1<<". "<<vec_opt[i]<<endl;
        }
        cin >> opcio;
        while(!cin>>opcio){
            cin.clear();
            std::cin.ignore(1000, '\n');//Creem que 1000 caracters es més que suficient
            cout<<"Error, has d'elegir una de les opcions donades"<<endl<<endl;
        }
        switch(opcio){
            case 1:
                cout<<"***Fi***"<<endl;
                break;
            case 2:
                cout<<"Entra les dades de la teva figura ( tipus[C o E] data1 data2[buit si el tipus es C] )"<<endl;
                cin >> identificador;
                AfegirFigura(identificador, contcercles, contellipses);
                break;
            
            case 3:
                cout<<"Tens "<<contcercles<<" cercles i " <<contellipses<<" ellipses "<<endl;
                break;
            case 4:
                
                cout<<""<<endl;
                        break;
            default:
                cout<<"Error, has d'elegir una de les opcions donades"<<endl<<endl;
                std::cin.ignore(1000,'\n');
        
        
        }
    }while(opcio!=1);
}



