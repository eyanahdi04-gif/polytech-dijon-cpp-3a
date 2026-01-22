#include <iostream>
#include "artist.h"
#include <vector>

int main()
{
	std::vector<std::string> specialite= {"peinture","poème"};
	Artist alice("alice", "kim", specialite);
	std::cout << alice << std::endl;
	return 0;
};