#include <iostream>
using namespace std;

int main() {
  char m[3][3];
  int jogadas, i, j, lin, col;
  char player = 'X';
  cout << "\tJogo da Velha" << endl;
    cout << "\t\t----------" << endl;

    // Exibindo a matriz 3x3
    for (int i = 0; i < 3; i++) {
        cout << "\t\t| ";
        for (int j = 0; j < 3; j++) {
            cout <<m[i][j] << " | ";
        }
        cout << endl << "\t\t----------" << endl;
    }
  for (jogadas = 0; jogadas < 9; jogadas++) {
    cout << "Jogador " << player << " Faça sua jogada:(lin: 0-2 / col: 0-2)\n\n Linha: ";
    cin >> lin;
    cout << "Coluna:";
    getchar();
    cin >> col;
    cout << endl;
    if (m[lin][col] == 'X' || m[lin][col] == 'O' || lin > 2 || col > 2 ||
        lin < 0 || col < 0) {
      cout << "jogada invalida tente novamente \n";
      jogadas--;
      continue;
    }
    m[lin][col] = player;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << m[i][j] << " | ";
        }
        cout << endl << "-----------" << endl;
    }
    if ((m[0][0] == player && m[0][1] == player && m[0][2] == player) ||
        (m[1][0] == player && m[1][1] == player && m[1][2] == player) ||
        (m[2][0] == player && m[2][1] == player && m[2][2] == player) ||
        (m[0][0] == player && m[1][0] == player && m[2][0] == player) ||
        (m[0][1] == player && m[1][1] == player && m[2][1] == player) ||
        (m[0][2] == player && m[1][2] == player && m[2][2] == player) ||
        (m[0][0] == player && m[1][1] == player && m[2][2] == player) ||
        (m[0][2] == player && m[1][1] == player && m[2][0] == player)) {
      cout << "JOGADOR " << player << " GANHOU!\n fim do programa\n";
      break;
    }
    if (player == 'X') {
      player = 'O';
    } else {
      player = 'X';
    }
  }
  if (jogadas == 9) {
    cout << "------EMPATE--------\n fim do programa \n";
  }
}
