#include "musee.h"
Musee::Musee(const std::string& nom, const std::string& location):nom_(nom),location_(location){}
Musee::Musee(const Musee& other){}

const std::string& Musee::getnom() const
{
	return nom_;
}
const std::string& Musee::getLocation() const
{
	return location_;
}
std::vector<Oeuvre*> Musee::getOeuvre() const
{
	return oeuvres_;
}
std::vector<Exposition*> Musee::getExposition() const
{
	return exposition_;
}

void Musee::ajoutOeuvre(Oeuvre* oeuvre)
{
	oeuvres_.push_back(oeuvre);
}
Oeuvre* Musee::chercherOeuvre(std::string nom)
{
	for (const auto& oeuvre : oeuvres_)
	{
		if (oeuvre->getNom() == nom)
			return oeuvre;
	}
	return nullptr;
}
void Musee::retirerOeuvre(Oeuvre* oeuvre)
{
	oeuvres_.erase(std::remove(oeuvres_.begin(), oeuvres_.end(), oeuvre),oeuvres_.end());
}

