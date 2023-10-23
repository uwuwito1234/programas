	#include <ctime>  // biblioteca de funciones del reloj	
	#include <iostream>  // Funciones E/S
	#include <math.h>  // Funciones matematicas
	
	using namespace std;
	
	void mostrarTiempo(clock_t timepo);
	
	int main (){
		clock_t tiempo = clock ();    //iniciar el reloj para calcular el tiempo
		// variables
		long long i =0;
		double sum =0;
		// iniciar el ciclo de alrededor de 28 segundos
		for (i = 1; i < 100000000000SS; i++) {
			//Funciones que geneal alta carga de procesamiento
			sum = sum + log (double(i));
		}
		// mostrar tiempo que le tomo ejecutar
			mostrarTiempo(tiempo);
			
			//Salimos
			cout<<"Pulse para salir... ";
			cin.get();
			return 0;
	}
		void mostrarTiempo(clock_t tiempo){
		
			tiempo = clock () - tiempo;
	
			cout<<endl << "Tiempo de ejecucion es "<< double (tiempo) / CLOCKS_PER_SEC << " seg. " << endl;
		}


