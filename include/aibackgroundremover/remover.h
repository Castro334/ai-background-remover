// remover — part of ai-background-remover.

#pragma once

#include <string>
#include <vector>

namespace aibackgroundremover {

class Remover {
public:
    explicit Remover(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace aibackgroundremover
