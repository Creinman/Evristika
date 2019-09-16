#include "SolveInterface.h"


AbstractSolver::AbstractSolver()
{
    this->State = DefaultState;
}

AbstractSolver::~AbstractSolver()
{
}

void AbstractSolver::SolveSolution()
{
}

void AbstractSolver::StopWork()
{
    this->State = Need_To_stop;
}

void AbstractSolver::SetMessageCollBack( SOLVER_MESSAGE_CALLBACK callBack )
{
    if ( callBack != NULL )
    {
        this->message_callback = callBack;
    }
}

void AbstractSolver::SetLoopCallback( SOLVER_ITERATION_CALLBACK callback )
{
    if( callback != NULL )
    {
        this->loop_callback = callback;
    }
}
