#include "./include/grafo.hpp"

void Vertice::set_valor(int valor) {
	this->valor = valor;
}

void Vertice::set_prox(Vertice v) {
	this->prox.push_back(v);
}

int Vertice::get_valor() {
	return this->valor;
}

vector <Vertice> Vertice::get_prox() {
	return this->prox;
}

Grafo::Grafo(int V) {
	this->set_V(V);
	this->set_E(0);
	this->init();
}

void Grafo::init() {
	for (int i = 0; i < get_V(); i++) {
		Vertice *v = new Vertice(i);
		set_adj(*v, i);
	}
}

void Grafo::insere(int v1, int v2) {
	unordered_map<int, Vertice> ::iterator it_origem;
	it_origem = this->adj.find(v1);

	if (it_origem != this->adj.end()) {
		unordered_map<int, Vertice> ::iterator it_destino;
		it_destino = this->adj.find(v2);

		if (it_destino != this->adj.end()) {
			it_origem->second.set_prox(it_destino->second);
		}
		// Vertice v = get_adj().at(v1.get_valor());
		// v1->set_prox(v2);
		set_E(get_E() + 1);
	}
}

void Grafo::print_grafo() {
	unordered_map<int, Vertice> ::iterator it;

	for (it = this->adj.begin(); it != this->adj.end(); ++it) {
		cout << "[" << it->first << "]" << endl;
		for (auto v : it->second.get_prox()) {
			cout << v.get_valor() << " -> ";
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

void Grafo::set_adj(Vertice v, int chave) {
	if (this->adj.find(chave) == this->adj.end()) {
		this->adj.insert({ chave, v });
	}
}

int Grafo::get_V() {
	return this->V;
}

int Grafo::get_E() {
	return this->E;
}
