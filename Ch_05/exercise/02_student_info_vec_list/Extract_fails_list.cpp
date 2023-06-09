// Отделяем записи с проходными баллами от записей с 
// проходными: первая попытка
#include <list>
#include "../../Student_info/Student_info.h"
#include "../../Student_info/grade.h"

using std::list;

list<Student_info> extract_fails(list<Student_info>& students)
{
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();
    while (iter != students.end())
    {
        if(fgrade(*iter)) {
            fail.push_back(*iter);
            iter = students.erase(iter);
        } else
            ++iter;
    }
    
    return fail;
}