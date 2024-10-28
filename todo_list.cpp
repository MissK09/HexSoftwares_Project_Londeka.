#include "todo_list.h"

Task::Task(const std::string& description)
    : description(description), completed(false) {}

void Task::markCompleted() { completed = true; }
bool Task::isCompleted() const { return completed; }
std::string Task::getDescription() const { return description; }

void TodoList::addTask(const std::string& description) {  // Fixed: Removed space between Todo and List
    tasks.emplace_back(description);
}

void TodoList::markTaskCompleted(int index)
{
    if (index >= 0 && index < tasks.size())
    {
        tasks[index].markCompleted();
    }
    else
    {
        std::cout << "Invalid task index." << std::endl;
    }
}

void TodoList::viewTasks() const
{
    if (tasks.empty())
    {
        std::cout << "No tasks available." << std::endl;
        return;
    }

    for (size_t i = 0; i < tasks.size(); ++i)
    {
        std::cout << i + 1 << ". ["
                  << (tasks[i].isCompleted() ? "X" : " ")
                  << "] " << tasks[i].getDescription() << std::endl;
    }
}
