#include "poll.h"

int poll(LPWSAPOLLFD fds, unsigned nfds, int timeout)
{
    return WSAPoll(fds, nfds, timeout);
}

