#include "Veiculo.h"

Veiculo::Veiculo(){
	prox=NULL;
	lstParada=NULL;

}

int Veiculo::get_ID(){
	return ID;
}

void Veiculo::set_ID(int _ID){
	ID = _ID;
}

string Veiculo::get_nome(){
	return nome;
}

void Veiculo::set_nome(string _nome){
	nome = _nome;
}

string Veiculo::get_codigo(){
	return codigo;
}

void Veiculo::set_codigo(string _codigo){
	codigo = _codigo;
}

char Veiculo::get_tipo(){
	return tipo;
}

void Veiculo::set_tipo(const char* _tipo){
	tipo = *_tipo;
}

Veiculo* Veiculo::get_prox(){
	return prox;
}

void Veiculo::set_prox(Veiculo _prox){
	prox = &_prox;
}

Parada Veiculo::get_lstParada(){
}

ListaVeiculo::ListaVeiculo(){
	prim=NULL;
	ult=NULL;
}

Veiculo* ListaVeiculo::get_prim(void){
}
void ListaVeiculo::set_prim(Veiculo){
}
Veiculo* ListaVeiculo::get_ult(void){
}
void ListaVeiculo::set_ult(Veiculo){
}

void ListaVeiculo::carregaVeiculos(const char* file){
	Veiculo x;
	int id;
	const char *c;
	ifstream arq;
	string aux;
	arq.open(file, ios::in);
	getline(arq, aux);
	while(arq.good()){
		getline(arq,aux, ';');
		if(arq.eof()){
			break;
		}
		x = Veiculo();
		istringstream ss(aux);
		ss >> id;
		x.set_ID(id);
		getline(arq,aux, ';');
		aux.erase(0, 1);
		aux.erase(aux.size() - 1);
		x.set_nome(aux);
		getline(arq,aux, ';');
		aux.erase(0, 1);
		aux.erase(aux.size() - 1);
		x.set_codigo(aux);
		getline(arq,aux);
		aux.erase(0, 1);
		aux.erase(aux.size() - 1);
		x.set_tipo(aux.c_str());
		if(prim==NULL){
			cout << aux << endl;
			prim=&x;
		}
	}
	ult=&x;
	//cout << prim->get_prox();
	arq.close();
}

void ListaVeiculo::ListaLinhasDeOnibus(void){
	cout << "Oi!" << endl;
	Veiculo *x=prim;
	cout << prim->get_tipo() << endl;
	while(x!=NULL){
		cout << x->get_nome() << endl << "ID: " << x->get_ID() << " Código: " << x->get_codigo();
		if(x->get_tipo() == 'L'){
			cout << " Tipo: Lotação." << endl << endl;
		}else cout << " Tipo: Ônibus." << endl << endl;
		x = x->get_prox();
	}
};


int main(void){
	ListaVeiculo lista;
	lista.carregaVeiculos("linhas.csv");
	Veiculo *x = lista.get_prim();
	lista.ListaLinhasDeOnibus();
	return 0;
}

