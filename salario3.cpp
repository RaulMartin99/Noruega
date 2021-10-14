#include <iostream>
using namespace std;
int main () {
	
	const double IRPF = 0.18 , s_social = 0.05 , desempleo = 0.0155 , f_profesional = 0.001;
	double retencion;
	double gasto_agua;
	double gasto_gas;
	double gasto_luz;
	double gasto_internet;
	double gasto_comida;
	double gasto_gasolina;
	double gasto_ocio;
	double hipoteca;
	double salario_bruto;
	double nomina;
	double gastos_totales;
	
	cout<< "Introduce tu nomina";
	cin>> nomina;
	cout<< "Introduce factura del agua";
	cin>> gasto_agua;
	cout<< "Introduce factura del gas";
	cin>> gasto_gas;
	cout<< "Introduce factura de la luz";
	cin>> gasto_luz;
	cout<< "Introduce factura de internet";
	cin>> gasto_internet; 
	cout<< "Introduce factura de comida";
	cin>> gasto_comida;
	cout<< "Introduce factura de gasolina";
	cin>> gasto_gasolina;
	cout<< "Introduce factura de ocio";
	cin>> gasto_ocio;
	cout<< "Introduce factura de la hipoteca";
	cin>> hipoteca;
	

	salario_bruto =  nomina - (s_social * nomina + desempleo * nomina + f_profesional * nomina + nomina * IRPF);
	cout<< "Tu salario bruto es" << salario_bruto;
	gastos_totales = salario_bruto - (gasto_agua + gasto_gas + gasto_luz + gasto_internet + gasto_comida + gasto_gasolina + gasto_ocio + hipoteca);
	cout<< "Tus gastos son" << gastos_totales;

}

	

	
