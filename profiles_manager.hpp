#ifndef PROFILES_MANAGER_HPP
#define PROFILES_MANAGER_HPP

#include "profile.hpp"
#include <vector>

class ProfilesManager {
  private:
    std::vector<Profile> profiles;

  public:
    // Method to add a profile
    void add_profile(const Profile& profile);

    // Method to display all profiles
    void display_profiles() const;

    // Method to search profiles by name
    void search_profiles_by_name(const std::string& name) const;

    // Method to search profiles by city
    void search_profiles_by_city(const std::string& city) const;
};

#endif
