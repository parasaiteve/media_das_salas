//Incluir as bibliotecas
#include <iostream>
#include <cmath>
using namespace std;
//inicio do programa
int main() {
    //Declaração das Variaveis
    float media;
    int sala[6];
    //Pergunta ao usuario quantos alunos tem em cada sala
    cout << "Quantos alunos tem na sala 1? ";
    cin >> sala[0];
     cout << "Quantos alunos tem na sala 2? ";
    cin >> sala[1];
     cout << "Quantos alunos tem na sala 3? ";
    cin >> sala[2];
     cout << "Quantos alunos tem na sala 4? ";
    cin >> sala[3];
     cout << "Quantos alunos tem na sala 5? ";
    cin >> sala[4];
     cout << "Quantos alunos tem na sala 6? ";
    cin >> sala[5];
    //Condição if para mostrar as salas e quantos alunos tem para a interface de usuario
    for(int i = 0; i < 6; i++) {
        cout << "A sala " << i + 1 << " tem " << sala[i] << " alunos" << endl;
    }
    //Calculo da media e mostrar para a interface de usuario
    media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]) / 6;
    cout << "A media é " << media << endl;
    //Condição if e else para ver se a sala esta acima ou abaixo da media
    if (sala[0] > media){
        cout << "A sala " << 1 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 1 << " está abaixo da media" << endl;
    }
    if(sala[1] > media) {
        cout << "A sala " << 2 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 2 << " está abaixo da media" << endl;
    }
    if(sala[2] > media) {
        cout << "A sala " << 3 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 3 << " está abaixo da media" << endl;
    }
    if(sala[3] > media) {
        cout << "A sala " << 4 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 4 << " está abaixo da media" << endl;
    }
    if(sala[4] > media) {
        cout << "A sala " << 5 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 5 << " está abaixo da media" << endl;
    }
    if(sala[5] > media) {
        cout << "A sala " << 6 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 6 << " está abaixo da media" << endl;
    }
    //Variavel para a sala com o maior ou menos numero de alunos
    int maior_sala = 0;
    int menor_sala = 0;
    //Condição if para mostrar qual sala tem o maior ou menor numero de alunos
    for (int a = 1; a < 6 ; a++) {
        if (sala[a] > sala[maior_sala]) {
            maior_sala = a;
        }
        if (sala[a] < sala[menor_sala]) {
            menor_sala = a;
        }
    }

    // a interface mostra qual sala tem o maior numero e menor numero de alunos 
    cout << "A sala com o maior número de alunos é a sala " << (maior_sala+1)
         << " com " << sala[maior_sala] << " alunos." << endl;
    cout << "A sala com o menor número de alunos é a sala " << (menor_sala+1)
         << " com " << sala[menor_sala] << " alunos." << endl;

// fechamento do programa
return 0;
}
