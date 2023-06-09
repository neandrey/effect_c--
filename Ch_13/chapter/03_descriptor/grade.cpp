#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"

using std::domain_error; using std::vector;

double grade(double midterm, double final, const vector<double> &hw)
{
    if(hw.size() == 0)
        throw domain_error("Студент не сделал ни одного домашнего задания.");
    return grade(midterm, final, median(hw));
}

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}
