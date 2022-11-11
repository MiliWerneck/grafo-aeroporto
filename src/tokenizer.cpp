#include "./include/tokenizer.hpp"

void Tokenizer::tokenizar(char del, bool controle, bool control_recursao, string text, vector<Vertice> *vertices) {
	stringstream sstream(text);
	string token;

	while (getline(sstream, token, del)) {
		if (control_recursao == false) {
			dados.push_back(token);
		} else if (controle == true) {
			this->sigla.assign(token);
			controle = false;
		} else {
			dados.clear();
			tokenizar('-', false, false, token, vertices);
		}
	}
	if (control_recursao == false) {
		this->vert = new Vertice(sigla, dados.at(0), dados.at(1), dados.at(2));
		vertices->push_back(*this->vert);
	}
}

void Tokenizer::tokenizar_insercao(string text, queue<pair<string, string>> *entradas) {
	stringstream sstream(text);
	string token;
	string first;
	string second;
	bool control = true;

	while (getline(sstream, token, ',')) {
		if (control == true) {
			first.assign(token);
			control = false;
		} else {
			second.assign(token);
		}
	}
	entradas->push(make_pair(first, second));
}
