using System;
using System.Runtime.InteropServices;

namespace Evristica
{
    class DllImport : IDisposable
    {
        private IntPtr GaClass = IntPtr.Zero;

        public DllImport()
        {
            GaClass = CreateSolver();
        }

        public void Dispose()
        {
            DisposeSolver(GaClass);
        }

        [DllImport("GA_Engine.dll")]
        protected static extern IntPtr CreateSolver();

        [DllImport("GA_Engine.dll")]
        protected static extern void DisposeSolver(IntPtr disposeObject);
    }
}
