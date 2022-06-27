/* Fluxo Consultoria
 *
 * Guilherme Feitosa
 * 
 * disciplina.h
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Disiciplina {

    public:
        void setNome(string);
        string getNome();

        void setProfessor(Professor);
        Professor getProfessor();

        void setVagas(int);
        int getVagas();

        void setAluno(Aluno);
        void imprimeAluno();

        void setSala(Sala);
        Sala getSala();

        void disponibilidade(Professor);
        void desassocia(Professor);


    private:
        string nome;
        Professor p;
        int vagas;
        Sala s;
        vector <Aluno> a;
        Agenda duracao;

}