ColorDiff
============

Calculates the difference between two colors using the [CIEDE2000](https://en.wikipedia.org/wiki/Color_difference#CIEDE2000) color difference metric. I'm using the CIEDE2000 library taken from https://github.com/gfiumara/CIEDE2000 which is incorporated in this repository. The only significant part i wrote
is the conversion from RGB to CIE*LAB colors.

## Build

To build it, simply run 'make' in the base directory.

    git clone https://github.com/kallaballa/ColorDiff.git
    cd ColorDiff
    make

## Usage

    Usage: colorDiff <24bit hex color> <24bit hex color>

## Example

Calculate the difference between white and black.

    ./colorDiff ffffff 000000
    
Output:

    100
