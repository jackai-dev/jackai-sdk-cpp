#pragma once
#include <set>
#include <string>

namespace omniwrap {
struct AgentLimits {
    int max_steps = 8;
    int max_tool_calls = 16;
    bool allow_mutations = false;
};
class AgentSession {
public:
    static constexpr const char* kSourceSha256 = "c7ca5e5ebb4c092910ec72b371e188303358c5e34d2908c0a88f782a241162cf";
    static constexpr int kRegisteredOperationsCount = 8;
    explicit AgentSession(AgentLimits limits = {}, std::set<std::string> allowed = {})
        : limits_(limits), allowed_(std::move(allowed)) {}
    bool can_invoke(const std::string& operation_id, bool is_mutation = false) const {
        if (steps_completed_ >= limits_.max_steps || tool_calls_completed_ >= limits_.max_tool_calls) return false;
        if (is_mutation && !limits_.allow_mutations) return false;
        return allowed_.empty() || allowed_.count(operation_id) > 0;
    }
    void record_step(int tool_calls = 1) {
        steps_completed_ += 1;
        if (tool_calls > 0) tool_calls_completed_ += tool_calls;
    }
private:
    AgentLimits limits_;
    std::set<std::string> allowed_;
    int steps_completed_ = 0;
    int tool_calls_completed_ = 0;
};
} // namespace omniwrap
