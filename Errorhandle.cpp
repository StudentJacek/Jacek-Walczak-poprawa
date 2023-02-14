/**
 * @file Errorhandle.cpp
 * @brief Plik zawiera definicję klasy ErrorHandle
 */

#include "error_handle.h"

ErrorHandle::ErrorHandle() {}

void ErrorHandle::reportError(const std::string& error_message) {
  error_log_.push_back(error_message);
}

std::vector<std::
