// video.cpp — part of ai-background-remover.

#include "aibackgroundremover/video.h"

#include <cstdio>

namespace aibackgroundremover {

Video::Video(const std::string& config_path)
    : config_path_(config_path) {}

void Video::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Video::run() {
    if (verbose_) std::fprintf(stderr, "[ai-background-remover] video: run\n");
    // core logic lives here
    return true;
}

}  // namespace aibackgroundremover
