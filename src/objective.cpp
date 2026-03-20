#include "../include/meadow/objective.hpp"

#include <string>
#include <chrono>
#include <cstdint>

using namespace Meadow;

/**
 * Static instantiation method
 */

Objective Objective::make_objective(uint32_t id) {
    return Objective(id);
}

Objective Objective::make_objective(uint32_t id, const Objective& other) {
    return Objective(id, other);
}

Objective Objective::make_objective(uint32_t id, Objective&& other) noexcept {
    return Objective(id, other);
}

/**
 * Constructors/Destructor
 */

Objective::Objective(uint32_t id) : 
    id(id),
    name(nullptr),
    goal(nullptr),
    description(nullptr),

    priority(0),
    session_tally(0),

    date_created(
        std::chrono::floor<std::chrono::days>(std::chrono::system_clock::now())
    ),
    deadline(INVALID_DATE),

    type(AMBIGUOUS)
{
}

Objective::Objective(uint32_t id, const Objective& other) :
    id(other.id),
    name(other.name),
    goal(other.goal),
    description(other.description),

    priority(other.priority),
    session_tally(other.session_tally),

    date_created(other.date_created),
    deadline(other.deadline),

    type(other.type)
{
}

Objective::Objective(uint32_t id, Objective&& other) noexcept :
    id(other.id),
    name(other.name),
    goal(other.goal),
    description(other.description),

    priority(other.priority),
    session_tally(other.session_tally),

    date_created(other.date_created),
    deadline(other.deadline),

    type(other.type)
{
    other.name = nullptr;
    other.goal = nullptr;
    other.description = nullptr;

    other.priority = 0;
    other.session_tally = 0;

    other.date_created = INVALID_DATE;
    other.deadline = INVALID_DATE;

    other.type = AMBIGUOUS;
}

Objective::~Objective() {
}

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

Objective& Objective::operator=(const Objective& other) {
    if (this != &other) {
        this->id = other.id;

        this->name = other.name;
        this->goal = other.goal;
        this->description = other.description;

        this->priority = other.priority;
        this->session_tally = other.session_tally;

        this->date_created = other.date_created;
        this->deadline = other.deadline;

        this->type = other.type;
    }

    return *this;
}

Objective& Objective::operator=(Objective&& other) noexcept {
    if (this != &other) {
        this->id = other.id;

        this->name = other.name;
        this->goal = other.goal;
        this->description = other.description;

        this->priority = other.priority;
        this->session_tally = other.session_tally;

        this->date_created = other.date_created;
        this->deadline = other.deadline;

        this->type = other.type;
        
        other.name = nullptr;
        other.goal = nullptr;
        other.description = nullptr;

        other.priority = 0;
        other.session_tally = 0;

        other.date_created = INVALID_DATE;
        other.deadline = INVALID_DATE;

        other.type = AMBIGUOUS;
    }

    return *this;
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