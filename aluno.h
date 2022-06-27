/* Fluxo Consultoria
 *
 * Guilherme Feitosa
 * 
 * aluno.h
 */

#include <iostream>
#include <string>

using namespace std;

class Aluno {

    public:
        string getNome();

    private:
        string nome;
        string matricula;
        Agenda planoDeEstudo;

}