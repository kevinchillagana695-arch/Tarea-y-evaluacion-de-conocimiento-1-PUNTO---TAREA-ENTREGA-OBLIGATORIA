#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

struct Vehiculos{
	char placa[8];
	string marca;
	int tipo;
	int anio;
	int valormatricula;
};
int main() {
	Vehiculos vehiculos[3];
	int conteo[4]={0,0,0,0};
	int total=0;
	
	for(int i=0;i<3;i++){
		cout<<"===Dato del vehiculo "<<i+1<<"=== \n"<<endl;
		bool placavalida;
		do{
			placavalida=true;
			cout<<"Ingrese la placa del "<<i+1<<":";
			cin>>vehiculos[i].placa;
			if(strlen(vehiculos[i].placa)!=7){
				placavalida=false;
			}else{
				for(int j=0;j<7;++j){
					vehiculos[i].placa[j]=toupper(vehiculos[i].placa[j]);	
				}
				for(int j=0;j<3;j++){
					if(!isalpha(vehiculos[i].placa[j])){
						placavalida=false;
						break;
					}
				}
				for(int j=3;j<7&&placavalida;j++){
					if(!isdigit(vehiculos[i].placa[j])){
						placavalida=false;
						break;
					}
				}
			}
			if (!placavalida)
			    cout << "Placa invalida. Intente nuevamente.\n";
		}while(!placavalida);
		
		cout<<"Ingrese la marca del "<<i+1<<":";
		cin>>vehiculos[i].marca;
		
		do{
			cout<<"Ingrese el tipo del "<<i+1<<":";
				cin>>vehiculos[i].tipo;
		}while(vehiculos[i].tipo<1||vehiculos[i].tipo>3);
		conteo[vehiculos[i].tipo]++;
		
		cout<<"Ingrese el anio del "<<i+1<<":";
		cin>>vehiculos[i].anio; 
		if(vehiculos[i].anio<2020){
			vehiculos[i].valormatricula=150;
		}else if(vehiculos[i].anio<=2022){
			vehiculos[i].valormatricula=100;
		}else{
			vehiculos[i].valormatricula=80;
		}	
		total+=vehiculos[i].valormatricula;
	}
	
	cout << "\nPlaca\t\tMarca\t\tTipo\t\tAnio\t\tValor_Matricula\n";
		for (int i = 0; i < 3; i++) {
		    cout<<vehiculos[i].placa << "\t\t"
		        <<vehiculos[i].marca << "\t\t";
		    if(vehiculos[i].tipo == 1) cout << "Auto\t\t";
			else if(vehiculos[i].tipo == 2) cout << "Moto\t\t";
			else cout << "Camioneta\t\t";
		    cout<< vehiculos[i].anio << "\t\t"
		        << vehiculos[i].valormatricula << endl;
	}	        
		        
	cout<<"\nConteo por tipo (Autos: 2, Motos: 1, Camionetas: 0)"<<endl;	        
	cout << "Autos: " << conteo[1] << endl;
	cout << "Motos: " << conteo[2] << endl;
	cout << "Camionetas: " << conteo[3] << endl;
	

	cout<<"Total recaudado por matriculacion:"<<total;
	
	
	return 0;
}
