#include "server.hpp"

namespace Server
{
//--------------------------------------------------------------------------------
void ServerEngine::start()
{
    try
    {
        std::unique_ptr<ServerEngine> server_instance_object =
            std::make_unique<ServerEngine>();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
//--------------------------------------------------------------------------------
ServerState ServerEngine::CurrentState() const
{
    return m_state;
}
//--------------------------------------------------------------------------------
void ServerEngine::CurrentState(ServerState state)
{
    m_state = state;
}
} // namespace Server
