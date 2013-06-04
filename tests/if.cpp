#if 0
#error error
#else
#warning good
#endif

#if 1
#warning good
#else
#error error
#endif

#define GOOD 1
#if GOOD
#warning good
#else
#error error
#endif
#undef GOOD

#define GOOD 0
#if !GOOD
#warning good
#else
#error error
#endif
#undef GOOD

#define GOOD 1
#if 0
#error error
#elif GOOD
#warning good
#endif
#undef GOOD

#define GOOD 0
#if 0
#error error
#elif !GOOD
#warning good
#endif
#undef GOOD
