#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    float posi_t;
    float posi_i;
    float velo_i;
    float tempo;
    float aceleracao;
    
    // Perguntas para o usuário responder.
    
    cout << "Esse programa vai dizer a posição de um objeto em função do tempo." << endl;
    cout << endl;
    cout << "Qual a posição inicial do objeto? " << endl;
    cin >> posi_i;
    cout << "Qual a velocidade inicial do objeto? " << endl;                 
    cin >> velo_i;
    cout << "Qual é a aceleração do objeto? " << endl;
    cin >> aceleracao;
    cout << "Agora fale em qual tempo:" << endl;
    cin >> tempo;
    
    //Fórmula apresentada.
    
    posi_t = posi_i + (velo_i * tempo) + ((aceleracao * (tempo * tempo)) / 2);
    cout << "A posição do objeto em relaçao ao tempo é: " << posi_t << endl;            

    return 0;
}
