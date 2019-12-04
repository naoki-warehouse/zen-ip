#include <linux/if_tun.h>
#include <sys/ioctl.h>

unsigned long get_tunsetiff(){
    return TUNSETIFF;
}
