#include<iostream>
#include "chuta.hpp"
#include "letraexiste.hpp"

namespace Forca
{
    void chuta(std::array<char, 5>& chutes_errados, int& chutes_errados_qtd, std::map<char, bool>& chutes, std::string& palavra_secreta)
    {
        std::cout << "Seu chute: ";
        char chute;
        std::cin >> chute;

        if (!letraexiste(chute, palavra_secreta)) {
            chutes_errados[chutes_errados_qtd] = chute;
            chutes_errados_qtd++;
        }

        chutes[chute] = true;
    }
}