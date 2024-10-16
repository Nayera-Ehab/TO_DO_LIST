#include <iostream>
#include <string>
#include "TO_DO_LIST.h"
using namespace std;
int main() {
	sortedlinkedlist todoList; // Create a sortedlinkedlist object
	// Main loop to interact with the user
	char choice; // Variable to store user choice
	string task; // Variable to store task
	cout << "         *****  TO_DO_LIST   *****" << endl;
	do {
		// Display menu options
		cout << "Choose an option:" << endl;
		cout << "1. Add a task" << endl;
		cout << "2. Remove a task" << endl;
		cout << "3. Display tasks" << endl;
		cout << "4. Check if a task is done" << endl;
		cout << "5. Mark a task as done" << endl;
		cout << "6. To show number of tasks " << endl;
		cout << "7. to displayUncompletedTasks " << endl;
		cout << "0. Quit" << endl;
		cout << "Enter your choice: ";
		cin >> choice; // Get user choice
		cin.ignore(); // Clear buffer
		switch (choice) {
		case '1':
			cout << "Enter task to add: ";
			getline(cin, task); // Get the task from the user
			todoList.addTask(task); // Add the task to the list
			break;
		case '2':
			cout << "Enter task to remove: ";
			getline(cin, task); // Get the task from the user
			todoList.removeTask(task); // Remove the task from the list
			break;
		case '3':
			cout << "Tasks:" << endl;
			todoList.displayTasks(); // Display all tasks
			break;
		case '4':
			cout << "Enter task to check: ";
			getline(cin, task); // Get the task from the user
			if (todoList.isTaskDone(task)) { // Check if the task is done
				cout << "Task is done." << endl;
			}
			else {
				cout << "Task is not done." << endl;
			}
			break;
		case '5':
			cout << "Enter task to mark as done: ";
			getline(cin, task); // Get the task from the user
			todoList.markTaskDone(task); // Mark the task as done
			break;
		case '6':
			cout << " count of tasks " << endl;
			todoList.counttasksdone();
			break;
		case '7':
			cout << "Uncompleted tasks:" << endl;
			todoList.displayUncompletedTasks(); // Display uncompleted tasks
			break;

		case '0':
			cout << "Exiting..." << endl; // Exit message
			break;
		default:
			cout << "Invalid choice. Please try again." << endl; // Error message for invalid choice
				break;
		}
		cout << endl;
		cout << "    ******************************************  " << endl;
		
	} while (choice != '0'); // Loop until the user chooses to quit
	return 0;
}