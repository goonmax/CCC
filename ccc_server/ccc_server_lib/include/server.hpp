#include <boost/asio.hpp>
#include <boost/program_options.hpp>
#include <iostream>

#pragma once
using boost::asio::ip::tcp;
namespace ServerEngine
{

/** States in which the server engine can be in **/
enum class ServerState
{
    listening,
    crafting,
    idle,
    power
};

/**
 * @brief A class for creating the server engine
 */
class ServerEngine
{
  public:
    typedef shared_ptr<ServerEngine> Server_pointer;

    /**
     * @brief Creates a server object
     * @param call to start a server object
     */
    void start()
    {
    }
    /**
     * @brief Destorys the server object
     * @param lang the language to greet in
     */
    void stop()
    {
    }
};

} // namespace ServerEngine

private:
}
;
