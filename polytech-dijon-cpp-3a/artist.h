#pragma once
#include <string>
#include <vector>
#include <ostream>
class Artist
{
private:
	std::string nom_;
	std::string prenom_;
	std::vector<std::string> specialites_;
public:
	Artist(const std::string& nom, const std::string& prenom, std::vector<std::string> specialites);
	const std::string& getNom() const;
	const std::string& getPrenom() const;
	std::vector<std::string> getSpecialites() const;
	void ajouterSpecialite(std::string specialite);
	friend std::ostream& operator << (std::ostream& os ,const Artist& artist);

};

