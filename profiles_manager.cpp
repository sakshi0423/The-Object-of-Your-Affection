#include "profiles_manager.hpp"
#include <iostream>

void ProfilesManager::add_profile(const Profile& profile) {
    profiles.push_back(profile);
}

void ProfilesManager::display_profiles() const {
    for (const auto& profile : profiles) {
        std::cout << profile.view_profile() << std::endl;
    }
}

void ProfilesManager::search_profiles_by_name(const std::string& name) const {
    for (const auto& profile : profiles) {
        if (profile.get_name() == name) {
            std::cout << profile.view_profile() << std::endl;
        }
    }
}

void ProfilesManager::search_profiles_by_city(const std::string& city) const {
    for (const auto& profile : profiles) {
        if (profile.get_city() == city) {
            std::cout << profile.view_profile() << std::endl;
        }
    }
}
