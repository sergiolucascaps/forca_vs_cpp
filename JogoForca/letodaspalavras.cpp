#include<iostream>
#include<fstream>
#include "letodaspalavras.hpp"

namespace Forca
{
	std::vector<std::string> letodaspalavras() {
		std::ifstream arquivo;
		arquivo.open("palavras.txt");

		if (!arquivo.is_open()) {
			std::cout << "Falha ao abrir banco de palavras" << std::endl;
			exit(0);
		}

		int quantidade_palavras;
		arquivo >> quantidade_palavras;

		std::vector<std::string> palavras;

		for (short i = 0; i < quantidade_palavras; i++) {
			std::string palavra;
			arquivo >> palavra;

			palavras.push_back(palavra);
		}

		arquivo.close();

		return palavras;
	}
}