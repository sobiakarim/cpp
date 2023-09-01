#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Todolist {
protected:
    vector<string> tasks;
public:

    void addtask(const string& task) {
        tasks.push_back(task);
        cout << "\nYour task: '" << task << "' is successfully added to the list!\n\n";
    }

    void showlist() {
        if (tasks.empty()) {
            cout << "Your list is empty. \n";
        }
        else {
            cout << "\nList of Tasks: \n";
            for (int i = 0; i < tasks.size();i++) {
                cout << i + 1 << "- " << tasks[i] << endl;
            }
            cout << endl;
        }
    }

    void removetask(int index) {
        if (index >= 1 && index <= tasks.size()) {
            cout << "The Task '" << tasks[index - 1] << "' is remved.\n";
            tasks.erase(tasks.begin() + index - 1);
        }
        else
            cout << "Invalid Task\n";
    }
};

int main()
{
    Todolist todo;

    cout << "\t----------------\n";
    cout << "\t|To Do List App|\n";
    cout << "\t----------------\n";

    while (true) {


        cout << "\n\n\t1. Add Task\n\t2. List Tasks\n\t3. Remove Task\n\t4. Exit\n\n";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Enter task: \n";
            string task;
            cin.ignore();
            getline(cin, task);
            todo.addtask(task);
            break;
        }
        case 2:
            todo.showlist();
            break;
        case 3: {
            cout << "\nEnter task index to remove: ";
            size_t index;
            cin >> index;
            todo.removetask(index);
            break;
        }
        case 4:
            cout << "Exiting." << endl;
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    }



}