#include<iostream>
#include<string>
#include "letraexiste.hpp"

namespace Forca
{
	bool letraexiste(char chute, std::string& palavra_secreta) {

		// VERSÃO MELHORADA NO C++ 11
		for (char letra : palavra_secreta) {
			if (letra == chute)
				return true;
		}

		// SINTAXE ANTIGA
		// for(short i = 0; i < palavra_secreta.size(); i++) {
		//     if(chute == palavra_secreta[i])
		//         return true;
		// }

		return false;
	}
}