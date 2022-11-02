#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Vertice {
private:
	int valor;
	vector <Vertice> prox;
public:
	Vertice(int valor) { set_valor(valor); };
	~Vertice() {};

	void set_valor(int valor);
	void set_prox(Vertice v);

	int get_valor();
	vector <Vertice> get_prox();
};

class Grafo {
private:
	int V;
	int E;
	unordered_map<int, Vertice> adj;
	// vector <Vertice> adj;
public:
	Grafo(int V);
	~Grafo() {};

	void init();
	void insere(int v1, int v2);
	void print_grafo();

	void set_V(int V);
	void set_E(int E);
	void set_adj(Vertice v, int chave);

	int get_V();
	int get_E();
};

#endif