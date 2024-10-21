#include "client_handler.h"
#include <iostream>
#include <unistd.h> // For read/write

void ClientHandler::handle(int client_socket) {
    char buffer[1024] = {0};
    read(client_socket, buffer, 1024);

    // Log the request (for example purposes)
    std::cout << "Client says: " << buffer << std::endl;

    // Respond with a simple HTTP response
    std::string response = "HTTP/1.1 200 OK\nContent-Type: text/plain\nContent-Length: 12\n\nHello world";
    write(client_socket, response.c_str(), response.size());
    close(client_socket);
}