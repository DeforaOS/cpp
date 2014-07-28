#ifdef GOOD
#error FAIL
#endif

#define GOOD 1

#ifdef GOOD
#warning PASS
#else
#error FAIL
#endif

#ifndef GOOD
#error FAIL
#else
#warning PASS
#endif

#undef GOOD

#ifndef GOOD
#warning PASS
#else
#error FAIL
#endif
