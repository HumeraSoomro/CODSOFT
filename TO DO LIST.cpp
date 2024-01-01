#include <iostream>
#include <string>
using namespace std;

const int MAX_TASKS=20; 
struct Task {
    string description;
    bool completed;
};

void displayTasks(const Task tasks[], int taskCount)
 {
    cout<<"\nTASKS:\n";
    for (int i=0;i<taskCount;++i) {
        cout<<i + 1<<". ";
        if (tasks[i].completed) {
            cout<<"COMPLETED!";
        } else {
            cout<<"PENDING!";
        }
        cout<<tasks[i].description<<endl;
    }
    cout<<endl;
}

void addTask(Task tasks[], int& taskCount) {
    if (taskCount<MAX_TASKS) {
    	cin.ignore();
    	string description;
    	cout<<"ENTER YOUR TASK:";
    	getline(cin,description);
        tasks[taskCount].description = description;
        tasks[taskCount].completed=false;
        taskCount++;
       cout<<"TASK ADDED SUCCESSFULLY!!\n";
    } else {
        cout<<"TASK LIST IS FULL!!\n";
    }
}

void markAsCompleted(Task tasks[], int taskCount) {
	int taskIndex;
	cout<<"ENTER TASK NUMBER TO BE MARKED AS COMPLETED:";
	cin>>taskIndex;
    if (taskIndex>= 1 && taskIndex<=taskCount) {
        tasks[taskIndex - 1].completed = true;
        cout<<"TASK MARKED AS COMPLETED!!\n";
    } else {
        cout<<"INVALID TASK NUMBER!!!\n";
    }
}

void removeTask(Task tasks[],int& taskCount)
 {	
	int taskIndex;
	cout<<"ENTER TASK NUMBER TO BE REMOVED:";
    cin>>taskIndex;
    if (taskIndex>=1&&taskIndex<=taskCount)
	 {
        for (int i=taskIndex - 1;i<taskCount-1;++i) {
            tasks[i]=tasks[i + 1];
        }
        taskCount--;
        cout<<"TASK REMOVED SUCCESSFULLY!\n";
    } else {
        cout<<"INVALID TASK NUMBER!\n";
    }
}

int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;
   while(true){
        cout<<"Choose an option:\n";
        cout<<"1.ADD TASK\n";
        cout<<"2.VIEW TASK\n";
        cout<<"3.MARK TASK\n";
        cout<<"4.REMOVE TASK\n";
        cout<<"5.EXIT\n";
        cout<<"ENTER YOUR CHOICE:";
        cin>>choice;
        
        switch (choice) {
            case 1:addTask(tasks, taskCount);break;
            case 2:displayTasks(tasks, taskCount);break;
            case 3:markAsCompleted(tasks, taskCount);break;
            case 4:removeTask(tasks, taskCount);break;
            case 5:cout<<"EXITING...";return 0;
            default:cout<<"INVALID CHOICE.PLEASE TRY AGAIN!\n";
        }
    }
    return 0;
}
