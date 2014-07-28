#if 0
#error FAIL
#else
#warning PASS
#endif

#if 1
#warning PASS
#else
#error FAIL
#endif

#define GOOD 1
#if GOOD
#warning PASS
#else
#error FAIL
#endif
#undef GOOD

#define GOOD 0
#if !GOOD
#warning PASS
#else
#error FAIL
#endif
#undef GOOD

#define GOOD 1
#if 0
#error FAIL
#elif GOOD
#warning PASS
#endif
#undef GOOD

#define GOOD 0
#if 0
#error FAIL
#elif !GOOD
#warning PASS
#endif
#undef GOOD
