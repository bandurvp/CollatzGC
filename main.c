#include "Collatz.h"

int main()
{
	TVP collatz;
	TVP tmp;
	int i;

	vdm_gc_init();

	tmp = newInt(837799);

	collatz = _Z7CollatzEI(NULL, tmp);

	for(i = 0; i < 1000; i++)
	{
		CALL_FUNC(Collatz, Collatz, collatz, CLASS_Collatz__Z3runEV);
		if(i % 4 == 0)
		vdm_gc();
	}

	vdmFree(collatz);
	vdmFree(tmp);
	vdm_gc();
	vdm_gc_shutdown();

	return 0;
}
