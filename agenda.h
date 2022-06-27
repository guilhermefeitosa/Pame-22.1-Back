/* Fluxo Consultoria
 *
 * Guilherme Feitosa
 * 
 * agenda.h
 */

#include <iostream>
#include <string>

using namespace std;

class Agenda {

    public:


    private:
      vector <vector<Hora>> dia;
}

class Hora {
    friend class Agenda
    
    public:
        void lerHora();
        bool comparaHora(Hora);
        bool conflitoHora(Hora);

    private:
      int Horario_inicio;
      int Horario_fim;
}