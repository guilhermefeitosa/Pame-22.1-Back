/* Fluxo Consultoria
 *
 * Guilherme Feitosa
 * 
 * sala.h
 */

#include <iostream>
#include <string>

using namespace std;

class Sala {

    public:
        Sala();
        Sala(string);
        void exibir();

    private:
        string nome;
        int capacidade;
        disciplina;
        Agenda funcionamento;

}