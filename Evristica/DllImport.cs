using System;
using System.Runtime.InteropServices;

namespace Evristica
{
    class DllImport : IDisposable
    {
        private IntPtr GaClass = IntPtr.Zero;

        public DllImport()
        {
            GaClass = CreateGa();
        }

        public void Dispose()
        {
            DisposeGa(GaClass);
        }

        [DllImport("GA_Engine.dll")]
        protected static extern IntPtr CreateGa();

        [DllImport("GA_Engine.dll")]
        protected static extern void DisposeGa(IntPtr disposeObject);
    }
}
