#ifndef __VEICULO_H__
#define __VEICULO_H__
#include <iostream>
#include <string>
#include <sstream>


class Veiculo{
private:
	int ID;
	string nome;
	string linha;
	char tipo; // L=lotação ou O=ônibus
	Veiculo *prox;   
	listaParadas *lstParada; // A lista de paradas deve ser organizada a fim de supor a ordem em que se dá o deslocamento do veículo
public:
    // Construtores
	Veiculo(); 
	

    // sets e gets para todos os atributos
	int get_ID();
	void set_ID(int);
	string get_nome();
	void set_nome(string);
	string get_linha();
	void set_linha(string);
	char get_tipo();
	void set_tipo(char);
	Veiculo& get_prox();
	void set_prox(Veiculo);
	listaParadas& get_lstParada();
	void set_lstParada(listaparadas);
	
};

class listaVeiculo{
private:
	listaVeiculo *prox;
	Veiculo *transporte;
public:
    // Construtores 
	listaVeiculo();
    // sets e gets para todos os atributos
	listaVeiculo& get_prox();
	void set_prox(listaVeiculo);
	Veiculo& get_transporte();
	void set_transporte(Veiculo);	
};
#endif
