#include "../include/cli.hpp"
#include "../include/api.hpp"

#include <iostream>
#include <string>

using namespace Meadow;

void CLI::init(std::string start_message) {
    std::cout << "**************************************************************\n"
              << "* " << start_message 
              << "\n**************************************************************"
              << "\n\n";
}

int CLI::recieve_input() {
    list_modes();

    int selected_mode{0};

    while (true) {
        if (std::cin >> selected_mode) {
            if (selected_mode < 0 || selected_mode >= CLI_MODES.size()) {
                std::cout << "Invalid input. Input must be within option range.\n";
                continue;
            }

            break;
        }

        std::cout << "Invalid input. Input must be an integer.\n";

        std::cin.clear();

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return selected_mode;
}

void CLI::invoke_mode(int cli_mode) {
    switch (cli_mode) {
        case 0:
            read_objectives();
            break;
        default:
            std::cout << "ERROR. `invoke_mode()` was given a bad index.\n";
            break;
    }
}

void CLI::list_modes() {
    std::cout << "**************************************************************\n" << "Select a following mode:" << "\n" ;

    for (int i = 0; i < CLI_MODES.size(); i++) {
        std::cout << "[" << i << "]: " << CLI_MODES[i] << "\n";
    }

    std::cout << "\n";
}

void CLI::read_objectives() {
    std::sort(CLI::objectives.begin(), CLI::objectives.end());

    std::cout << "**************************************************************\n* READ MODE\n**************************************************************\n\n";

    if (CLI::objectives.size() == 0) {
        std::cout << "* No objectives to list.\n\n";
    }

    for (int i = 0; i < CLI::objectives.size(); i++) {
        std::cout << "**************************************************************\n* " <<
        i << ": ID: " << CLI::objectives[i].get_id() << 
        ", Name: " << CLI::objectives[i].get_name() << 
        ", Goal: " << CLI::objectives[i].get_goal() <<
        ", Description: " << CLI::objectives[i].get_description() <<
        ", Priority: " << CLI::objectives[i].get_priority() <<
        ", Sessions: " << CLI::objectives[i].get_session_tally() <<
        ", Created: " << CLI::objectives[i].get_date_created() <<
        ", Deadline: " << CLI::objectives[i].get_deadline() <<
        ", Type Code: " << CLI::objectives[i].get_type() << "\n";
    }

    std::cout << "\n";
}

std::vector<Meadow::Objective> CLI::get_objectives() {
    return (CLI::objectives);
}

void CLI::set_objectives(const std::vector<Meadow::Objective>& objectives) {
    CLI::objectives.erase(CLI::objectives.begin(), CLI::objectives.end());

    if (&CLI::objectives != &objectives) {
        for (auto& objective : objectives) {
            CLI::objectives.push_back(objective);
        }
    }
}

void CLI::set_objectives(std::vector<Meadow::Objective>&& objectives) {
    CLI::objectives.erase(CLI::objectives.begin(), CLI::objectives.end());
    
    if (&CLI::objectives != &objectives) {
        for (auto& objective : objectives) {
            CLI::objectives.push_back(objective);
        }
    }

    objectives.erase(objectives.begin(), objectives.end());
}