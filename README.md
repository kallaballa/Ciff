Ciff
============

A Linux (and possibly Mac OSX) command line tool that calculates the difference between two colors using the [CIEDE2000](https://en.wikipedia.org/wiki/Color_difference#CIEDE2000) color difference metric. I'm using the CIEDE2000 library taken from https://github.com/gfiumara/CIEDE2000 which is incorporated in this repository. 

## Build

To build it, simply run 'make' in the base directory.

    git clone https://github.com/kallaballa/Ciff.git
    cd Ciff
    make

## Usage

    Usage: ciff <24bit hex color> <24bit hex color>

## Example

Calculate the difference between white and black.

    ./ciff ffffff 000000
    
Output:

    100
