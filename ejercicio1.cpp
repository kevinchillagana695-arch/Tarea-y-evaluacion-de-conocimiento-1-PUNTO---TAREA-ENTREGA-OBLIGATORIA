#include <iostream>
using namespace std;
int main() {
	int matriz[3][3];
	string vehiculos[3]={"Automovil","Moto     ","Camioneta"};
	string anio[3]={"2020","2021","2022"};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Ingrese la cantidad de vehiculos para "<<vehiculos[i]<<" en el anio "<<anio[j]<<" ["<<i<<"]["<<j<<"]:";
			cin>>matriz[i][j];
		}		
	}
	cout<<"\nRegistro de vehiculos"<<endl;
	cout<<"         | 2020   | 2021  | 2022  |\t"<<endl;
	for(int i=0;i<3;i++){
		cout<<vehiculos[i]<<"|\t";
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" | \t";
		}	
		cout<<endl;
	}
	cout<<"\nCuantos automoviles se registraron en el 2021"<<endl;
	for (int i = 0; i < 3; i++) {
	    for (int j = 0; j < 3; j++) {
	        if (i== 0 && j == 1) {
	        	cout<<matriz[i][j]<<endl;

	        }
	    }
	}
	cout<<"\nCalcular y mostrar el total de vehiculos registrados."<<endl;
	int total=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			total+=matriz[i][j];
		}		
	}
	cout<<"El total de vehiculos registrados es:"<<total;
	return 0;
}
