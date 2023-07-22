#include "ganhou.hpp"

namespace Forca
{
	bool ganhou(const std::string palavra_secreta, const std::map<char, bool>& chutes) {
		for (char letra : palavra_secreta) {
			if (chutes.find(letra) == chutes.end() || !chutes.at(letra))
				return false;
		}

		return true;
	}
}