#pragma once
#include <string>
#include <vector>
#include <ostream>
#include "oeuvre.h"
class Salle
{
private:
	std::string nom_;
	std::vector<Oeuvre*> oeuvres_;
public:
	Salle(const std::string& nom);
	Salle(const Salle& other);
	const std::string getNom() const;
	std::vector<Oeuvre*> getOeuvres() const;
	void ajouterOeuvre(Oeuvre* oeuvre);
	void retirerOeuvre(Oeuvre* oeuvre);
	friend std::ostream& operator << (std::ostream& os, const Salle& salle);
	
};

