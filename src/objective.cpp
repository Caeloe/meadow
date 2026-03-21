#include "../include/meadow/objective.hpp"

#include <string>
#include <chrono>
#include <cstdint>
#include <iostream>

using namespace Meadow;

/**
 * Static instantiation method
 */

Objective Objective::make_objective() {
    return Objective();
}

Objective Objective::make_objective(const Objective& other) {
    return Objective(other);
}

Objective Objective::make_objective(Objective&& other) {
    return Objective(other);
}

/**
 * Constructors/Destructor
 */

Objective::Objective() = default;

Objective::Objective(const Objective& other) = default;

Objective::Objective(Objective&& other) = default;

/**
 * Getters
 */

uint32_t Objective::get_max_name_length() {
    return max_name_length;
}

uint32_t Objective::get_max_goal_length() {
    return max_goal_length;
}

uint32_t Objective::get_max_description_length() {
    return max_description_length;
}

uint32_t Objective::get_id() {
    return this->id;
}

std::string Objective::get_name() {
    return this->name;
}

std::string Objective::get_goal() {
    return this->goal;
}

std::string Objective::get_description() {
    return this->description;
}

uint32_t Objective::get_priority() {
    return this->priority;
}

uint32_t Objective::get_session_tally() {
    return this->session_tally;
}

std::chrono::year_month_day Objective::get_date_created() {
    return this->date_created;
}

std::chrono::year_month_day Objective::get_deadline() {
    return this->deadline;
}

enum Objective_Type Objective::get_type() {
    return this->type;
}

/**
 * Setters
 */

void Objective::set_max_name_length(uint32_t max_name_length) {
    Objective::max_name_length = max_name_length;
}

void Objective::set_max_goal_length(uint32_t max_goal_length) {
    Objective::max_goal_length = max_goal_length;
}

void Objective::set_max_description_length(uint32_t max_description_length) {
    Objective::max_description_length = max_description_length;
}

Objective& Objective::set_id(uint32_t id) {
    this->id = id;
    return *this;
}

Objective& Objective::set_name(std::string name) {
    this->name = name;
    return *this;
}

Objective& Objective::set_goal(std::string goal) {
    this->goal = goal;
    return *this;
}

Objective& Objective::set_description(std::string description) {
    this->description = description;
    return *this;
}

Objective& Objective::set_priority(uint32_t priority) {
    this->priority = priority;
    return *this;
}

Objective& Objective::set_session_tally(uint32_t session_tally) {
    this->session_tally = session_tally;
    return *this;
}

Objective& Objective::set_date_created(std::chrono::year_month_day date_created) {
    this->date_created = date_created;
    return *this;
}

Objective& Objective::set_deadline(std::chrono::year_month_day deadline) {
    this->deadline = deadline;
    return *this;
}

Objective& Objective::set_type(enum Objective_Type type) {
    this->type = type;
    return *this;
}

/**
 * Operators
 */

Objective& Objective::operator=(const Objective& other) = default;

Objective& Objective::operator=(Objective&& other) = default;

bool Objective::operator<(const Objective& other) {
    return (this->id < other.id) ? true : false;
}

bool Objective::operator>(const Objective& other) {
    return (this->id > other.id) ? true : false;
}

/**
 * Util Methods
 */

bool Objective::is_valid_name(std::string name) {
    return (name.size() <= max_name_length) ? true : false;
}

bool Objective::is_valid_goal(std::string goal) {
    return (goal.size() <= max_goal_length) ? true : false;
}

bool Objective::is_valid_description(std::string description) {
    return (description.size() <= max_description_length) ? true : false;
}