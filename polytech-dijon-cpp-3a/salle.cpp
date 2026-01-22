#include "salle.h"




Salle::Salle(const std::string& nom):nom_(nom)
{ }
Salle::Salle(const Salle& other){}

const std::string Salle::getNom() const
{
	return nom_;
}
std::vector<Oeuvre*> Salle::getOeuvres() const
{
	return oeuvres_;
}
void Salle::ajouterOeuvre(Oeuvre* oeuvre)
{
	oeuvres_.push_back(oeuvre);
}
void Salle::retirerOeuvre(Oeuvre* oeuvre)
{
	oeuvres_.erase(std::remove(oeuvres_.begin(), oeuvres_.end(), oeuvre), oeuvres_.end());
}
std::ostream& operator << (std::ostream& os, const Salle& salle)
{   
	std::string ch = "";
	for(Oeuvre* oeuvre:salle.getOeuvres())
{
		ch += oeuvre->getNom() + " / ";
}
	os << "nom de la salle :" << salle.getNom() << "   // ls oeuvres expose dans cette salle :   " << ch;
	return os;
}