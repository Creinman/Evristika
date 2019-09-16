#include "export.h"
#include "GA.h"


extern __declspec( dllexport ) AbstractSolver* CreateSolver( int solverNumber )
{
    switch ( solverNumber )
    {
    case 1:
        return new GA();
    default:
        return NULL;
    }
}

extern __declspec( dllexport ) void DisposeSolver( AbstractSolver* disposeObject )
{
    if( disposeObject != NULL )
    {
        delete disposeObject;
        disposeObject = NULL;
    }
}

void SetMsgCallback( AbstractSolver* solver ,SOLVER_MESSAGE_CALLBACK callback )
{
    if( solver != NULL )
    {
        solver->SetMessageCollBack( callback );
    }
}

void SetIterationCallback( AbstractSolver* solver ,SOLVER_ITERATION_CALLBACK callback )
{
    if ( solver != NULL )
    {
        solver->SetLoopCallback( callback );
    }
}
