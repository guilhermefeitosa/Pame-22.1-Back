/* Fluxo Consultoria
 *
 * Guilherme Feitosa
 * 
 * professor.h
 */

#include <iostream>
#include <string>

using namespace std;

class Professor {

    public:
        void exibir();

    private:
        string nome;
        string matricula;
        agenda cargaHoraria;

}