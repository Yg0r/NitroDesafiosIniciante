#include <iostream>
using namespace std;

int main() {	

	int horasEmSegundos = 3600;
	int entrada = 0;

	cin >> entrada;

	int horas = entrada / horasEmSegundos;

	entrada %= horasEmSegundos;

	int minutos = entrada / 60;

	int segundos = entrada % 60;

	cout << horas << "h " << minutos << "m " << segundos << "s";

	return 0;
}