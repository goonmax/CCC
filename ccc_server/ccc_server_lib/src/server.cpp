#include "server.hpp"

namespace Server
{
//--------------------------------------------------------------------------------
void start()
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
ServerState CurrentState()
{
    return m_state;
}
//--------------------------------------------------------------------------------
void CurrentState(ServerState state)
{
    m_state = state;
}
} // namespace Server
