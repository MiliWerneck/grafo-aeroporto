#include "./include/grafo.hpp"

int main() {

	Grafo *grafo = new Grafo(10);

	grafo->insere(0, 2);
	grafo->insere(0, 1);
	grafo->insere(1, 0);
	grafo->insere(1, 4);
	grafo->insere(1, 5);
	grafo->insere(2, 0);
	grafo->insere(2, 3);
	grafo->insere(3, 2);
	grafo->insere(4, 1);
	grafo->insere(4, 5);
	grafo->insere(4, 6);
	grafo->insere(5, 1);
	grafo->insere(5, 4);
	grafo->insere(5, 6);
	grafo->insere(5, 7);
	grafo->insere(6, 4);
	grafo->insere(6, 5);
	grafo->insere(6, 7);
	grafo->insere(7, 6);
	grafo->insere(7, 5);

	grafo->print_grafo();
	cout << grafo->get_E() << endl;
}