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
        }
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
} // namespace Monitor
