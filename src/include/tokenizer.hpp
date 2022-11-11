#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <queue>
#include <unordered_map>
#include "grafo.hpp"

using namespace std;

class Tokenizer {
private:
	Vertice *vert;
	string sigla;
	vector<string> dados;
public:
	Tokenizer() {};
	~Tokenizer() {};

	void tokenizar(char del, bool controle, bool control_recursao, string text, vector<Vertice> *vertices);
	void tokenizar_insercao(string text, queue<pair<string, string>> *entradas);
};

#endif