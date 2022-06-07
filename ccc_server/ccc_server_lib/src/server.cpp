#include "server.hpp"

namespace ServerEngine
{
//--------------------------------------------------------------------------------
ServerEngine::start()
{
    try
    {
        boost::asio::io_context io_context;
        tcp_server server(io_context);
        io_context.run();
        ServerSate CurrentState;
        CurrentState = idle; // get input from main to set this to the state
        std::unique_ptr<ServerEngine> server_state_object =
            std::make_unique<ServerEngine>();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
//--------------------------------------------------------------------------------
} // namespace ServerEngine
