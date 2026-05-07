#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    char continuar = 's';

    while (continuar == 's' || continuar == 's') {
        Pessoa p;

        cin.ignore();
        cout << "Digite o nome: ";
        getline(cin, p.nome);

        cout << "Digite a idade: ";
        cin >> p.idade;

        cout << "Digite a altura (em metros): ";
        cin >> p.altura;

        cout << "\nDados da pessoa\n";
        cout << "Nome: " << p.nome << endl;
        cout << "idade: " << p.idade << "anos" << endl;
        cout << "Altura: " << p.altura << "m" << endl;

        cout << "\nDeseja cadastrar outra pessoa? (s/n): ";
        cin >> continuar;
    }

    cout << "\nPrograma encerrado.\n";
    return 0;
}