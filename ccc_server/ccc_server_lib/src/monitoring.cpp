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
void NetworkEnumeration::PortScan()
{
    try
    {
        boost::process::system(top1000ports, boost::process::std_out > out,
                               boost::process::std_err > err,
                               boost::process::std_in < stdin);
        boost::process::system(allports, boost::process::std_out > out,
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
    std::cout << "Would you like to start on a scan on any of the "
                 "addresses listed?"
              << std::endl;
    for (std::string index : ip_addresses_output)
        BOOST_LOG_TRIVIAL(trace) << RED << index << RESET << std::endl;
    try
    {
    }
    catch (std::exception& e)
    {
    }
}
//--------------------------------------------------------------------------------
} // namespace Monitor
