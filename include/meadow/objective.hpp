#pragma once

#include <string>
#include <chrono>
#include <cstdint>

namespace Meadow {
    enum Objective_Type {
        AMBIGUOUS,
        TASK,
        GOAL,
        HABIT
    };

    class Objective {
        public:
            /**
             * Constructor/Destructor
             */

            Objective();
            Objective(const Objective& other);
            Objective(Objective&& other);

            static constexpr std::chrono::year_month_day INVALID_DATE{
                std::chrono::year{0}, 
                std::chrono::month{0}, 
                std::chrono::day{0}
            };

            static Objective make_objective();
            static Objective make_objective(const Objective& other);
            static Objective make_objective(Objective&& other);

            /**
             * Getters
             */
            
            static uint32_t get_max_name_length();
            static uint32_t get_max_goal_length();
            static uint32_t get_max_description_length();

            uint32_t get_id();
            std::string get_name();
            std::string get_goal();
            std::string get_description();
            uint32_t get_priority();
            uint32_t get_session_tally();
            std::chrono::year_month_day get_date_created();
            std::chrono::year_month_day get_deadline();
            enum Objective_Type get_type();

            /**
             * Setters
             */

            static void set_max_name_length(uint32_t max_name_length);
            static void set_max_goal_length(uint32_t max_goal_length);
            static void set_max_description_length(uint32_t max_description_length);

            Objective& set_id(uint32_t id);
            Objective& set_name(std::string name);
            Objective& set_goal(std::string goal);
            Objective& set_description(std::string description);
            Objective& set_priority(uint32_t priority);
            Objective& set_session_tally(uint32_t session_tally);
            Objective& set_date_created(std::chrono::year_month_day date_created);
            Objective& set_deadline(std::chrono::year_month_day deadline);
            Objective& set_type(enum Objective_Type type);

            /**
             * Operators
             */

            Objective& operator=(const Objective& other);
            Objective& operator=(Objective&& other);
            bool operator<(const Objective& other);
            bool operator>(const Objective& other);

            /**
             * Util Methods
             */

            bool is_valid_name(std::string name);
            bool is_valid_goal(std::string goal);
            bool is_valid_description(std::string description);

        private:
            static const bool DEBUG = true;

            inline static uint32_t max_name_length, max_goal_length, max_description_length;

            uint32_t id;

            std::string name, goal, description;
            uint32_t priority, session_tally;
            std::chrono::year_month_day date_created, deadline;
            enum Objective_Type type;
    };
}