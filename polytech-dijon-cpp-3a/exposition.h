#pragma once
#include <vector>
#include <string>
#include <ostream>
#include "salle.h"
#include "oeuvre.h"

class Exposition
{
private:
	std::string nom_;
	std::string dateDebut_;
	std::string dateFin_;
	std::vector<Salle*> salles_;
public:
	Exposition(const std::string& nom, const  std::string& dateDebut, const std::string& DateFin);
	Exposition(const Exposition& other);
	~Exposition();
	const std::string& getNom() const;
	const std::string& getDateDebut() const;
	const std::string& getDateFin()  const;
	std::vector<Salle*> getSalles() const;
	void ajouterSalle(Salle* salle);
	void retirerSalle(Salle* salle);
	void ajouterOeuvre(Oeuvre* oeuvre, Salle* salle);
	friend std::ostream& operator <<(std::ostream& os, const Exposition& exposition);
};

