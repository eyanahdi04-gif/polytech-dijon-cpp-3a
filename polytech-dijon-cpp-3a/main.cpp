#include <iostream>
#include "artist.h"
#include "oeuvre.h"
#include <vector>

int main()
{
	std::vector<std::string> specialite= {"peinture","poème"};
	Artist alice("alice", "kim", specialite);
	std::cout << alice << std::endl;
	Oeuvre monalis("lala", "monalisa", "une belle femme", true, "peinture", 1.2);
	std::cout << alice << std::endl;
	std::cout << monalis << std::endl;
	return 0;
};