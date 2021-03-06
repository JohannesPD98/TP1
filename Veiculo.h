#ifndef __VEICULO_H__
#define __VEICULO_H__
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Parada.h"
using namespace std;

class Veiculo{
private:
	int ID;
	string nome;
	string codigo;
	char tipo; // L=lotação ou O=ônibus
	Veiculo *prox;   
	Parada *lstParada; // A lista de paradas deve ser organizada a fim de supor a ordem em que se dá o deslocamento do veículo
public:
    // Construtores
	Veiculo(); 
	

    // sets e gets para todos os atributos
	int get_ID();
	void set_ID(int);
	string get_nome();
	void set_nome(string);
	string get_codigo();
	void set_codigo(string);
	char get_tipo();
	void set_tipo(const char*);
	Veiculo* get_prox();
	void set_prox(Veiculo);
	Parada get_lstParada();
	void RegistraParadaNoVeiculo(Parada *p);
	
};

class ListaVeiculo{
private:
	Veiculo *prim, *ult;

public:
	ListaVeiculo();
	void carregaVeiculos(const char*);
	void ListaLinhasDeOnibus(void);
	Veiculo* get_prim(void);
	void set_prim(Veiculo);
	Veiculo* get_ult(void);
	void set_ult(Veiculo);
};

#endif
