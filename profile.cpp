#include "profile.hpp"
#include <iostream>

Profile::Profile(int new_age, std::string new_name, std::string new_city, std::string new_country, std::string new_pronoun)
    : age(new_age), name(new_name), city(new_city), country(new_country), pronoun(new_pronoun) {
}

void Profile::add_hobby(std::string new_hobby) {
    hobbies.push_back(new_hobby);
}

std::string Profile::view_profile() const {
    std::string bio = "Name: " + name + "\nAge: " + std::to_string(age) + "\nCity: " + city + "\nCountry: " + country + "\nPronoun: " + pronoun + "\nHobbies: ";
    for (int i = 0; i < hobbies.size(); i++) {
        if ((i + 1) % 3 == 0 && i < hobbies.size() - 1) {
            bio += hobbies[i] + ",\n";
        } else if (i < hobbies.size() - 1) {
            bio += hobbies[i] + ", ";
        } else {
            bio += hobbies[i] + ".\n";
        }
    }
    return bio;
}

// Getters
std::string Profile::get_name() const { return name; }
int Profile::get_age() const { return age; }
std::string Profile::get_city() const { return city; }
std::string Profile::get_country() const { return country; }
