#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include "inserirnovapalavra.hpp"
#include "letodaspalavras.hpp"

namespace Forca
{
	void inserirnovapalavra() {

		std::vector<std::string> palavras = letodaspalavras();

		std::cout << "Digite a nova palavra (USANDO LETRAS MAIUSCULAS)";
		std::string nova_palavra;
		std::cin >> nova_palavra;

		std::ofstream arquivo;
		arquivo.open("palavras.txt");

		if (!arquivo.is_open()) {
			std::cout << "Falha ao abrir arquivo de palavras" << std::endl;
			exit(0);
		}

		palavras.push_back(nova_palavra);
		arquivo << palavras.size();

		for (short i = 0; i < palavras.size(); i++) {
			arquivo << std::endl << palavras[i];
		}

		arquivo.close();
	}
}