/*
 * ColorDiff
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

int main(int argc, char** argv) {
  using namespace kallaballa;

  if (argc != 3) {
    std::cerr << "Usage: colorDiff <24bit hex color> <24bit hex color>" << std::endl;
    std::cerr << "Example: colorDiff ffffff 000000" << std::endl;
    return 1;
  }

  RGBColor a = strtol(argv[1], NULL, 16);
  RGBColor b = strtol(argv[2], NULL, 16);

  std::cout << ciede2000_distance(a, b) << std::endl;
}
