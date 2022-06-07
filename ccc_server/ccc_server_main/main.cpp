#include "main.h"

//--------------------------------------------------------------------------------
int main(int argc, char** argv)
{
    po::options_description desc("Allowed options");
    desc.add_options()("help,h", "produce help message")(
        "Run with --idle, --crafting or --listening", po::value<int>(),
        "Set the state of the framework in which you want it to be ran");
    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("help"))
    {
        std::cout << desc << "\n";
        return 1;
    }

    if (vm.count("compression"))
    {
        std::cout << "Compression level was set to "
                  << vm["compression"].as<int>() << ".\n";
    }
    else
    {
        std::cout << "Compression level was not set.\n";
    }

    Cccservermain server;
    try
    {
        server.start();
    }
    catch (const std::exeception& exeception)
    {
        std::cout << "Exception " << std::exeception.what() << std::endl;
    }
    return 0;
}
