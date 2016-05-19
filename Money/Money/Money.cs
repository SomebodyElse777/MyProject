using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Money
{
    public class Money
    {
        public uint Check() { return 1; }
        public bool Pay(uint cref) { return true; }
        public bool Cancel(uint cref) { return true;     }
        public bool CashBack(uint cref) { return true; }
    }
}
