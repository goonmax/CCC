#include "boost/process.hpp"
#include "states.hpp"
#include <iostream>
#pragma once
namespace Monitor
{
/**
 * @brief A class for creating the server engine
 */
class NetworkEnumeration
{
  public:
    boost::process::ipstream out;
    boost::process::ipstream err;
    /*NetworkEnumeration()
    {
        std::cout << "NetworkEnumeration object created" << std::endl;
        ServerState m_state = INITIALIZE;
    }
    ~NetworkEnumeration()
    {
        std::cout << "NetworkEnumeration  object destoryed" << std::endl;
    }*/
    /**
     * @brief collects the mac addresses of
       devices on the same network
     * @param call to collect mac adresses.
     */
    void CollectMacaddresses();
    /**
     * @brief
     * @param
     */

  private:
    const std::string collect_addresses = "/usr/bin/ip neighbour";
    std::vector<std::string> collect_addresses_output;
    std::string line;
}; // end of class
} // namespace Monitor
