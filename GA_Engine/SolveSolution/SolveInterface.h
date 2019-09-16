#pragma once
#include "stdafx.h"

typedef enum
{
    DefaultState = 0,
    StartSolve,
    Work,
    Need_To_stop,
    Stopped
} SolverState;



typedef void( *SOLVER_MESSAGE_CALLBACK ) ( char* message );
typedef void( *SOLVER_ITERATION_CALLBACK ) ( );

class __declspec( dllexport ) AbstractSolver
{
protected:
    SolverState State;
    SOLVER_MESSAGE_CALLBACK message_callback;
    SOLVER_ITERATION_CALLBACK loop_callback;
public:
    AbstractSolver();
    virtual ~AbstractSolver();

    virtual void SolveSolution();
    void StopWork();
    void SetMessageCollBack( SOLVER_MESSAGE_CALLBACK callback);
    void SetLoopCallback( SOLVER_ITERATION_CALLBACK callback);
};



