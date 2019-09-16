#include "SolveInterface.h"

#ifdef __cplusplus
extern "C" {
#endif

    extern __declspec( dllexport ) AbstractSolver* CreateSolver(int solverNumber);

    extern __declspec( dllexport ) void DisposeSolver( AbstractSolver* DisposeObject );

     extern __declspec( dllexport ) void SetMsgCallback( AbstractSolver* solver, SOLVER_MESSAGE_CALLBACK callback);

     extern __declspec( dllexport ) void SetIterationCallback( AbstractSolver* solver, SOLVER_ITERATION_CALLBACK callback );
#ifdef __cplusplus
}
#endif