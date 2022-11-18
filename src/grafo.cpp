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

void Grafo::BFS(Vertice origem, Vertice destino) {
	queue<string> f;

	unordered_map<string, int> cor; //0 Branco, 1 Cinza, 2 Preto
	unordered_map<string, int> dist;
	unordered_map<string, string> pai; // -1 == NULL

	unordered_map<string, Vertice> ::iterator it;

	for (it = this->adj.begin(); it != this->adj.end(); ++it) {
		if (it->first.compare(origem.get_sigla()) != 0) {
			cor.insert({ it->first, BRANCO });
			dist.insert({ it->first, -1 });
			pai.insert({ it->first, NOTPAI });
		}
	}

	cor.insert({ origem.get_sigla(), CINZA });
	dist.insert({ origem.get_sigla(), 0 });
	pai.insert({ origem.get_sigla(), NOTPAI });

	f.push(origem.get_sigla());

	while (f.size() > 0) {
		string u = f.front();
		f.pop();

		vector<Vertice> v = this->adj.find(u)->second.get_prox();

		for (auto valor : v) {
			if (cor[valor.get_sigla()] == BRANCO) {
				cor[valor.get_sigla()] = CINZA;
				dist[valor.get_sigla()] = dist[u] + 1;
				//cout << valor.get_sigla() << " " << dist[valor.get_sigla()] << endl;
				pai[valor.get_sigla()] = u;
				f.push(valor.get_sigla());
			}
			if (valor.get_sigla().compare(destino.get_sigla()) == 0) {
				stack<string> ascendente;
				string atual = destino.get_sigla();
				string asc;

				while (atual.compare(origem.get_sigla()) != 0) {
					asc.assign(pai[atual]);
					ascendente.push(asc);
					atual = asc;
				}
				cout << endl;
				cout << "Destino encontrado " << dist[valor.get_sigla()] << " vértices" << endl;
				while (ascendente.size() != 0) {
					cout << ascendente.top() << " ";
					ascendente.pop();
				}
				cout << "[ " << destino.get_sigla() << " ]" << endl;
				return;
			}
		}
		cor[u] = PRETO;
	}
}

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
