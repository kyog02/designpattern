#ifndef FACTORYCOMMAND_H
#define FACTORYCOMMAND_H

// オブジェクト呼び出し元をインクルードする
#include "Object.h"


/**
 * Factoryで使用するオブジェクト生成コマンドを管理するクラス
 * このクラスにオブジェクトをインクルードする
 * このクラスに生成メソッドを静的に用意して、Factoryで使用する。
 */
class FactoryCommand
{
public:
    static IObject* CreateObject(void){ return new Object(); }
};

#endif //FACTORYCOMMAND_H