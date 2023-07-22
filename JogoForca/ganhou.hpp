#pragma once
#include<string>
#include<map>

namespace Forca
{
	bool ganhou(const std::string palavra_secreta, const std::map<char, bool>& chutes);
}