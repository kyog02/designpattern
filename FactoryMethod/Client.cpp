#include<iostream>

#include "Factory.h"
#include "FactoryCommand.h"


// Factoryクラスの使い方
int main()
{
    // コマンドの登録方法
    Factory::GetInstance().RegisterObject("abc", FactoryCommand::CreateObject);
    
    // クラスの精製方法
    IObject* ob = Factory::GetInstance().CreateObject("abc");

    // 使い方
    ob->Method();
    return 0;
}