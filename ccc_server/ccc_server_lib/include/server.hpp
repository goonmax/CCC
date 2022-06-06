#include <boost/program_options.hpp>
#pragma once

namespace CCCserver
{

/**  Language codes to be used with the Greeter class */
enum class ServerSate
{
    listening,
    crafting,
    idle,
    power
};

/**
 * @brief A class for saying hello in multiple languages
 */
class CCCserver
{
  public:
    /**
     * @brief Creates a server object
     * @param call to start a server object
     */
    void start()
    {
    }
    /**
     * @brief Destorys the server object
     * @param lang the language to greet in
     */
    void stop()
    {
    }
};

} // namespace CCCserver

private:
}
;
