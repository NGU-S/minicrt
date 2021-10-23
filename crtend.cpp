#ifndef WIN32
typedef void (*ctor_func)(void);
ctor_func crt_end[1] __attribute__ ((section(".ctord"))) =
{
    (ctor_func) -1
};
#endif