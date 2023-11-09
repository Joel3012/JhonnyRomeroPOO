#include<iostream>
using namespace std;

int PrimeraMatriz[3][3];
int SegundaMatriz[3][3];
int matrizResultado[3][3];

void encabezado();
void menu();
void ingresarMatriz(int matriz[3][3]);
void MultiplicarMatrices(int PrimeraMatriz[3][3], int SegundaMatriz[3][3]);
void MostrarResultado();

int main() {
	encabezado();
	menu();
	return 0;
}

void encabezado() {
	cout << "Universidad de las Fuerzas Armadas ESPE" << endl;
	cout <<"Fecha:09/11/2023"<<endl;
	cout << "Alumno: Jhonny Joel Romero Lopez" << endl;
	cout << "Programacion Orientada a Objetos" << endl;
}

void menu() {
	int ingresomenu;
	do {
		cout << "Menu de opciones" << endl;
		cout << "1.- Multiplicacion de Matrices 3x3" << endl;
		cout << "2.- Salir" << endl;
		cin >> ingresomenu;
		while (ingresomenu <= 0 || ingresomenu > 2) {
			cout << "Esta opcion no existe, por favor vuelva a intentarlo" << endl;
			cin >> ingresomenu;
		}
		switch (ingresomenu) {
		case 1:
			cout << "Ingrese la primera matriz 3x3: Fila por Fila" << endl;
			ingresarMatriz(PrimeraMatriz);
			cout << "Ingrese la segunda matriz 3x3: Fila por Fila " << endl;
			ingresarMatriz(SegundaMatriz);
			MultiplicarMatrices(PrimeraMatriz, SegundaMatriz);
			MostrarResultado();
			break;
		case 2:
			cout << "Gracias por su visita" << endl;
			break;
		default:
			cout << "Esta opcion no existe" << endl;
		}
	} while (ingresomenu != 2);
}

void ingresarMatriz(int matriz[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> matriz[i][j];
		}
	}
}

void MultiplicarMatrices(int PrimeraMatriz[3][3], int SegundaMatriz[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matrizResultado[i][j] = 0;
			for (int k = 0; k < 3; k++) {
				matrizResultado[i][j] += PrimeraMatriz[i][k] * SegundaMatriz[k][j];
			}
		}
	}
}

void MostrarResultado() {
	cout << "Resultado de la multiplicacion:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrizResultado[i][j] << " ";
		}
		cout << endl;
	}
}


