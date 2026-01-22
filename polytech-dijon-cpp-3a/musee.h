#pragma once
#include "oeuvre.h"
#include "exposition.h"
#include <string>
#include <vector>
#include <ostream>
class Musee
{
private:
	std::string nom_;
	std::string location_;
	std::vector<Oeuvre*> oeuvres_;
	std::vector<Exposition*> exposition_;
public:
	Musee(const std::string& nom,const std::string& location);
	Musee(const Musee& other);
	const std::string& getNom() const;
	const std::string& getLocation() const;
	std::vector<Oeuvre*> getOeuvre() const;
	std::vector<Exposition*> getExposition() const;

	void ajoutOeuvre(Oeuvre* oeuvre);
	Oeuvre* chercherOeuvre(std::string nom);
	void retirerOeuvre(Oeuvre* oeuvre);
	friend std::ostream& operator <<(std::ostream& os, const Musee& musee);

};
