#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
	int digitos;
	cout<<"Ingrese cuantos digitos debe tener la placa:";
	cin>>digitos;
	char placa[digitos];
	
	cout<<"Ingrese su placa:";
	cin>>placa;
	bool valida=true;
	
	if(strlen(placa)!=7){
		valida=false;
	}else{
		for(int i=0;i<7;i++){
			placa[i]=toupper(placa[i]);
			if(i<3){
				if(!isalpha(placa[i])){
					valida=false;
					break;
				}
			}
			else{
				if(!isdigit(placa[i])){
					valida=false;
					break;	
				}
			}
		}	
	}
	if (valida)
	    cout << "La placa " <<placa<<" es valida." <<endl;
	else
	cout <<"La placa "<< placa<< " no es valida." <<endl;
	return 0;
}
