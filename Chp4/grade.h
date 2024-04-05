#pragma once
// grade.h

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "Student_info.h"

double grade(double, double, double);//헤더파일에서 반환값이랑 매개변수만필요 선언하는거기때문에
double grade(double, double, vector<double&>);
double grade(const Student_info&);


#endif
