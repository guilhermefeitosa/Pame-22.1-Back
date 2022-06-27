
/* Fluxo Consultoria
 *
 * Guilherme Feitosa
 * 
 * main.cpp
 */

#include <iostream>
#include <string>
#include <vector>
#include "escola.h"

using namespace std;

int main(){
    int opcao = 1;
    int opcaoS = 1;
    int opcaoP = 1;
    int opcaoA = 1;
    int opcaoD = 1;
    Escola e();

    cout<<"\n\n\tBem-vindo ao Escola!"
        <<endl;

    while(opcao){
        cout << "\n\n\tDigite 1 Se deseja ADICIONAR, ALTERAR ou EXIBIR SALAS DE AULA"
            <<"\n\tDigite 2 Se deseja  ADICIONAR, ALTERAR ou EXIBIR PROFESSORES"
            <<"\n\tDigite 3 Se deseja  ADICIONAR, ALTERAR ou EXIBIR ALUNOS"
            <<"\n\tDigite 4 Se deseja ADICIONAR, ALTERAR ou EXIBIR DISCIPLINAS"
            <<"\n\tDigite 0 para SAIR"
            <<"\n\tSelecione opção:";
            cin>>opcao;

            switch (opcao){

                case 1:{
                    int opcaoS = 1;
                    while(opcaoS){
                        cout << "\n\n\tSALA DE AULA"
                            <<"\n\tDigite 1 para ADICIONAR nova SALAS DE AULA"
                            <<"\n\tDigite 2 para ALTERAR SALA DE AULA"
                            <<"\n\tDigite 3 para EXCLUIR SALA DE AULA"
                            <<"\n\tDigite 4 para detalhes de uma única SALA DE AULA"
                            <<"\n\tDigite 5 para listar todas as SALAS DE AULA"
                            <<"Digite 0 para SAIR"
                            <<endl;
                            cin>>opcaoS;
                                
                            switch (opcaoS){
                                case 1:
                                    escola.setSala();
                                    break;

                                case 2:
                                    escola.alteraSala();
                                    break;

                                case 3:
                                    escola.excluiSala();
                                    break;
                                    
                                case 4:
                                    escola.exibirSala();
                                    break;

                                case 5:
                                    escola.listarSala();
                                    break;

                                default:
                                    cout << "Digite uma opção válida";
                                    break;

                                }
                
                        }
                    break;
                }

                case 2:
                {
                    
                    while(opcaoP){
                        cout << "\n\n\tPROFESSORES"
                            <<"\n\tDigite 1 para ADICIONAR novo PROFESSOR(A)"
                            <<"\n\tDigite 2 para ALTERAR PROFESSOR(A)"
                            <<"\n\tDigite 3 para EXCLUIR PROFESSOR(A)"
                            <<"\n\tDigite 4 para EXIBIR detalhes de um(a) único(a) PROFESSOR(A)"
                            <<"\n\tDigite 5 para LISTAR todos os PROFESSORES"
                            <<"\n\tDigite 6 para associar um(a) PROFESSOR(A) à uma DISCIPLINA"
                            <<"\n\tDigite 7 para desassociar um(a) PROFESSOR de uma DISCIPLINA"
                            <<"Digite 0 para SAIR"
                            <<endl;
                            cin>>opcaoP;
                                
                            switch (opcaoP){
                                case 1:
                                    escola.setProfessor();
                                    break;

                                case 2:
                                    escola.alteraProfessor();
                                    break;

                                case 3:
                                    escola.excluiProfessor();
                                    break;
                                    
                                case 4:
                                    escola.exibirProfessor();
                                    break;

                                case 5:
                                    escola.listarProfessor();
                                    break;

                                case 6:
                                    escola.associaProfessor();
                                    break;
                                
                                case 7:
                                    escola.desassociaProfessor();
                                    break;

                                default:
                                    cout << "Digite uma opção válida";
                                    break;
                                }
                        }
                    break;
                    }

                case 3:
                {
                    
                    while(opcaoA){
                        cout << "\n\n\tALUNOS"
                            <<"\n\n\tDigite 1 para ADICIONAR novo(a) ALUNO(A)"
                            <<"\n\tDigite 2 para ALTERAR ALUNO(A)"
                            <<"\n\tDigite 3 para EXCLUIR ALUNO(A)"
                            <<"\n\tDigite 4 para detalhes de um(a) único(a) ALUNO(A)"
                            <<"\n\tDigite 5 para listar todos os ALUNOS"
                            <<"\n\tDigite 6 para associar um(a) ALUNO(A) à uma DISCIPLINA"
                            <<"\n\tDigite 7 para desassociar um(a) ALUNO(A) de uma DISCIPLINA"
                            <<"Digite 0 para SAIR"
                            <<endl;
                            cin>>opcaoA;
                                
                            switch (opcaoA){
                                case 1:
                                    escola.setAluno();
                                    break;

                                case 2:
                                    escola.alteraAluno();
                                    break;

                                case 3:
                                    escola.excluiAluno();
                                    break;
                                    
                                case 4:
                                    escola.exibirAluno();
                                    break;

                                case 5:
                                    escola.listarAluno();
                                    break;
                                
                                case 6:
                                    escola.associaAluno();
                                    break;
                                
                                case 7:
                                    escola.desassociaAluno();
                                    break;

                                default:
                                    cout << "Digite uma opção válida";
                                    break;
                                }
                        }
                    break;
                    }

                case 4:
                {
                    
                    while(opcaoD){
                        cout << "\n\n\tDISCIPLINAS"
                            <<"\n\n\tDigite 1 para ADICIONAR nova DISCIPLINA"
                            <<"\n\tDigite 2 para ALTERAR DISCIPLINA"
                            <<"\n\tDigite 3 para EXCLUIR DISCIPLINA"
                            <<"\n\tDigite 4 para detalhes de uma única DISCIPLINA"
                            <<"\n\tDigite 5 para listar todas as DISCIPLINAS"
                            <<"\n\tDigite 6 para associar uma DISCIPLINA à uma SALA DE AULA"
                            <<"\n\tDigite 7 para desassociar uma DISCIPLINA de uma SALA DE AULA"
                            <<"Digite 0 para SAIR"
                            <<endl;
                            cin>>opcaoD;
                                
                            switch (opcaoD){
                                case 1:
                                    escola.setDisciplina();
                                    break;

                                case 2:
                                    escola.alteraDisciplina();
                                    break;

                                case 3:
                                    escola.excluiDisciplina();
                                    break;
                                    
                                case 4:
                                    escola.exibirDisciplina();
                                    break;

                                case 5:
                                    escola.listarDisciplina();
                                    break;
                                
                                case 6:
                                    escola.associaDisciplina();
                                    break;
                                
                                case 7:
                                    escola.desassociaDisciplina();
                                    break;

                                default:
                                    cout << "Digite uma opção válida";
                                    break;
                                }
                        }
                    break;
                    }
                
                default:
                    cout << "Digite uma opção válida";
                
                break;
            }
    }

}