//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
using Bright.Serialization;
using System.Collections.Generic;
using SimpleJSON;



namespace cfg.Battle
{ 

public sealed partial class TBGameEnvItem
{
    private readonly Dictionary<int, Battle.GameEnvItem> _dataMap;
    private readonly List<Battle.GameEnvItem> _dataList;
    
    public TBGameEnvItem(JSONNode _json)
    {
        _dataMap = new Dictionary<int, Battle.GameEnvItem>();
        _dataList = new List<Battle.GameEnvItem>();
        
        foreach(JSONNode _row in _json.Children)
        {
            var _v = Battle.GameEnvItem.DeserializeGameEnvItem(_row);
            _dataList.Add(_v);
            _dataMap.Add(_v.Id, _v);
        }
        PostInit();
    }

    public Dictionary<int, Battle.GameEnvItem> DataMap => _dataMap;
    public List<Battle.GameEnvItem> DataList => _dataList;

    public Battle.GameEnvItem GetOrDefault(int key) => _dataMap.TryGetValue(key, out var v) ? v : null;
    public Battle.GameEnvItem Get(int key) => _dataMap[key];
    public Battle.GameEnvItem this[int key] => _dataMap[key];

    public void Resolve(Dictionary<string, object> _tables)
    {
        foreach(var v in _dataList)
        {
            v.Resolve(_tables);
        }
        PostResolve();
    }

    public void TranslateText(System.Func<string, string, string> translator)
    {
        foreach(var v in _dataList)
        {
            v.TranslateText(translator);
        }
    }
    
    
    partial void PostInit();
    partial void PostResolve();
}

}