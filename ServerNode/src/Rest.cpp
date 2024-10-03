#include "Rest.h"

#include <iostream>
#include "crow.h"

void prepare_restful_api() {
    crow::SimpleApp app;
    CROW_ROUTE(app, "/")([]() {
        return "Hello world!";
    });
    std::cout << "Server is running on port 18080" << std::endl;
    app.port(18080).multithreaded().run();
}

