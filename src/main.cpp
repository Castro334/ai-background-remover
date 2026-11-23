// main.cpp — entry point. Wires config and subsystems together.

#include "aibackgroundremover/settings.h"
#include "aibackgroundremover/remover.h"
#include "aibackgroundremover/video.h"
#include "aibackgroundremover/batch.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    aibackgroundremover::Settings settings = aibackgroundremover::Settings::load_default();
    aibackgroundremover::Remover remover(settings.store_path);
    aibackgroundremover::Video video(settings.store_path);
    aibackgroundremover::Batch batch(settings.store_path);
    std::fprintf(stderr, "[ai-background-remover] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
