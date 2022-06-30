#include <boost/asio.hpp>
#include <boost/program_options.hpp>
#include <iostream>
#include <map>
#pragma once
using boost::asio::ip::tcp;
namespace Server
{

/** States in which the server engine can be in **/
enum ServerState
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
    /**
     * @brief Constructor for the ServerEngine object
     * @param call to create instance of class
     */
    ServerState CurrentState() const;
    void CurrentState(ServerState state);
    /**
     * @brief Constructor for the ServerEngine object
     * @param initialise the object
     */
    ServerEngine()
    {
        std::cout << "serverengine object created" << std::endl;
        // with this object make it initialise with the state of the engine
    }
    ~ServerEngine()
    {
        std::cout << "serverengine object destoryed" << std::endl;
    }
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
