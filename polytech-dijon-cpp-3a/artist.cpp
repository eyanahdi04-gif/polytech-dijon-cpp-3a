#include "artist.h"


Artist::Artist(const std::string& nom, const	std::string& prenom, std::vector<std::string> specialites):nom_(nom),prenom_(prenom),specialites_(specialites){}

std::string Artist::getNom() const
{
	return nom_;
}
std::string Artist::getPrenom() const
{
	return prenom_;
}
std::vector<std::string> Artist::getSpecialites() const
{
	return specialites_;
}

void Artist::ajouterSpecialite(std::string specialite)
{
	specialites_.push_back(specialite);
}
std::ostream& operator << (std::ostream& os, const Artist & artist)
{
	std::string ch = "";
	for (std::string specialite : artist.getSpecialites())
	{
		ch += specialite + " / ";
	}
	os << "nom artist :" << artist.getNom() << "    //prenom artist :" << artist.getPrenom();
		os<< "     //specialites {" << ch << "}/n";
	return os;
 }