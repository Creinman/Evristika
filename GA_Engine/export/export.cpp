#include "export.h"


extern __declspec( dllexport ) GA* CreateGa()
{
    return new GA();
}

extern __declspec( dllexport ) void DisposeGa( GA* disposeObject )
{
    if( disposeObject != NULL )
    {
        delete disposeObject;
        disposeObject = NULL;
    }
}
