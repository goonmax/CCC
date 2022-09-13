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

            for (std::string index : collect_addresses_output)
                BOOST_LOG_TRIVIAL(trace)
                    << std::endl
                    // << BOOST_CURRENT_FUNCTION << std::endl
                    << "\nConnected devices on this subnet:"
                    << "\n|----------------------------------"
                       "-----------------------|\n"
                    << " " + index
                    << "\n|----------------------------------"
                       "-----------------------|\n";
        }
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
        }
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
} // namespace Monitor
//--------------------------------------------------------------------------------
