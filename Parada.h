#ifndef __PARADA_H__
#define __PARADA_H__

class Parada{
private:
	int ID;
	float latitude;
	float longitude;
	parada *prox;
	listaVeiculo *lstVeiculo;
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
	parada* get_prox();
	void set_prox(parada);
	listaVeiculo* get_lstVeiculo();
	void set_lstVeiculo(listaveiculo);
};   

class listaParada{
private:
	listaParada *prox;
	Parada *abrigo;
public:
    // Construtores 
	listaParada();
    // métodos para manipulação
	listaParada* get_prox();
	void set_prox(listParada);
	Parada get_abrigo();
	void set_abrigo(Parada);
};
#endif
