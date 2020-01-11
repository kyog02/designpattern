#include "Factory.h"


// オブジェクト生成コマンドの登録方法
void Factory::RegisterObject(string type, function<IObject*(void)> cb)
{
    cbList[type] = cb;
}

// オブジェクト生成コマンドの解除方法
void Factory::UnRegisterObject(string type)
{
    cbList.erase(type);
}

// オブジェクト生成
IObject* Factory::CreateObject(string type)
{
    map<string, function<IObject*(void)> >::iterator it = cbList.find(type);
    // 生成メソッドが見つかったら、コマンドを叩く。
    if(it != cbList.end())
        return it->second();    

    return NULL;
}