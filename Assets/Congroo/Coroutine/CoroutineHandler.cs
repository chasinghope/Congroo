//======================================================================
//        Copyright (C) 2015-2020 Winddy He. All rights reserved
//        Email: hgplan@126.com
//======================================================================
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace Congroo.Core
{
    public class CoroutineHandler
    {
        public IEnumerator IEnum { get; private set; }

        public CoroutineHandler(IEnumerator rIEnum)
        {
            this.IEnum = rIEnum;
        }
    }
}
