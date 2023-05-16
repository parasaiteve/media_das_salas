//incluir as bibliotecas
#include <iostream>
#include <cmath>
using namespace std;
//inicio do programa
int main() {
    //Declaração das variaveis
    float media;
    int sala[6];
    //Array das salas e seus valores
    sala[0] = 35;
    sala[1] = 4;
    sala[2] = 20;
    sala[3] = 22;
    sala[4] = 36;
    sala[5] = 30;
    //Condição if para mostrar as salas para a interface de usuario
    for(int i = 0; i < 6; i++) {
        cout << "A sala " << i + 1 << " tem " << sala[i] << " alunos" << endl;
    }
    //Calculo da media das salas e mostrar a media para a interface de usuario
    media = (sala[0] + sala[1] + sala[2] + sala[3] + sala[4] + sala[5]) / 6;
    cout << "A media é " << media << endl;
    //Condição if e else para mostrar qual sala esta acima da medio ou abaixo
    if (sala[0] > media){
        cout << "A sala " << 1 << " está acima da media" << endl;
    }
    else {
        cout << "A sala " << 1 << " está abaixo da media" << endl;
    }
    if(sala[1] > media) {
        cout << "A sala " << 2 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 2 << " está abaixo da media" << endl;
    }
    if(sala[2] > media) {
        cout << "A sala " << 3 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 3 << " está abaixo da media" << endl;
    }
    if(sala[3] > media) {
        cout << "A sala " << 4 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 4 << " está abaixo da media" << endl;
    }
    if(sala[4] > media) {
        cout << "A sala " << 5 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 5 << " está abaixo da media" << endl;
    }
    if(sala[5] > media) {
        cout << "A sala " << 6 << " está a cima da media" << endl;
    }
    else {
        cout << "A sala " << 6 << " está abaixo da media" << endl;
    }
//fechamento do programa
return 0;
}