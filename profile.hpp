#ifndef PROFILE_HPP
#define PROFILE_HPP

#include <string>
#include <vector>

class Profile {
  private:
    int age;
    std::string name;
    std::string city;
    std::string country;
    std::string pronoun;
    std::vector<std::string> hobbies;

  public:
    // Constructor
    Profile(int new_age, std::string new_name, std::string new_city, std::string new_country, std::string new_pronoun = "They/Them");

    // Method to add a hobby
    void add_hobby(std::string new_hobby);

    // Method to view profile
    std::string view_profile() const;

    // Getters
    std::string get_name() const;
    int get_age() const;
    std::string get_city() const;
    std::string get_country() const;
};

#endif
