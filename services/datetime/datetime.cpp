#pragma once

#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>

namespace services {
class DateTime {
    std::tm datetime;

    DateTime(const std::string& seed) {
        std::tm tm = {};
        std::istringstream stream(seed);
        stream >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");
        datetime = tm;
    }

    float getTimestamp() {
        return std::mktime(&datetime);
    }

    int getDay() {
        return datetime.tm_mday;
    }

    int getHour() {
        return datetime.tm_hour;
    }

    int getMinute() {
        return datetime.tm_min;
    }

    int getSecond() {
        return datetime.tm_sec;
    }

    ~DateTime() {
    }
};
}
