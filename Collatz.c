// The template for class
#include "Collatz.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void Collatz_free_fields(struct Collatz *this)
{
			vdmFree(this->m_Collatz_val);
	}

static void Collatz_free(struct Collatz *this)
{
	--this->_Collatz_refs;
	if (this->_Collatz_refs < 1)
	{
		Collatz_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z17fieldInitializer1EV()	{

TVP ret_1 = vdmClone(newInt(1))
;

return ret_1;
}


/* A.vdmrt 9:8 */
 static  void _Z3runEV(CollatzCLASS this)	{
/* A.vdmrt 11:2 */
TVP a1;
TVP a2;
TVP a3;
TVP a4;
TVP a5;
TVP a6;
TVP a7;
TVP a8;

a7 = newInt(2);
a8 = GET_FIELD_PTR(Collatz, Collatz, this, val);
a1 = vdmMod(a8, a7);
vdmFree(a8);
a2 = newInt(0);
vdmFree(a7);
a7 = vdmEquals(a1, a2);
vdmFree(a2);
vdmFree(a1);
if ( toBool(a7) )
	
	{
vdmFree(a7);
a7 = newInt(2);
a8 = GET_FIELD_PTR(Collatz, Collatz, this, val);
a3 = vdmDiv(a8, a7);
vdmFree(a8);
vdmFree(a7);
/* A.vdmrt 12:14 */
TVP field_tmp_2 = vdmClone(a3);
;

SET_FIELD_PTR(Collatz, Collatz, this, val, field_tmp_2);

vdmFree(field_tmp_2);
vdmFree(a3);
}
else
	
	{
vdmFree(a7);
a3 = newInt(3);
a8 = GET_FIELD_PTR(Collatz, Collatz, this, val);
a4 = vdmProduct(a3, a8);
vdmFree(a8);
a5 = newInt(1);
a6 = vdmSum(a4, a5);
/* A.vdmrt 14:18 */
TVP field_tmp_3 = vdmClone(a6)
;

SET_FIELD_PTR(Collatz, Collatz, this, val, field_tmp_3);

vdmFree(field_tmp_3);
vdmFree(a3);
vdmFree(a4);
vdmFree(a5);
vdmFree(a6);
}
;
}



 void Collatz_const_init()	{

numFields_1 = _Z17fieldInitializer1EV();

return ;
}



 void Collatz_const_shutdown()	{

vdmFree(numFields_1);

return ;
}



 void Collatz_static_init()	{

return ;
}



 void Collatz_static_shutdown()	{

return ;
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
// VTable for this class
 static  struct VTable VTableArrayForCollatz  [] ={

{0,0,((VirtualFunctionPointer) _Z7CollatzEI),},
{0,0,((VirtualFunctionPointer) _Z3runEV),},
{0,0,((VirtualFunctionPointer) _Z7CollatzEV),},
				
}  ;

// Overload VTables


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
CollatzCLASS Collatz_Constructor(CollatzCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (CollatzCLASS) malloc(sizeof(struct Collatz));
	}

	if(this_ptr!=NULL)
	{
	
			
		// Collatz init
		this_ptr->_Collatz_id = CLASS_ID_Collatz_ID;
		this_ptr->_Collatz_refs = 0;
		this_ptr->_Collatz_pVTable=VTableArrayForCollatz;

							this_ptr->m_Collatz_val= NULL ;
			}

	return this_ptr;
}

// Method for creating new "class"
static TVP new()
{
	CollatzCLASS ptr=Collatz_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_Collatz_id, &ptr->_Collatz_refs, (freeVdmClassFunction)&Collatz_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* A.vdmrt 6:8 */
 TVP _Z7CollatzEI(CollatzCLASS this, TVP v)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, Collatz);
}
;
/* A.vdmrt 7:22 */
TVP field_tmp_1 = vdmClone(v)
;

SET_FIELD_PTR(Collatz, Collatz, this, val, field_tmp_1);

vdmFree(field_tmp_1);

return __buf;
}


/* A.vdmrt 1:7 */
 TVP _Z7CollatzEV(CollatzCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, Collatz);
}
;

return __buf;
}




/* -------------------------------
 *
 * Global class fields
 *
 --------------------------------- */
 
// initialize globals - this is done last since they are declared in the header but uses init functions which are printet in any order
	TVP numFields_1 =  NULL ;
		
