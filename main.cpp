#include "todo_list.h"

int main()
{
    TodoList todoList;
    int choice;

    do {
        std::cout << "\nTo-Do List Application\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Mark Task Completed\n";
        std::cout << "3. View Tasks\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cin.ignore(); // Clear the newline character from the input buffer

        switch (choice)
        {
            case 1:
            {
                std::string taskDescription;
                std::cout << "Enter task description: ";
                std::getline(std::cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            }
            case 2:
            {
                int taskIndex;
                std::cout << "Enter task number to mark as completed: ";
                std::cin >> taskIndex;
                todoList.markTaskCompleted(taskIndex - 1); // Convert to zero-based index
                break;
            }
            case 3:
                todoList.viewTasks();
                break;
            case 4:
                std::cout << "Exiting the application." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
