#include "monitoring.hpp"
namespace Monitor
{
//--------------------------------------------------------------------------------
void NetworkEnumeration::CollectMacaddresses()
{
    try
    {
        boost::process::system(collect_addresses, boost::process::std_out > out,
                               boost::process::std_err > err,
                               boost::process::std_in < stdin);
        while (std::getline(out, line))
        {
            collect_addresses_output.push_back(line);
            ip_addresses_output.push_back(line.substr(
                0, line.find_first_of(
                       " "))); // need to store this object on the heap so it
                               // keeps the addresses at the time
        }
        GetUserInput();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
//--------------------------------------------------------------------------------
void NetworkEnumeration::PortScan(std::string ipaddress)
{
    try
    {
        /*boost::process::system(top1000ports + ipaddress + pipe_to_dev_null,
                               boost::process::std_out > out,
                               boost::process::std_err > err,
                               boost::process::std_in < stdin);*/
        boost::process::system(allports + ipaddress + pipe_to_dev_null,
                               boost::process::std_out > err,
                               boost::process::std_err > err,
                               boost::process::std_in < stdin);

        while (std::getline(out, line))
        {
            nmap_output.push_back(line);
            for (std::string index : nmap_output)
                BOOST_LOG_TRIVIAL(trace) << std::endl << " " + index;
        }

        BOOST_LOG_TRIVIAL(trace)
            << "Started nmap scan, please check output files" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
//--------------------------------------------------------------------------------
void NetworkEnumeration::GetUserInput()
{

    for (std::string index : collect_addresses_output)
        BOOST_LOG_TRIVIAL(trace) << std::endl
                                 // << BOOST_CURRENT_FUNCTION << std::endl
                                 << "\nConnected devices on this subnet:"
                                 << "\n|----------------------------------"
                                    "-----------------------|\n"
                                 << " " + index
                                 << "\n|----------------------------------"
                                    "-----------------------|\n";
    for (std::string index : ip_addresses_output)
        BOOST_LOG_TRIVIAL(trace) << RED << index << RESET << std::endl;
    try
    {
        BOOST_LOG_TRIVIAL(trace) << "Would you like to start a Nmap scan? (y "
                                    "for yes/any other key for no)"
                                 << std::endl;
        std::cin >> userinput;
        if (userinput == "y")
        {
            BOOST_LOG_TRIVIAL(trace)
                << RED << "Enter targets address" << RESET << std::endl;
            std::cin >> targets_ip_address;
            BOOST_LOG_TRIVIAL(trace)
                << RED
                << "Starting Nmap scans on " + targets_ip_address +
                       " in the background, logging to files in "
                       "current directory"
                << RESET << std::endl;
            PortScan(targets_ip_address);
        }
        else
        {
            BOOST_LOG_TRIVIAL(trace)
                << RED << "No scan selected" << RESET << std::endl;
        }
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
} // namespace Monitor
