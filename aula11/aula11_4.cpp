#include <iostream>
#include <string>

using namespace std;

class Carro {

private:
    string modelo;
    string cor;
    string marca;
    int ano;
    int velocidade;

public:

    Carro(string modelo, string cor, string marca,
          int ano, int velocidadeInicial) {

        this->modelo = modelo;
        this->cor = cor;
        this->marca = marca;
        this->ano = ano;
        this->velocidade = velocidadeInicial;
    }

    void acelerar(int valor) {
        velocidade += valor;

        cout << modelo << " acelerou para "
             << velocidade << " km/h" << endl;
    }

    void frear(int valor) {

        velocidade -= valor;

        if (velocidade < 0) {
            velocidade = 0;
        }

        cout << modelo << " reduziu para "
             << velocidade << " km/h" << endl;
    }

    void exibirInformacoes() {

        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "Marca: " << marca << endl;
        cout << "Ano: " << ano << endl;
        cout << "Velocidade: " << velocidade << " km/h" << endl;
        cout << endl;
    }
};

int main() {

    Carro carro1("Fusca", "Azul", "Volkswagen", 1980, 0);
    Carro carro2("Gol", "Vermelho", "Volkswagen", 2015, 10);
    Carro carro3("Civic", "Preto", "Honda", 2020, 20);

    carro1.acelerar(30);
    carro2.frear(5);
    carro3.acelerar(40);

    cout << endl;

    carro1.exibirInformacoes();
    carro2.exibirInformacoes();
    carro3.exibirInformacoes();

    return 0;
}
