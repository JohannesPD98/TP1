#ifndef __PARADA_H__
#define __PARADA_H__
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Veiculo.h"
using namespace std;

class Veiculo;
class ListaVeiculo;

class Parada{
private:
	int ID;
	float latitude;
	float longitude;
	Parada *prox;
	Veiculo *lstVeiculo;
public:
    // Construtores
	Parada();
    // sets e gets para todos os atributos
	int get_ID();
	void set_ID(int);
	float get_latitude();
	void set_latitude(float);
	float get_longitude();
	void set_longitude(float);
	Parada get_prox();
	void set_prox(Parada);
	ListaVeiculo* get_lstVeiculo();
	void set_lstVeiculo(ListaVeiculo);
	void carregaParadas(const char *);
	void vinculaVeiculos(const char *);
};   

#endif
