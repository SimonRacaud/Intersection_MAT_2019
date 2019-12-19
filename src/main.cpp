/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main function
*/

#include "104intersection.h"
#include <string.h>

using namespace std;

int usage(int status)
{
    cout << "USAGE\n\t./104intersection opt xp yp zp xv yv zv p\n" << endl;
    cout << "DESCRIPTION" << endl;
    cout << "\topt\t";
    cout << "surface option: 1 for a sphere, 2 for a cylinder, 3 for a cone" << endl;
    cout << "\t(xp, yp, zp)\t";
    cout << "coordinates of a point by which the light ray passes through" << endl;
    cout << "\t(xv, yv, zv)\t";
    cout << "coordinates of a vector parallel to the light ray" << endl;
    cout << "\tp\t\t";
    cout << "parameter: radius of the sphere, radius of the cylinder, or" << endl;
    cout << "\t\t\tangle formed by the cone and the Z-axis" << endl;
    return status;
}

int main(int argc, char **argv)
{
    Arguments arg;

    if (argc == 2 && !strcmp(argv[1], "-h"))
        return usage(EXIT_SUCCESS);
    if (arg.set_arguments(argc, argv) == EXIT_ERROR) {
        return usage(EXIT_ERROR);
    }
    return EXIT_SUCCESS;
}