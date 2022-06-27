/* Fluxo Consultoria
 *
 * Guilherme Feitosa
 * 
 * escola.h
 */

#include <iostream>
#include <string>
#include <vector>
#include "agenda.h"
#include "sala.h"
#include "professor.h"
#include "aluno.h"
#include "disciplina.h"

using namespace std;

class Escola {

    public:
        Escola();

        //SALA


        void setSala();
        void alteraSala();
        void excluiSala();
        void exibirSala();
        void listarSala();


         //Professor


        void setProfessor();
        void alteraProfessor();
        void excluiProfessor();
        void exibirProfessor();
        void listarProfessor();
        void associaProfessor();
        void desassociaProfessor();

        
        //Aluno


        void setAluno();
        void alteraAluno();
        void excluiAluno();
        Sala exibirAluno();
        void listarAluno();
        void associaAluno();
        void desassociaAluno();


        //


        void setDisciplina();
        void alteraDisciplina();
        void excluiDiscplina();
        Sala exibirDisciplina();
        void listarDisciplina();
        void associaDisciplina();
        void desassociaDisciplina();

        



    private:
        vector <Professor>p;
        vector <Sala>s;
        vector <Aluno>a;
        vector <Disciplina>d;

}