#pragma once
#include "artist.h"
#include <ostream>
class Oeuvre
{
private:
	std::string id_;
	std::string nom_;
	std::string description_;
	bool statut_;
	Artist* artist_;
	std::string type_;
	double prix_;
public:
	Oeuvre(const std::string& id, const std::string& nom,const std::string& description ,bool statut,const  std::string& type, double prix, Artist* artist = nullptr);
	const std::string& getId() const;
	const std::string& getNom() const;
	const std::string& getDescription() const;
	bool getStatut() const ;
	const  std::string& getType() const;
	double getPrix();
	Artist* getArtist() const;
	void donnerArtist(Artist* artist);
	friend std::ostream& operator << (std::ostream& os, const Oeuvre& oeuvre);

};

