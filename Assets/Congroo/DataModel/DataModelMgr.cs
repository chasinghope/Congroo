using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace Congroo.Core
{
    public partial class DataModelMgr : Singleton<DataModelMgr>
    {
        private List<DataModelBase> mDataModelList = new List<DataModelBase>();

        public void Initialize()
        {

        }

        public void AddDataModel(DataModelBase model)
        {
            if(!mDataModelList.Contains(model))
            {
                model.Initialize();
                mDataModelList.Add(model);
            }
        }

        public void RemoveDataModel(DataModelBase model)
        {
            if(mDataModelList.Contains(model))
            {
                model.Dispose();
                mDataModelList.Remove(model);
            }
        }
    }
}