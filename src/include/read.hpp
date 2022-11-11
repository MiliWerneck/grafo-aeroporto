#ifndef READ_HPP
#define READ_HPP

#include <string>
#include <fstream>
#include <iostream>

#include "tokenizer.hpp"


using namespace std;

class Read {
private:
public:
	void readEntrada(vector<Vertice> *vertices);
	void readInsercao(queue<pair<string, string>> *entradas);
};

#endif