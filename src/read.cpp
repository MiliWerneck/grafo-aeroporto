#include "./include/read.hpp"

void Read::readEntrada(vector<Vertice> *vertices) {
	string caminho;
	Tokenizer t;

	caminho.assign("arquivos/cidades.txt");
	ifstream myfile(caminho);
	string line;

	if (myfile.is_open()) {

		while (getline(myfile, line)) {
			t.tokenizar('#', true, true, line, vertices);
		}
	}
}

void Read::readInsercao(queue<pair<string, string>> *entradas) {
	string caminho;
	Tokenizer t;

	caminho.assign("arquivos/insercoes.txt");
	ifstream myfile(caminho);
	string line;

	if (myfile.is_open()) {

		while (getline(myfile, line)) {
			t.tokenizar_insercao(line, entradas);
		}
	}

}