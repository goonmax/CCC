#ifndef states_h
#define states_h

/** States in which the server engine can be in **/
enum ServerState
{
    LISTENING,
    CRAFTING,
    IDLE,
    INITIALIZE
};
#endif /* states_h */
