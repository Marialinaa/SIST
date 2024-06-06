#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void lerTarefa(string& nomeT, string& nomeFunc, int& data, int& codg) {  // essa funcao para ler o dados do arquivo
ifstream arquivo("ctarefa.txt");
if (arquivo) {
arquivo >> nomeT >> nomeFunc >> codg >> data;
arquivo.close();
}
}

bool mostrarTarefas(string nomeUsuario, int codUsuario) {  // Essa funcao ira mostrar a tarefa desguinada a pessoa no arquivo
ifstream arquivo("ctarefa.txt");
string nomeT, nomeFunc;
int codg, data;
bool encontrado = false;
while (arquivo >> nomeT >> nomeFunc >> codg >> data) {
if (nomeFunc == nomeUsuario && codg == codUsuario) {
cout << "Tarefa:" << nomeT <<endl<< "Funcionario:" << nomeFunc<<endl << " Data: " << data  <<endl << " Codigo: " << codg << endl;
encontrado = true;
}
}
arquivo.close();

if (!encontrado) {
cout << "Codigo informado está errado!" << endl; // Caso nome e codigo digitado por usuario estiver errado informara isso
}
return encontrado;
}


void gravarTarefa(char resposta, string nomeT, int dt, string nomeF, int codi) {  // permite que mesmo o usuario com os dados errados armazena a informacao desse funcionario
if (resposta == 's') {
ofstream arquivo("tarefas_feitas.txt", ios::app);  // Informando que fez alguma tarefa armazena os dados
arquivo << "Tarefa: " << nomeT << " Funcionario: " << nomeF << ", Data: " << dt << ", Código: " << codi << endl;
arquivo.close();
} else {
ofstream arquivo("tarefas_nao_feitas.txt", ios::app);  // Se informar N armazena mesmo assim o nome e os dados 
arquivo << "Tarefa: " << nomeT << ", Funcionario: " << nomeF << ", Data: " << dt << ", Código: " << codi << endl;
arquivo.close();
}
}

int main() {
string nome;
int cod;
cout << "Digite o nome do funcionario: ";
cin >> nome;
cout << "Digite o codigo do funcionario: ";
cin >> cod;
mostrarTarefas(nome, cod);  // usuario pode vizualizar oque deve ser feito e os dados do mesmo

char resposta;
string nomeT;
int dat;
string nomeF;
int codiF;

cout << "Voce fez a tarefa desiguinada a voce?Mesmo que nao seja a tarefa desiguinada a voce, armazene abaixo digitando s (s/n): ";  //Permite o usuario informar se fez ou nao,mais armazenando no arquivo
cin >> resposta;

cout << "Digite a tarefa que voce fez : ";  //aqui solicito a tarefa possa ser que tenha feito uma tarefa mais nao a que foi a desiguinada
cin>>nomeT;

cout << "Data em que voce fez: ";
cin >> dat;
  // Abaixo armazeno as informaçoes para gravar corretas ou nao 
cout << "Digite seu nome novamente para armazenar nas informacoes: ";
cin>>nomeF;
cout << "Digite seu codigo novamente para armazenar nas informacoes: ";
cin >> codiF;

gravarTarefa(resposta, nomeT, dat, nome, codiF);
return 0;
}
