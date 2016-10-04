#include "Veiculo.h"
#include "Parada.h"
#include "Estacao.h"


  int main(void) {
	int opcao;

    Veiculo transportePublico; // objeto que gerencia a lista de veículos

    Parada todasAsParadas; // objeto que gerencia a lista de paradas em poa

    Estacao bikePoa; // objeto que gerencia a lista de estacoes de bicicleta em poa
    

    transportePublico.carregaVeiculos("linhas.csv"); // método que deve criar uma lista com  todas linhas de veiculos
 
    todasAsParadas.carregaParadas("paradas.csv"); // método que deve criar uma lista com todas paradas

	todasAsParadas.vinculaVeiculos("paradalinha.csv"); // método que deve vincular às paradas a lista de ônibus parada 

                                                       // e ao mesmo tempo vincular aos ônibus uma lista de paradas 

 

    bikePoa.carregaEstações("estacoes-bikepoa.csv");  // método que deve criar a lista de estacoes de bicicleta em poa

    

    do{

      cout << "Escolha uma opção" << endl;

      cout << "  1. Listar as linhas de ônibus" << endl;

      cout << "  2. Listar as paradas de ônibus de uma linha específica" << endl;

      cout << "  3. Listar as paradas pelas quais circulam mais linhas de ônibus" << endl;

      cout << "  4. Listar as estações de bicicleta" << endl;

      cout << "  5. Listar a parada mais próxima de uma dada estação de bicicleta e as linhas de que passam por ali" << endl;

      cout << "  0. FINALIZAR" << endl;

      cin >> opcao;

     switch(opcao) {
			case 1: // Lista as linhas de ônibus
				transportePublico.ListaLinhasDeOnibus();
				break;
			case 2: // Lista as paradas de ônibus de uma linha específica
				cout << "Informe a linha: " << endl;
				cin >> linha;
				transportePublico.ListaParadasDaLinha(linha);
				break;
			case 3: // Apresenta as paradas ordenadas pelo uso
				todasAsParadas.ImprimeUsoDasParadas();
				break;
			case 4: // Lista as estações de bicicleta
				bikePoa.ListaEstacoesDeBike();
				break;
			case 5:
				cout << "Informe a estacao de bicicleta: " << endl;
				cin >> estacao;
				bikePoa.ListaParadasProximasDaEstacao(estacao);
				break;
			case 0:
				return 0;
			default:
				cout << "OPÇÃO INVALIDA. ESCOLHA NOVAMENTE" << endl;
		}
		return 0;
	} while(opcao == 0);
}
