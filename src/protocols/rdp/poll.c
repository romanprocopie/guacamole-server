#include "poll.h"
#include <winsock2.h>

int poll(struct pollfd *fds, unsigned nfds, int timeout)
{
    return WSAPoll(fds, nfds, timeout);
}

