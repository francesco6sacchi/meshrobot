#include <iostream>
#include "include/geometry.h"
#include "Eigen/SVD"

int main() {

	Eigen::Vector3d p1;
	Eigen::Vector3d p2;
	Eigen::Vector3d p3;
	p1 << 0, 1, 1;
	p2 << 0, 4, 2;
	p3 << 0, 2, 6;

	Eigen::Vector3d ps1;
	Eigen::Vector3d ps2;
	ps1 << 1, 2, 7;
	ps2 << 4, 2, 7;

	Segment seg(ps1, ps2);

	double distance;
	//distance = seg.DistanceFrom(point, &point);

	Triangle tr(p1, p2, p3);

	distance = tr.DistanceFrom(seg, &ps1);

	string path = "C/Users/franc/Desktop/Fra_old/Università/PoliMi/Thesis/Codes/doosan/a0509_blue_stl/A0509_2_2.stl";
	
	vector<Triangle> triangles;

	triangles = ParseSTLfile(path);

	return 0;
}