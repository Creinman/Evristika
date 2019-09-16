#include "GA.h"

#ifdef __cplusplus
extern "C" {
#endif

    extern __declspec( dllexport ) GA* CreateGa();

    extern __declspec( dllexport ) void DisposeGa( GA* DisposeObject );

    // extern __declspec( dllexport ) void function( CClassName* a_pObject );


#ifdef __cplusplus
}
#endif