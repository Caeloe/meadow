#pragma once

#include "../include/api.hpp"

#include <string>
#include <array>
#include <vector>

namespace Meadow {
    class CLI {
        public:
            static void init(std::string start_message);

            static int recieve_input();
            static void invoke_mode(int cli_mode);

            static void read_objectives();

            static std::vector<Meadow::Objective> get_objectives();

            static void set_objectives(const std::vector<Meadow::Objective>& objectives);
            static void set_objectives(std::vector<Meadow::Objective>&& objectives);

        private:
            inline static const std::array<std::string, 1> CLI_MODES{
                "READ_OBJECTIVES"
            };

            inline static int current_mode;
            inline static std::vector<Meadow::Objective> objectives;

            static void list_modes();
    };
}