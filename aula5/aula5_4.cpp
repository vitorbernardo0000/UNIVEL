#include <iostream>
using namespace std;

int main(){
    bool porta;
    cout << "Digite se a porta está aberta ('1' para sim e '0' para não)";
    cin >> porta;

    if(porta) {
        cout << "A porta está aberta, favor fechar e ligar o ar-condicionado";}

    else{
       cout  << "Ligar o ar-condicionado";
 
    }
    return 0;
}
