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
        std::string line;
        std::cout << "stdout capture:\n";
        while (std::getline(out, line))
        {
            std::cout << line << '\n';
        }

        std::cout << "\nstderr capture:\n";
        while (std::getline(err, line))
        {
            std::cout << line << '\n';
        }
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
} // namespace Monitor
