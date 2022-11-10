#include "./include/grafo.hpp"
#include "./include/read.hpp"

int main() {

	Read r;
	vector <Vertice> vertices;
	r.readEntrada(&vertices);

	Grafo *grafo = new Grafo(vertices);
	// Vertice *v = new Vertice(0);

	grafo->insere("GRU", "DOH");
	grafo->insere("CON", "BRR");
	grafo->insere("CON", "BEL");
	grafo->insere("CON", "BRS");
	grafo->insere("CON", "CAB");
	grafo->insere("CON", "CAM");
	grafo->insere("CON", "CAR");
	grafo->insere("CON", "COM");
	grafo->insere("CON", "CUI");
	grafo->insere("CON", "CUR");
	grafo->insere("CON", "FOR");
	grafo->insere("CON", "FOZ");
	grafo->insere("CON", "FLO");
	grafo->insere("CON", "GOI");
	grafo->insere("CON", "GOV");
	grafo->insere("CON", "GUA");
	grafo->insere("CON", "GRU");
	grafo->insere("CON", "ILH");
	grafo->insere("CON", "IMP");
	grafo->insere("CON", "IPT");
	grafo->insere("CON", "JER");
	grafo->insere("CON", "JPE");
	grafo->insere("CON", "JUN");
	grafo->insere("CON", "MCO");
	grafo->insere("CON", "MAR");
	grafo->insere("CON", "MOC");
	grafo->insere("CON", "NAT");
	grafo->insere("CON", "POA");
	grafo->insere("CON", "POS");
	grafo->insere("CON", "REC");
	grafo->insere("CON", "RIP");
	grafo->insere("CON", "SAL");
	grafo->insere("CON", "SAD");
	grafo->insere("CON", "SAO");
	grafo->insere("CON", "UBE");
	grafo->insere("CON", "BER");
	grafo->insere("CON", "VIT");
	grafo->insere("CON", "VCO");
	grafo->insere("CON", "CPA");
	grafo->insere("CON", "LPT");

	grafo->insere("DOH", "GRU");
	grafo->insere("BRR", "CON");
	grafo->insere("BEL", "CON");
	grafo->insere("BRS", "CON");
	grafo->insere("CAB", "CON");
	grafo->insere("CAM", "CON");
	grafo->insere("CAR", "CON");
	grafo->insere("COM", "CON");
	grafo->insere("CUI", "CON");
	grafo->insere("CUR", "CON");
	grafo->insere("FOR", "CON");
	grafo->insere("FOZ", "CON");
	grafo->insere("FLO", "CON");
	grafo->insere("GOI", "CON");
	grafo->insere("GOV", "CON");
	grafo->insere("GUA", "CON");
	grafo->insere("GRU", "CON");
	grafo->insere("ILH", "CON");
	grafo->insere("IMP", "CON");
	grafo->insere("IPT", "CON");
	grafo->insere("JER", "CON");
	grafo->insere("JPE", "CON");
	grafo->insere("JUN", "CON");
	grafo->insere("MCO", "CON");
	grafo->insere("MAR", "CON");
	grafo->insere("MOC", "CON");
	grafo->insere("NAT", "CON");
	grafo->insere("POA", "CON");
	grafo->insere("POS", "CON");
	grafo->insere("REC", "CON");
	grafo->insere("RIP", "CON");
	grafo->insere("SAL", "CON");
	grafo->insere("SAD", "CON");
	grafo->insere("SAO", "CON");
	grafo->insere("UBE", "CON");
	grafo->insere("BER", "CON");
	grafo->insere("VIT", "CON");
	grafo->insere("VCO", "CON");
	grafo->insere("CPA", "CON");
	grafo->insere("LPT", "CON");


	// grafo->BFS(*v);
	grafo->print_grafo();
	cout << grafo->get_E() << endl;
}
