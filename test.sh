#!/bin/sh
gcc -I modules tests/test_course.c modules/course.c -o test_course
./test_course
