#ifndef states_h
#define states_h

/** States in which the server engine can be in **/
enum ServerState
{
    LISTENING,
    CRAFTING,
    MONITORING,
    INITIALIZE
};
#endif /* states_hpp*/
