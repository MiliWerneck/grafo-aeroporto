#include "./include/grafo.hpp"

Grafo::Grafo(vector <Vertice> vertices) {
	this->set_V(vertices.size());
	this->set_E(0);
	this->init(vertices);
}

void Grafo::init(vector <Vertice> vertices) {
	for (auto v : vertices)
		set_adj(v);
}

void Grafo::insere(string v1, string v2) {
	unordered_map<string, Vertice> ::iterator it_origem;
	it_origem = this->adj.find(v1);

	if (it_origem != this->adj.end()) {
		unordered_map<string, Vertice> ::iterator it_destino;
		it_destino = this->adj.find(v2);
		if (it_destino != this->adj.end()) {
			it_origem->second.set_prox(it_destino->second);
		}
		set_E(get_E() + 1);
	}
}

// void Grafo::BFS(Vertice s) {
// 	queue<int> f;

// 	int cor[get_V()]; //0 Branco, 1 Cinza, 2 Preto
// 	int dist[get_V()];
// 	int pai[get_V()]; // -1 == NULL

// 	for (int i = 0; i < get_V(); i++)
// 		if (i != s.get_sigla()) {
// 			cor[i] = 0;
// 			dist[i] = -1; //infinito
// 			pai[i] = -1; // não tem pai ainda
// 		}

// 	cor[s.get_sigla()] = 1;
// 	dist[s.get_sigla()] = 0;
// 	pai[s.get_sigla()] = -1;unordered_map<int, Vertice> adj;
// 	f.pop();

// 	vector<Vertice> v = this->adj.find(u)->second.get_prox();
// 	for (auto valor : v) {
// 		if (cor[valor.get_sigla()] == 0) {
// 			cor[valor.get_sigla()] = 1;
// 			dist[valor.get_sigla()] = dist[u] + 1;
// 			printf("%d %d\n", valor.get_sigla(), dist[valor.get_sigla()]);
// 			pai[valor.get_sigla()] = u;
// 			f.push(valor.get_sigla());
// 		}
// 		if (valor.get_sigla().compare("DOH") == 0) {
// 			cout << "Destino encontrado " << dist[valor.get_sigla()] << endl;
// 			return;
// 		}
// 	}
// 	cor[u] = 2;
// 	printf("Vertex:%d Antecessor:%d\n", u, pai[u]);
// }

// }

void Grafo::print_grafo() {
	unordered_map<string, Vertice> ::iterator it;

	for (it = this->adj.begin(); it != this->adj.end(); ++it) {
		cout << "[" << it->first << "]" << endl;
		for (auto v : it->second.get_prox()) {
			cout << v.get_sigla() << " -> ";
		}
		cout << endl;
	}
	cout << endl;
}

void Grafo::set_V(int V) {
	this->V = V;
}

void Grafo::set_E(int E) {
	this->E = E;
}

void Grafo::set_adj(Vertice v) {
	if (this->adj.find(v.get_sigla()) == this->adj.end()) {
		this->adj.insert({ v.get_sigla(), v });
	}
}

int Grafo::get_V() {
	return this->V;
}

int Grafo::get_E() {
	return this->E;
}
