/* Fluxo Consultoria
 *
 * Guilherme Feitosa
 * 
 * escola.cpp
 */

#include "escola.h"

using namespace std;



        Escola::Escola(){
            
        }

        //SALA


        void Escola :: setSala(){
            Sala sala();
            s.push_back(sala);
        }

       
        void Escola :: alteraSala(){
            string salaAlt;
        
            cout<<"\n\n\tEntre com o nome da SALA que deseja alterar:"
                <<endl;
            cin>>salaAlt;
            
            for(unsigned int i = 0; i < s.size() ; i++){
                if(salaAlt.compare(s.at(i).getNome())=0){
                    Sala novaSala(salaAlt);
                    excluiSala(salaAlt);
                    s.push_back(novaSala);  
                }
            }
             
        }
        void Escola :: excluiSala(string salaDel){
            int controle = -1;
            for(unsigned int i = 0; i < s.size(); i++){
                if(salaDel.compare(s.at(i).getNome()) = 0){
                    controle = i;

                }
            }

            if (controle = -1){
                cout<<"\n\n\tSALA não encontrada"
                    <<endl;
            } else {
                s.erase(s.begin()+controle);
                cout<<"\n\n\t A SALA "
                    << salaDel
                    <<" foi excluida!"
                    <<endl;
            }
        }

        void Escola :: excluiSala(){
            string salaDel;
            cout<<"\n\n\tEntre com a sala que deseja Excluir:"
                <<endl;
            cin>>salaDel;

            excluiSala(salaDel);
        }

        void Escola :: exibirSala(){
            string aux;
            controle = -1;
            cout<<"\n\n\tEntre com o nome da SALA que está procurando:"
                <<endl;
            cin>>aux
            for(unsigned int i = 0; i < s.size(); i++){
                if(aux.compare(s.at(i).getNome())=0){
                    controle = i
                }
            }
            if(controle = -1){
                cout << "\n\n\tSALA não encontrada";
            }else{
                s.at(controle).exibir();
            }
        }

    
            

        void Escola :: listarSala(){
            cout << "\n\n\tAs SALAS registradas são:"
                <<endl;
            
            for(unsigned int i = 0; i<s.size() < i++){
                cout << "\n\t"
                    <<s.at(i).getNome();
            }
        }


         //Professor


        void Escola :: setProfessor(){
            Professor professor();
            p.push_back(professor);
        }

        void Escola :: alteraProfessor(){
            string professorAlt;

            cout<<"\n\n\tEntre com o nome do(a) PROFESSOR(A) que deseja alterar:"
                <<endl;
            cin>>professorAlt;
            
            for(unsigned int i = 0; i < p.size() ; i++){
                if(professorAlt.compare(p.at(i).getNome())=0){
                    Professor pAlt(professorAlt);
                    excluiProfessor(professorAlt);
                    p.push_back(pAlt); 
                }
            }
            
        }
        void Escola :: excluiProfessor(string profDel ){
            int controle = -1;
            for(unsigned int i = 0; i < p.size(); i++){
                if(profDel.compare(p.at(i).getNome()) = 0){
                    controle = i;

                }
            }

            if (controle = -1){
                cout<<"\n\n\tPROFESSOR(A) não encontrado(a)"
                    <<endl;
            } else {
                p.erase(p.begin()+controle);
                cout<<"\n\n\t A SALA "
                    << profDel
                    <<" foi excluido(a)!"
                    <<endl;
            }
        }

        void Escola :: excluiProfessor(){
            string profDel;
            cout<<"\n\n\tEntre com o(a) PROFESSOR(A) que deseja Excluir:"
                <<endl;
            cin>>profDEl;

            excluiProfessor(profDel);
        }

        
        void Escola :: exibirProfessor(){
            string aux;
            controle = -1;
            cout<<"\n\n\tEntre com o nome do(a) PROFESSOR(A) que está procurando:"
                <<endl;
            cin>>aux
            for(unsigned int i = 0; i < p.size(); i++){
                if(aux.compare(p.at(i).getNome())=0){
                    controle = i
                }
            }
            if(controle = -1){
                cout << "\n\n\tPROFESSOR(A) não encontrado(a)";
            }else{
                p.at(controle).exibir();
            }

        }
        void Escola :: listarProfessor(){
            cout << "\n\n\tOs PROFESSORES registrados são:"
                <<endl;
            
            for(unsigned int i = 0; i<p.size() < i++){
                cout << "\n\t"
                    <<p.at(i).getNome();
            }

        }

        void Escola :: associaProfessor(){
            string professorAlt, disciplina;
            int controleP = -1;
            int controleD = -1;

            cout<<"\n\n\tEntre com o nome do(a) PROFESSOR(A) que deseja associar a Disciplina:"
                <<endl;
            cin>>professorAlt;

            cout<<"\n\n\tEntre com o nome da DISCIPLINA que deseja associar ao PROFESSOR:"
                <<endl;
            cin>>disciplina;
            
            for(unsigned int i = 0; i < p.size() ; i++){
                if(professorAlt.compare(p.at(i).getNome())=0){
                    controleP = int(i);
                }
            }

            for(unsigned int j = 0; j < d.size() ; j++){
                if(professorAlt.compare(p.at(i).getNome())=0){
                    controleD = int(j);
                }
            }

            if(controleD = -1 ||controleP = -1 ){
                cout<<"\n\n\tPROFESSOR ou DISCIPLINA não foram encontrados"
            }else{
                d.at(controleD).disponibilidade(p.at(controleP));
            }



        }

        void Escola :: desassociaProfessor(){
            string professorAlt, disciplina;
            int controleP = -1;
            int controleD = -1;

            cout<<"\n\n\tEntre com o nome do PPROFESSOR que deseja desassociar:"
                <<endl;
            cin>>professorAlt;

            cout<<"\n\n\tEntre com o nome da DISCIPLINA que deseja associar ao PROFESSOR:"
                <<endl;
            cin>>disciplina;

            for(unsigned int i = 0; i < p.size() ; i++){
                if(professorAlt.compare(p.at(i).getNome())=0){
                    controleP = int(i);
                }
            }

            for(unsigned int j = 0; j < d.size() ; j++){
                if(professorAlt.compare(p.at(i).getNome())=0){
                    controleD = int(j);
                }
            }

            if(controleD = -1 ||controleP = -1 ){
                cout<<"\n\n\tPROFESSOR ou DISCIPLINA não foram encontrados"
            }else{
                d.at(controleD).desassocia(p.at(controleP));
            }


        }

        
        //Aluno


        void Escola :: setAluno(){
            Aluno aluno();
            a.push_back(aluno);
        }
        }


        void Escola :: alteraAluno(){
            string alunoAlt;

            cout<<"\n\n\tEntre com o nome do(a) ALUNO(A) que deseja alterar:"
                <<endl;
            cin>>alunoAlt;
            
            for(unsigned int i = 0; i < a.size() ; i++){
                if(alunoAlt.compare(a.at(i).getNome())=0){
                    Aluno aAlt(alunoAlt);
                    excluiAluno(alunoAlt);
                    a.push_back(aAlt); 
                }
            }
            
        }


        void Escola :: excluiAluno(string alunoDel ){
            int controle = -1;
            for(unsigned int i = 0; i < a.size(); i++){
                if(alunoDel.compare(a.at(i).getNome()) = 0){
                    controle = i;

                }
            }

            if (controle = -1){
                cout<<"\n\n\tALUNO(A) não encontrado(a)"
                    <<endl;
            } else {
                a.erase(a.begin()+controle);
                cout<<"\n\n\t A SALA "
                    << alunoDel
                    <<" foi excluido(a)!"
                    <<endl;
            }
        }

        void Escola :: excluiProfessor(){
            string alunoDel;
            cout<<"\n\n\tEntre com o(a) ALUNO(A) que deseja Excluir:"
                <<endl;
            cin>>alunoDel;

            excluiAluno(alunoDel);
        }
        


        void Escola :: exibirAluno(){
            string aux;
            controle = -1;
            cout<<"\n\n\tEntre com o nome do(a) ALUNO que está procurando:"
                <<endl;
            cin>>aux
            for(unsigned int i = 0; i < a.size(); i++){
                if(aux.compare(a.at(i).getNome())=0){
                    controle = i
                }
            }
            if(controle = -1){
                cout << "\n\n\tALUNO(A) não encontrado(a)";
            }else{
                a.at(controle).exibir();
            }

        }


        void Escola :: listarAluno(){
            cout << "\n\n\tOs ALUNOS registrados são:"
                <<endl;
            
            for(unsigned int i = 0; i<a.size() < i++){
                cout << "\n\t"
                    <<a.at(i).getNome();
            }

        }
        


        void Escola :: associaAluno(){
            string alunoAlt, disciplina;
            int controleA = -1;
            int controleD = -1;

            cout<<"\n\n\tEntre com o nome do(a) ALUNO(A) que deseja associar a Disciplina:"
                <<endl;
            cin>>alunoAlt;

            cout<<"\n\n\tEntre com o nome da DISCIPLINA que deseja associar ao PROFESSOR:"
                <<endl;
            cin>>disciplina;
            
            for(unsigned int i = 0; i < a.size() ; i++){
                if(alunoAlt.compare(a.at(i).getNome())=0){
                    controleA = int(i);
                }
            }

            for(unsigned int j = 0; j < d.size() ; j++){
                if(disciplina.compare(d.at(i).getNome())=0){
                    controleD = int(j);
                }
            }

            if(controleD = -1 ||controleP = -1 ){
                cout<<"\n\n\tALUNO ou DISCIPLINA não foram encontrados"
            }else{
                d.at(controleD).disponibilidade(a.at(controleA));
            }


        }
        
        
        
        
        void Escola :: desassociaAluno(){
            string alunoAlt, disciplina;
            int controleA = -1;
            int controleD = -1;

            cout<<"\n\n\tEntre com o nome do ALUNO que deseja desassociar:"
                <<endl;
            cin>>alunoAlt;

            cout<<"\n\n\tEntre com o nome da DISCIPLINA que deseja associar ao ALUNO:"
                <<endl;
            cin>>disciplina;

            for(unsigned int i = 0; i < a.size() ; i++){
                if(professorAlt.compare(p.at(i).getNome())=0){
                    controleA = int(i);
                }
            }

            for(unsigned int j = 0; j < d.size() ; j++){
                if(disciplina.compare(d.at(i).getNome())=0){
                    controleD = int(j);
                }
            }

            if(controleD = -1 ||controleA = -1 ){
                cout<<"\n\n\tALUNO ou DISCIPLINA não foram encontrados"
            }else{
                d.at(controleD).desassocia(a.at(controleA));
            }




        //


        void Escola :: setDisciplina();
        void Escola :: alteraDisciplina();
        void Escola :: excluiDiscplina();
        void Escola :: exibirDisciplina();
        void Escola :: listarDisciplina();
        void Escola :: associaDisciplina();
        void Escola :: desassociaDisciplina();

        



   