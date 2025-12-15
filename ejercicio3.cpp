#include <iostream>
using namespace std;

struct Vehiculo{
	string placa;
	string marca;
	int anio;
	int valormatricula;
};

int main() {
	Vehiculo vehiculo[3];
	for(int i=0;i<3;i++){
		cout<<"Ingrese la placa del vehiculo "<<i+1<<":";
		cin>>vehiculo[i].placa;
		cout<<"Ingrese la marca del vehiculo "<<i+1<<":";
		cin>>vehiculo[i].marca;
		cout<<"Ingrese el anio del vehiculo "<<i+1<<":";
		cin>>vehiculo[i].anio;
		
		if(vehiculo[i].anio < 2020){
			vehiculo[i].valormatricula=150;
		}else if(vehiculo[i].anio <= 2022){
			vehiculo[i].valormatricula=100;
		}else{
			vehiculo[i].valormatricula=80;
		}	
	}
	cout << "\nPlaca\tMarca\tAnio\tValor_Matricula\n";
	    for (int i = 0; i < 3; i++) {
	        cout << vehiculo[i].placa << "\t"
	             << vehiculo[i].marca << "\t"
	             << vehiculo[i].anio << "\t"
	             << vehiculo[i].valormatricula << endl;
	    }
	return 0;
}
