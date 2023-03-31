#pragma once
#include "util/string_macros.hpp"

#define UTF8_APP_NAME "TranslucentTB"
#define APP_NAME UTIL_WIDEN(UTF8_APP_NAME)

#define APP_COPYRIGHT_YEAR_NUM 2021
#define APP_COPYRIGHT_YEAR UTIL_STRINGIFY(APP_COPYRIGHT_YEAR_NUM)

#define APP_VERSION_FIXED ,,0
#define APP_VERSION UTIL_WIDEN("..")
