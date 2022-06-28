#include <boost/asio.hpp>
#include <boost/program_options.hpp>
#include <iostream>

#pragma once
using boost::asio::ip::tcp;
namespace Server
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
    // using Server_pointer = std::unique_ptr<ServerEngine>;
    /**
     * @brief Constructor for the ServerEngine object
     * @param call to create instance of class
     */
    /*   ServerState CurrentState;
     ServerEngine(CurrentState)
    {
    }*/
    /**
     * @brief Creates a server object
     * @param call to start a server object
     */
    void start()
    {
    }
    /**
     * @brief destorys the server object
     * @param call to destory the object
     */
    void stop()
    {
    }

  private:
}; // end of class
} // namespace Server
