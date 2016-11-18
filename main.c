#include "Collatz.h"

int main(int argc, char *argv[])
{
	TVP collatz;
	TVP tmp;
	int num;
	long i;

	num = atoi(argv[1]);

//	printf("Start:  %d  Iterations:  %d\n", num, iterations);

	tmp = newInt(num);
	collatz = _Z7CollatzEI(NULL, tmp);

	vdm_gc_init();

	for(i = 0; i < 100000000; i++)
	{
	while((TO_CLASS_PTR(collatz, Collatz))->m_Collatz_val->value.intVal != 1)
	{
		CALL_FUNC(Collatz, Collatz, collatz, CLASS_Collatz__Z3runEV);
		vdm_gc();
	}
	}

	vdmFree(collatz);
	vdmFree(tmp);

	vdm_gc_shutdown();

	return 0;
}
