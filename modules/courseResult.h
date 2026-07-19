#ifndef COURSERESULT_H
#define COURSERESULT_H

#include "course.h"

typedef struct CourseResult
{
    Course *course;
    double marks;
    int completed;
} CourseResult;

CourseResult createCompletedCourseResult(Course *course, double marks);
CourseResult createIncompleteCourseResult(Course *course);
void viewCourseResult(CourseResult result);

#endif