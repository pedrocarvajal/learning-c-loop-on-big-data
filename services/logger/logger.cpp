#include <iostream>
#include "services/logger/headers/logger.hpp"
#include "services/logger/consts/color.hpp"
#include "services/datetime/headers/datetime.hpp"

namespace services {
Logger::Logger(const std::string prefix) {
    this->prefix = prefix;
}

void Logger::info(const std::string message) {
    std::cout << getFormattedMessage(enums::Level::INFO, message);
}

std::string Logger::getFormattedMessage(
    enums::Level severity,
    const std::string message
    ) {
    return getTime() + " " + getLevel(severity) + " " + getPrefix() + " > " +
           message;
}

std::string Logger::getTime() {
    DateTime now;
    return "[" + now.getFormatted() + "]";
}

std::string Logger::getLevel(enums::Level severity) {
    if (severity == enums::Level::INFO)
        return consts::color::WHITE + "[INFO]" + consts::color::RESET;

    return "";
}

std::string Logger::getPrefix() {
    if (!prefix.empty())
        return "[" + prefix + "]";

    return "";
}
}
