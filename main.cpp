#include "server.h"

int main() {
    Server server;
    server.start(8080);  // Start server on port 8080
    return 0;
}