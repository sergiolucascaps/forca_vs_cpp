#include<iostream>
#include<vector>
#include<ctime>
#include "sorteiapalavra.hpp"
#include "letodaspalavras.hpp"

namespace Forca
{
	std::string sorteiapalavra() {

		std::vector<std::string> palavras = letodaspalavras();

		if (palavras.size() == 0) {
			std::cout << "Não foram localizadas palavras para sortear" << std::endl;
			exit(0);
		}

		srand(time(NULL));
		short index = rand() % palavras.size();

		return palavras[index];
	}
}