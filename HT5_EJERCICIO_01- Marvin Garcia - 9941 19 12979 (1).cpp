#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;


main(){


	int opt;
	char zona[5];
	char tipo[5];	
	
	
	cout<<"\n\n\t\t--------------- Venta de Terrenos ---------------\n";
	cout<<"\n\t Elija la categoria del terreno a comprar:\n";
	cout<<"\n\t\t 1. Comercial";
	cout<<"\n\t\t 2. Residencial";
	
		cout<<"\n\n\tOpcion: "; cin>>opt;
		
		if(opt == 1){
			system("cls");
			cout<<"\n\n\t\t Usted Elijio 'Comercial' -- Elija la Zona y Tipo de Inmueble:\n";
			
				cout<<"\n\tZonas:";
				cout<<"\n\t\t-----------------------------------------------------------------------";
				cout<<"\n\t\t 1. Zona A\n";
				
					cout<<"\n\t\tTipo:";
					cout<<"\n\n\t\t 1. Terreno ($ 2250)";
					cout<<"\t 2. Casa ($ 2500)";
					cout<<"\t 3. Departamento ($ 2100)";
					
				cout<<"\n\t\t -----------------------------------------------------------------------";	
				
				cout<<"\n\n\t\t 2. Zona B\n";
				
					cout<<"\n\t\tTipo:";
					cout<<"\n\n\t\t 1. Terreno ($ 1300)";
					cout<<"\t 2. Casa ($ 1500)";
					cout<<"\t 3. Departamento ($ 1200)";
					
				cout<<"\n\t\t -----------------------------------------------------------------------";
			
			cout<<"\n\n\n\tZona: "; cin>>zona;
			cout<<"\n\tTipo: "; cin>>tipo;
			
				
			
		}else if(opt == 2){
			system("cls");
			cout<<"\n\n\t\t Usted Elijio 'Residencia' -- Elija la Zona y Tipo de Inmueble:\n";
			
				cout<<"\n\tZonas:";
				cout<<"\n\t\t-----------------------------------------------------------------------";
				cout<<"\n\t\t 1. Zona A\n";
				
					cout<<"\n\t\tTipo:";
					cout<<"\n\n\t\t 1. Terreno ($ 2100)";
					cout<<"\t 2. Casa ($ 2500)";
					cout<<"\t 3. Departamento ($ 2100)";
					
				cout<<"\n\t\t -----------------------------------------------------------------------";	
				
				cout<<"\n\n\t\t 2. Zona B\n";
				
					cout<<"\n\t\tTipo:";
					cout<<"\n\n\t\t 1. Terreno ($ 1500)";
					cout<<"\t 2. Casa ($ 1600)";
					cout<<"\t 3. Departamento ($ 1300)";
					
				cout<<"\n\t\t -----------------------------------------------------------------------";
				
				cout<<"\n\n\t\t 2. Zona C";
				
					cout<<"\n\t\tTipo:";
					cout<<"\n\n\t\t 1. Terreno ($ 1100)";
					cout<<"\t 2. Casa ($ 1300)";
					cout<<"\t 3. Departamento ($ 1000)";
					
				cout<<"\n\t\t -----------------------------------------------------------------------";
			
			cout<<"\n\n\n\tZona: "; cin>>zona;
			cout<<"\n\tTipo: "; cin>>tipo;
				
			
			
		}else{
			system("cls");
			cout<<"\n\n\t\t ###### Opcion Incorrecta ###### ";
			
		}
	

getch();
}
