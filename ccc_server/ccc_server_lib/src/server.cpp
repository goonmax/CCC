#include "server.hpp"
#include <iostream>

namespace ServerEngine
{
//--------------------------------------------------------------------------------
void start()
{
    try
    {
        // std::unique_ptr<ServerEngine> server_state_object =
        Server_pointer<ServerEngine> server_state_object =
            std::make_unique<ServerEngine>();
        std::cout << "Hello, im working che" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
//--------------------------------------------------------------------------------
} // namespace ServerEngine
