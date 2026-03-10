#ifndef TODO_H
#define TODO_H

#include <string>

class ToDo {
public:
    std::string studyName;
    std::string studyPendingOrCompleted;
    std::string studyTimeStart;
    std::string studyTimeEnd;
    std::string studyDuration;

    ToDo() = default;

    ToDo(std::string name, std::string pendingOrCompleted, std::string duration,
         std::string studyTimeStart, std::string studyTimeEnd)
        : studyName(name), studyPendingOrCompleted(pendingOrCompleted), studyDuration(duration),
         studyTimeStart(studyTimeStart), studyTimeEnd(studyTimeEnd) {}
};

#endif