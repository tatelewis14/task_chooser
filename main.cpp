#include<iostream>
#include<string>
#include<vector>


std::string randomTask(const std::vector<std::string>& tasks) {
    // Seed the random number generator
    std::srand(std::time(nullptr));

    // Generate a random index
    int random_index = std::rand() % tasks.size();

    // Return the randomly selected task
    return tasks[random_index];
}

void askTasks(int &num) 
{


std::cout << "Enter an integer for the number of choices you want: ";
std::cin >> num;


};


int main() {
    int num_of_choices;
    askTasks(num_of_choices);  

    std::vector<std::string> tasks;
    for(int i = 0; i<num_of_choices; i++) {
        std::cout << "Enter an option: " << std::endl;
        std::string  message;
        std::cin >> message;
        tasks.push_back(message);
    }
   std::cout << "Tasks:" << std::endl;
    for(int i = 0; i < num_of_choices; i++) {
        std::cout  << i+1 << ". "<< tasks[i] << std::endl;
    }
    std::string chosen_task = randomTask(tasks);
    std::cout << "Your randomly chosen task is: " << chosen_task << std::endl;

    return 0;
};
