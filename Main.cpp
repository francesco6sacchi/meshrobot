#include <iostream>
#include "include/geometry.h"
#include "Eigen/SVD"

int main() {

	// Testing distance segment - triangle (manually defined)
	// 
	//Triangle points
	Eigen::Vector3d p1;
	Eigen::Vector3d p2;
	Eigen::Vector3d p3;
	p1 << 0, 1, 1;
	p2 << 0, 4, 2;
	p3 << 0, 2, 6;

	//Segment points
	Eigen::Vector3d ps1;
	Eigen::Vector3d ps2;
	ps1 << 1, 2, 7;
	ps2 << 4, 2, 7;

	//Triangle and segment definitions
	Triangle tr(p1, p2, p3);
	Segment seg(ps1, ps2);

	//Distance computation
	double distance;

	distance = tr.DistanceFrom(seg, &ps1);

	
	// Testing triangle creation from STL file
	//
	//Get path of a file STL
	string path = "a0509_blue_stl/A0509_2_2.stl";
	
	//Define triangles 
	vector<Triangle> triangles;

	//Function to get triangles from STL
	triangles = ParseSTLfile(path);

	return 0;
}