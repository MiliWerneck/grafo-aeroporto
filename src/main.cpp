#include "./include/grafo.hpp"
#include "./include/read.hpp"

int main() {

	Read r;
	vector <Vertice> vertices;

	r.readEntrada(&vertices);

	Grafo *grafo = new Grafo(vertices);
	queue<pair<string, string>> entradas;

	r.readInsercao(&entradas);

	while (entradas.size() != 0) {
		grafo->insere(entradas.front().first, entradas.front().second);
		grafo->insere(entradas.front().second, entradas.front().first);
		entradas.pop();
	}

	Vertice origem;
	Vertice destino;
	origem.set_sigla("CON");
	destino.set_sigla("DOH");
	grafo->BFS(origem, destino);

	// grafo->print_grafo();
	cout << endl;
	cout << grafo->get_V() << " vértices" << endl;
	cout << grafo->get_E() << " arestas" << endl;
}
