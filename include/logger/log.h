#pragma once

#include <chrono>
#include <ctime>
#include <iostream>
#include <stdexcept>

#include <logger/config.h>

namespace logger {

void success(const std::string message, bool newline = true);

void info(const std::string message, bool newline = true);

void debug(const std::string message, bool newline = true);

void warning(const std::string message, bool newline = true);

void error(const std::string message,
           const std::string runtimeErrorMessage = "", bool newLine = true);

std::string getTime();

} // namespace logger