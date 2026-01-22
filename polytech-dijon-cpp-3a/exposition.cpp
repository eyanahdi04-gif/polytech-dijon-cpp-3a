#include "exposition.h"

Exposition::Exposition(const std::string& nom, const  std::string& dateDebut, const std::string& dateFin):nom_(nom),dateDebut_(dateDebut),dateFin_(dateFin){}
Exposition::Exposition(const Exposition& other){}


const std::string& Exposition::getNom() const
{
	return nom_;
}
const std::string& Exposition::getDateDebut() const
{
	return dateDebut_;
}
const std::string& Exposition::getDateFin()  const
{
	return dateFin_;
}
std::vector<Salle*> Exposition::getSalles() const
{
	return salles_;
}
void Exposition::ajouterSalle(Salle* salle)
{
	salles_.push_back(salle);
}
void Exposition::retirerSalle(Salle* salle)
{
	salles_.erase(std::remove(salles_.begin(), salles_.end(), salle), salles_.end());
}
void Exposition::ajouterOeuvre(Oeuvre* oeuvre, Salle* salle)
{
	salle->ajouterOeuvre(oeuvre);
}








std::ostream& operator <<(std::ostream& os, const Exposition& exposition)
{
	std::string  ch = "";
	for (const auto& salle: exposition.getSalles())
	{
		ch += salle->getNom() + " / ";
	}

	os << "nom de lexposition : " << exposition.getNom() << "les salles : " << ch;
	return os;


}
