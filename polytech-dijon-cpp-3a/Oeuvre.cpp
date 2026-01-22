#include "Oeuvre.h"
Oeuvre::Oeuvre(const std::string& id, const std::string& nom, const std::string& description, bool statut, const  std::string& type, double prix) :
	id_(id), nom_(nom), description_(description), statut_(statut), type_(type), prix_(prix) {}

const std::string& Oeuvre::getId() const
{
	return id_;
}
const std::string& Oeuvre::getNom() const
{
	return nom_;
}
const std::string& Oeuvre::getDescription()  const
{
	return description_;
}

bool Oeuvre::getStatut() const
{
	return statut_;
}
const  std::string& Oeuvre::getType() const
{
	return type_;
}

double Oeuvre::getPrix()
{
	return prix_;
}
Artist* Oeuvre::getArtist() const
{
	return artist_;
}
void Oeuvre::donnerArtist(Artist* artist)
{
	artist_ = artist;
}
std::ostream& operator << (std::ostream& os, const Oeuvre& oeuvre)
{
	std::string nom_artist;
	if (oeuvre.getArtist() !=nullptr)
	{
		nom_artist = oeuvre.getArtist()->getNom();
	}
	else
	{
		nom_artist = "pas d'artist";
	}
	os << "nom :" << oeuvre.getNom() << "     //id :" << oeuvre.getId() << "     //description :" << oeuvre.getDescription() <<
		"     //type" << oeuvre.getType() << "    //artist    :" << nom_artist ;
	return os;

 }

