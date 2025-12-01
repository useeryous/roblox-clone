#include "Client.hpp"
#include <string>

class Client {
    public:
        int ID;
        string Name;

        Client(int id, const std::string& name);
    private:
        void connectToServer(const std::string& address, int port);
        void sendData(const std::string& data);
};

void Client::connectToServer(const std::string& address, int port) {
    //to-do : implement connection logic
}

void Client::sendData(const std::string& data) {
    //to-do : implement data sending logic
}

