/*
 * Ciff
 * Copyright (C) 2015 Amir Hassan <amir@viel-zu.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "Color.hpp"
#include "cstdlib"
#include <iostream>
#include <cstdint>
#include <limits>

static long parse24bitHexRGB(const char *str) {
    errno = 0;
    char *temp;
    long val = strtol(str, &temp, 16);

    if (std::string(str).length() != 6 || temp == str ||
        *temp != '\0' ||
        ((val == std::numeric_limits<long>().min() || val == std::numeric_limits<long>().max()) && errno == ERANGE)) {
         std::cerr << "'" << str << "' is not a 24bit hexadecimal value." << std::endl;
         std::cerr << "For example white is represented by the following string ffffff" << std::endl;
         exit(1);
    }
    return val;
}

int main(int argc, char** argv) {
  using namespace kallaballa;

  if (argc != 3) {
    std::cerr << "Usage: ciff <24bit hex color> <24bit hex color>" << std::endl;
    std::cerr << "Example: ciff ffffff 000000" << std::endl;
    return 1;
  }

  RGBColor a = parse24bitHexRGB(argv[1]);
  RGBColor b = parse24bitHexRGB(argv[2]);

  std::cout << ciede2000_distance(a, b) << std::endl;
}
