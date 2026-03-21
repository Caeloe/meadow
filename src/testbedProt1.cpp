#include "../include/api.hpp"
#include "../include/cli.hpp"

#include <string>

int main(int argc, char* argv[]) {
    auto obj1 = Meadow::Objective::make_objective();
    obj1.set_id(1).set_name("Obj1").set_goal("Be happy").set_description("Test 1").set_priority(1).set_session_tally(0).set_type(Meadow::TASK);
    
    auto obj2 = Meadow::Objective::make_objective(obj1);
    obj2.set_id(2).set_name("Obj2").set_goal("Be sad").set_description("Test 2").set_priority(2).set_session_tally(2).set_type(Meadow::HABIT);
    
    std::vector<Meadow::Objective> test_list;

    test_list.push_back(obj1);
    test_list.push_back(obj2);

    Meadow::CLI::init("Command line initialized.");

    Meadow::CLI::set_objectives(test_list);

    bool running = true;

    while(running) {
        int selected_mode = Meadow::CLI::recieve_input();
        Meadow::CLI::invoke_mode(selected_mode);
    }
}