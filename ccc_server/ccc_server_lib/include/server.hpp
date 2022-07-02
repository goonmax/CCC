#include "states.hpp"
#include <boost/asio.hpp>
#include <boost/program_options.hpp>
#include <iostream>
#pragma once
using boost::asio::ip::tcp;
namespace Server
{
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
    ServerState m_state = INITIALIZE;
}; // end of class
} // namespace Server
