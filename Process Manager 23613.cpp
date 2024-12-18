#include<iostream>
#include <cstdlib>

using namespace std;

void ListProcesses() {
    system("tasklist"); // Display all running processes
}

void TerminateProcessByPID() {
    string pid;
    cout << "Enter the Process ID (PID) to terminate: ";
    cin >> pid;
    string command = "taskkill /PID " + pid + " /F";
    system(command.c_str()); // Terminate the process
}

int main() {
    int choice;
    do {
        cout << "\n1. List Processes\n2. Terminate Process\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ListProcesses();
                break;
            case 2:
                TerminateProcessByPID();
                break;
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}