#ifndef SORTEDLINKEDLIST_H
#define SORTEDLINKEDLIST_H
#include <string>
using namespace std;
// Define the node structure
struct node {
	string info;
	bool isDone; // New property to track if the task is done
	node* next;
};
// Define the sortedlinkedlist class
class sortedlinkedlist
{
private:
	node* listdata;
public:
	// Constructor
	sortedlinkedlist();
	// Insert method
	void insert(const string& task);
	// Search method
	bool search(const string& task) const;
	// Delete method
	void del(const string& task);
	// Make empty method
	void makeempty();
	// Get length method
	int getlength() const;
	// Display method
	void display() const;
	// Is full method
	bool isfull() const;
	// Function prototypes
	void addTask(const string& task);
	void removeTask(const string& task);
	void displayTasks() const;
	bool isTaskDone(const string& task) const;
	void markTaskDone(const string& task);
	void counttasksdone();
	void displayCompletedTasks() const;
	void displayUncompletedTasks() const;



};
#endif // SORTEDLINKEDLIST_H