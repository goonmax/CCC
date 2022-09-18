#include "boost/process.hpp"
#include "states.hpp"
#include <boost/log/trivial.hpp>
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
     * @brief  does a port scan of an address that is given to the function
     * @param call to initiate a port scan with nmap or rustscan
     */
    void PortScan(std::string ipaddress);
    /**
     * @brief Gets the user input to make a decision
     * @param call to get user input to action
     */
    void GetUserInput();

  private:
    const std::string collect_addresses = "/usr/bin/ip neighbour";
    const std::string top1000ports =
        "/usr/bin/nmap -sCV -Pn -oA  top1000ports ";
    const std::string allports = "/usr/bin/nmap -p- -T4 -oA allport ";
    const std::string pipe_to_dev_null = "  /dev/null 2>&1 & ";
    std::vector<std::string> collect_addresses_output;
    std::vector<std::string> ip_addresses_output;
    std::vector<std::string> nmap_output;
    std::string line;
    std::string userinput;
    std::string targets_ip_address;
}; // end of class
} // namespace Monitor
