#include<iostream>
#include<map>
#include<array>

#include "letraexiste.hpp"
#include "ganhou.hpp"
#include "imprimecabecalho.hpp"
#include "imprimechuteserrados.hpp"
#include "imprimepalavrasecreta.hpp"
#include "chuta.hpp"
#include "letodaspalavras.hpp"
#include "sorteiapalavra.hpp"
#include "inserirnovapalavra.hpp"

using namespace std;

static string palavra_secreta;
static map<char, bool> chutes;
static array<char, 5> chutes_errados;
static int chutes_errados_qtd = 0;

int main() {

	palavra_secreta = Forca::sorteiapalavra();

	while (!Forca::ganhou(palavra_secreta, chutes) && chutes_errados_qtd < 5) {
		system("clear||cls");
		Forca::imprimecabecalho();
		Forca::imprimechuteserrados(chutes_errados);
		Forca::imprimepalavrasecreta(palavra_secreta, chutes);
		Forca::chuta(chutes_errados, chutes_errados_qtd, chutes, palavra_secreta);
	}

	cout << "A palavra secreta era " << palavra_secreta << endl;
	if (Forca::ganhou(palavra_secreta, chutes)) {
		cout << "Parabéns, você ganhou" << endl;
		cout << "Deseja adicionar uma nova palavra ao banco? (S/N)";
		char op;
		cin >> op;

		if (op == 'S') {
			Forca::inserirnovapalavra();
		}
	}
	else
		cout << "Você perdeu! jogue novamente" << endl;
}