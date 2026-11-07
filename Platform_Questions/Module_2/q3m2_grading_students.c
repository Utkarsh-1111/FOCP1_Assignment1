int* gradingStudents(int grades_count, int* grades, int* result_count)
{
    *result_count = grades_count;
    for(int i = 0; i < grades_count; i++)
    {
        if(grades[i] >= 38 && 5 - grades[i] % 5 < 3)
            grades[i] += 5 - grades[i] % 5;
    }
    return grades;
}
