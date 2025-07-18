#pragma once

#include <vector>
#include <string>
#include <unordered_map>
#include <utility>

std::string break_ties(const std::unordered_map<std::string, double>& cost,
                       const std::unordered_map<std::string, long long>& total_utility,
                       std::vector<std::string> choices);

std::vector<std::string> equal_shares_utils(
    const std::vector<std::string>& voters,
    const std::vector<std::string>& projects,
    const std::unordered_map<std::string, double>& cost,
    const std::unordered_map<std::string, std::vector<std::pair<std::string, long long>>>& approvers_utilities,
    const std::unordered_map<std::string, long long>& total_utility,
    double total_budget);
