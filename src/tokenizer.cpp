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
