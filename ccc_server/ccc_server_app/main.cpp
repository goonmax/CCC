#include "main.hpp"
int main(int argc, char** argv)
{
    //--------------------------------------------------------------------------------
    Server::ServerEngine server;
    Monitor::NetworkEnumeration collector;
    CLI::Menu menu;
    try
    {
        server.start();
        collector.CollectMacaddresses();
    }
    catch (const std::exception& exception)
    {
        std::cout << "Exception in main when starting the server"
                  << exception.what() << std::endl;
    }
    //--------------------------------------------------------------------------------
    po::options_description desc("Allowed options");
    desc.add_options()("help,h", "produce help message")(
        "Run with --monitoring, --crafting or --listening", po::value<int>(),
        "Set the state of the framework in which you want it to be ran");
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
    }
    if (vm.count("crafting"))
    {
    }
    return 0;
}
