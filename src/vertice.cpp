#include "./include/grafo.hpp"

Vertice::Vertice(string sigla, string aeroporto, string estado, string pais) {
	set_sigla(sigla);
	set_aeroporto(aeroporto);
	set_estado(estado);
	set_pais(pais);
}

string Vertice::get_sigla() { return this->sigla; }
string Vertice::get_aeroporto() { return this->aeroporto; }
string Vertice::get_estado() { return this->estado; }
string Vertice::get_pais() { return this->pais; }

void Vertice::set_sigla(string sigla) { this->sigla = sigla; }
void Vertice::set_aeroporto(string aeroporto) { this->aeroporto = aeroporto; }
void Vertice::set_estado(string estado) { this->estado = estado; }
void Vertice::set_pais(string pais) { this->pais = pais; }

void Vertice::set_prox(Vertice v) {
	this->prox.push_back(v);
}

vector <Vertice> Vertice::get_prox() {
	return this->prox;
}
