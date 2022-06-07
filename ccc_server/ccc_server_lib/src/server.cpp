#include "server.hpp"

namespace ServerEngine
{
//--------------------------------------------------------------------------------
ServerEngine::start()
{
    try
    {
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
