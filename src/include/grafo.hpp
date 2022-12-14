#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <stack>
#include <string>

using namespace std;

#define NOTPAI "XXX"
#define BRANCO 0
#define CINZA 1
#define PRETO 2

class Vertice {
private:
	string sigla;
	string aeroporto;
	string estado;
	string pais;

	vector <Vertice> prox;
public:
	Vertice() {};
	Vertice(string sigla, string aeroporto, string estado, string pais);
	~Vertice() {};

	string get_sigla();
	string get_aeroporto();
	string get_estado();
	string get_pais();

	void set_sigla(string sigla);
	void set_aeroporto(string aeroporto);
	void set_estado(string estado);
	void set_pais(string pais);

	vector <Vertice> get_prox();
	void set_prox(Vertice v);
};

class Grafo {
private:
	int V;
	int E;
	unordered_map<string, Vertice> adj;
public:
	Grafo(vector <Vertice> vertices);
	~Grafo() {};

	void init(vector <Vertice> vertices);
	void insere(string v1, string v2);
	void print_grafo();
	void BFS(Vertice origem, Vertice destino);

	void set_V(int V);
	void set_E(int E);
	void set_adj(Vertice v);

	int get_V();
	int get_E();
};

#endif