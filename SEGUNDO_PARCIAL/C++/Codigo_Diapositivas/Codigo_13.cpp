#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

#define dia_ref 1
#define mes_ref 1 
#define anio_ref 2022
#define diastotales (365*2022+1)

class Fechas{
	public:
    int Cdia;
    int Cmes;
    int Canio;
    int DiasDiferencia;
    
    Fechas(){
        this-> Cdia=0;
        this-> Cmes=0;
        this-> Canio=0;
        this-> DiasDiferencia=0;
    }

    int IngresarDia(){
    	while(true){
	    	printf("Ingrese el dia: ");
	    	cin>>Cdia;
	    	if(Cdia<1 || Cdia>31){
	    		printf("Dia invalido (1-31) \n");
	    	}
	    	else{
	    		return Cdia;
	    	}
    	}
    }

    int IngresarMes(){
       	while(true){
   	    	printf("Ingrese el mes: ");
   	    	cin>>Cmes;
   	    	if(Cmes<1 || Cmes>12){
   	    		printf("Mes invalido (1-12) \n");
   	    	}
   	    	else{
   	    		return Cmes;
   	    	}
       	}
    }
    
    int IngresarAnio(){
       	while(true){
   	    	printf("Ingrese el anio: ");
   	    	cin>>Canio;
   	    	if(Canio<1){
   	    		printf("No existe un anio negativo\n");
   	    	}
   	    	else{
   	    		return Canio;
   	    	}
       	}
     }

     void Menu_Fechas(){
     	printf("Calculadora de fechas desde el 1 de enero de 2022\n");
     	this-> IngresarDia();
     	this-> IngresarMes();
     	this-> IngresarAnio();
     }

     //Calculos
     int FechaADias(int dia, int mes, int anio){
         int diasTotales=(365*anio)+30*(mes-1)+dia;
         DiasDiferencia=diasTotales-diastotales;
         if(DiasDiferencia<0){
         	DiasDiferencia=abs(DiasDiferencia);
         	return DiasDiferencia;
         }
         else{
         	return	DiasDiferencia;
         }
     }
     
     void MostrarDiferencias(){
         this-> FechaADias(Cdia,    Cmes,    Canio);
         printf("Dias diferencia son %d\n",  DiasDiferencia);
         printf("Meses diferencia son %.2f\n", DiasDiferencia/30.0);
         printf("Anios diferencia son %.2f\n", DiasDiferencia/365.0);
     }
};

int main(){
    Fechas Dates;
    Dates.Menu_Fechas();
    Dates.MostrarDiferencias();
    return 0;
}
