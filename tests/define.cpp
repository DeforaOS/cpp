#ifdef GOOD
#error error
#endif

#define GOOD 1

#ifdef GOOD
#warning good
#else
#error error
#endif

#ifndef GOOD
#error error
#else
#warning good
#endif

#undef GOOD

#ifndef GOOD
#warning good
#else
#error error
#endif
