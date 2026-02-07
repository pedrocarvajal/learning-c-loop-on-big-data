#pragma once

#include <string>

namespace services {
class DateTime {
    DateTime(const std::string &seed);
    float getTimestamp();
    int getDay();
    int getHour();
    int getMinute();
    int getSecond();
};
}
