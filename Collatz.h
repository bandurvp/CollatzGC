// The template for class header
#ifndef CLASSES_Collatz_H_
#define CLASSES_Collatz_H_

#define VDM_CG

#include "Vdm.h"

//include types used in the class
#include "Collatz.h"


/* -------------------------------
 *
 * Quotes
 *
 --------------------------------- */ 
 


/* -------------------------------
 *
 * values / global const
 *
 --------------------------------- */ 
 
extern TVP numFields_1;


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

//class id
#define CLASS_ID_Collatz_ID 0

#define CollatzCLASS struct Collatz*

// The vtable ids
#define CLASS_Collatz__Z7CollatzEI 0
#define CLASS_Collatz__Z3runEV 1
#define CLASS_Collatz__Z7CollatzEV 2

struct Collatz
{
	
/* Definition of Class: 'Collatz' */
	VDM_CLASS_BASE_DEFINITIONS(Collatz);
	 
	VDM_CLASS_FIELD_DEFINITION(Collatz,val);
	VDM_CLASS_FIELD_DEFINITION(Collatz,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* A.vdmrt 6:8 */
	TVP _Z7CollatzEI(CollatzCLASS this_, TVP v);
	/* A.vdmrt 1:7 */
	TVP _Z7CollatzEV(CollatzCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void Collatz_const_init();
	void Collatz_const_shutdown();
	void Collatz_static_init();
	void Collatz_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void Collatz_free_fields(CollatzCLASS);
CollatzCLASS Collatz_Constructor(CollatzCLASS);



#endif /* CLASSES_Collatz_H_ */