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

#ifndef COLOR_HPP_
#define COLOR_HPP_

#include <cstddef>
#include <cstdint>
#include <vector>

namespace kallaballa
{
  typedef uint32_t RGBColor;

  std::vector<size_t> unpack(RGBColor c);
  std::vector<double> toXYC(RGBColor c);
  std::vector<double> toLAB(RGBColor c);
  double ciede2000_distance(RGBColor a, RGBColor b);
}

/* namespace kallaballa */
#endif /* COLOR_HPP_ */
