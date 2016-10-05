#ifndef __ESTACAO_H__
#define __ESTACAO_H__
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

class Estacao{ 
private:
	int ID;
	string nome;
	float latitude;
	float longitude; 
	Estacao *prox; 
public:
    // Construtores 
	Estacao();      
    // sets e gets para todos os atributos
	int get_ID();
	void set_ID(int);
	string get_nome();
	void set_nome(string);
	float get_latitude();
	void set_latitude(float);
	float get_longitude();
	void set_longitude(float);
	Estacao* get_prox();
	void set_prox(Estacao);
	void carregaEstacoes(const char *);
};
#endif
