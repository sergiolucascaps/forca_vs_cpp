#include<iostream>
#include "imprimechuteserrados.hpp"

namespace Forca
{
	void imprimechuteserrados(const std::array<char, 5>& chutes_errados) {
		std::cout << "Chutes errados: ";

		for (char chute : chutes_errados) {
			std::cout << chute << " ";
		}

		std::cout << std::endl;
	}
}