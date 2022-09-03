#include "states.hpp"
#include <boost/asio.hpp>
#include <boost/program_options.hpp>
#include <iostream>
#pragma once
using boost::asio::ip::tcp;
namespace ReverseShell
{
/**
 * @brief A class for creating the server engine
 */
class listener
{
  public:
    /**
     * @brief Constructor for the ServerEngine object
     * @param call to create instance of class
     */

    listener()
    {
        std::cout << "listener object created" << std::endl;
        ServerState m_state = LISTENING;
    }
    ~listener()
    {
        std::cout << "listener object destoryed" << std::endl;
    }

  private:
    const std::string rlwrap = "/usr/bin/rlwrap";
    const std::string socat = "/usr/bin/socat";
}; // end of class
} // namespace ReverseShell
