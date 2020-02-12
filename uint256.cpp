#include "uint256.h"

#ifdef __cplusplus
extern "C"{
#endif

// compute the diff ratio between a found hash and the target
double hash_target_ratio(uint32_t* hash, uint32_t* target)
{
	uint256 h, t;
	double dhash;

	memcpy(&t, (void*) target, 32);
	memcpy(&h, (void*) hash, 32);

	dhash = h.getdouble();
	if (dhash > 0.)
		return t.getdouble() / dhash;
	else
		return dhash;
}

#ifdef __cplusplus
}
#endif
