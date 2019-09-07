/*
 Sifer Aseph
 Shell;
 */

#include <iostream>
#include <unistd.h>
#include <string>
#include <sstream>
#include "siferShell.h"

// first write sstream stuff then
// have write execute and have excecute calls forking

int initializer();
void start();
std::string readLine();
std::string processLine(std::string line);
int executeLine(std::string process);

int main(int argc, const char * argv[]) {
    start();
    
    return 0;
}

std::string readLine() {
    std::string userInput;
    
    while (true) {
        std::cin >> userInput;
    }
    
    return userInput;
}

std::string processLine(std::string line) {
    return "stuff";
}

int executeLine(std::string process) {
    return 0;
}

void start() {
    int status = 0;
    std::string line;
    std::string **args;
    
    while (status == 0) {
        std::cout << "Sifer's Shell >> ";
        
        line = readLine();
        
        //process = processLine(line);
        //execute = executeLine(process);
    }
}

int initializer() {
    pid_t pid = fork();
    int status = 0;
    
    if (pid == -1) {
        std::perror("Fork failed.");
        exit(EXIT_FAILURE);
    } else if (pid >= 0) {
        std::cout << "Fork success: child process.\n";
        _exit(EXIT_SUCCESS);
    } else {
        (void)waitpid(pid, &status, 0);
    }
    return EXIT_SUCCESS;
}
