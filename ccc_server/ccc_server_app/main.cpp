#include "main.hpp"
int main(int argc, char** argv)
{
    //--------------------------------------------------------------------------------
    Server::ServerEngine server;
    Monitor::NetworkEnumeration collector;
    try
    {
        server.start();
    }
    catch (const std::exception& exception)
    {
        std::cout << "Exception in main when starting the server"
                  << exception.what() << std::endl;
    }
    //--------------------------------------------------------------------------------
    po::options_description desc("Allowed options");
    desc.add_options()("help,h", "Produce help message")("monitoring,m",
                                                         "Start monitoring")(
        "crafting,c", "Start crafting")("listening,l", "Start listening");
    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help"))
    {
        std::cout << desc << "\n";
        return 1;
    }
    if (vm.count("listening"))
    {
    }
    if (vm.count("monitoring"))
    {
        collector.CollectMacaddresses();
    }
    if (vm.count("crafting"))
    {
    }
    return 0;
}
