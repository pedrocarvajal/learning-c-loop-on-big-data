#include "services/logger/headers/logger.hpp"

int main() {
    services::Logger logger("index");
    logger.info("Hello world...");
}
