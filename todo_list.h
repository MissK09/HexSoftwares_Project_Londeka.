#ifndef TODO_LIST_H
#define TODO_LIST_H

#include <iostream>
#include <vector>
#include <string>

class Task
{
public:
    Task(const std::string& description);
    void markCompleted();
    bool isCompleted() const;
    std::string getDescription() const;

private:
    std::string description;
    bool completed;
};

class TodoList
{
public:
    void addTask(const std::string& description);
    void markTaskCompleted(int index);
    void viewTasks() const;

private:
    std::vector<Task> tasks;
};

#endif // TODO_LIST_H
