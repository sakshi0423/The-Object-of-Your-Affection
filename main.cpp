#include <iostream>
#include "profile.hpp"
#include "profiles_manager.hpp"

int main() {
    ProfilesManager manager;

    Profile sam(30, "Sam Drakkila", "New York", "USA", "He/Him");
    Profile kat(28, "Kathrine Deitch", "Chicago", "USA", "She/Her");

    sam.add_hobby("Listening to Music");
    sam.add_hobby("Watching Movies");
    sam.add_hobby("Clubbing");
    sam.add_hobby("Skateboarding");
    sam.add_hobby("Windsurfing");
    sam.add_hobby("Go Karting");
    sam.add_hobby("Fishing");
    sam.add_hobby("Kayaking");
    sam.add_hobby("Reading");

    kat.add_hobby("Reading");
    kat.add_hobby("Playing Guitar");
    kat.add_hobby("Swimming");

    manager.add_profile(sam);
    manager.add_profile(kat);

    std::cout << "All profiles:" << std::endl;
    manager.display_profiles();

    std::cout << "\nSearching for profiles named 'Sam Drakkila':" << std::endl;
    manager.search_profiles_by_name("Sam Drakkila");

    std::cout << "\nSearching for profiles in 'Chicago':" << std::endl;
    manager.search_profiles_by_city("Chicago");

    return 0;
}
