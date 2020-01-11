#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include <list>
#include <map>

#include "IObject.h"

using namespace std;

/**
 * Factoryクラス
 * オブジェクト生成コマンドの登録・解除・オブジェクト生成を請け負う。
 * オブジェクトのヘッダファイルをインクルードする(依存する)のはFactoryクラス(もしくは今回のようにコマンド一覧作るならFactoryCommandクラス)
 * クライアントには依存させないようにする。
 * メリット：
 * 　・様々なクラスのインスタンス化にありがちな複雑なif-else文がFactory側に隠蔽化されており、クライアント側(Main文)のソフトが非常にシンプルになること。
 * 　・新しいObjectを追加する際にも、仮想クラスであるIObjectを継承した新しいクラスを作成し、FactoryCommandクラスとクライアント側に追加・登録することにより、
 *   　他のクラスの修正が不要
 *   ・コールバック関数リストを作成することで、クライアント側でコールバック関数を作成することが可能
 * 
 * ★今回はFactoryCommandクラスでオブジェクト生成メソッドをもたせたが、
 * ★IObjectインタフェースにオブジェクト生成メソッドをもたせても良い。そうすることでFactoryCommandクラスが不要になる。
 * 　(それやと、クライアント側がコマンド登録時にどうしてもオブジェクトを知っておく必要があるので依存してしまうことがかなり微妙だが。。)
 * 　プロジェクトファイル(ソリューションファイル)が分かれている場合、依存関係をどう整理するかは要注意。
 */
class Factory
{
public:
    void RegisterObject(string type, function<IObject*(void)> cb);
    void UnRegisterObject(string type);

    IObject* CreateObject(string type);

    // コマンドリストは一意で管理すべきなので、シングルトンで使用する。
    // 今回は未適用だが、もし同じ形式で使用する場合は、Factoryクラスをインタフェース化して使用する。
    static Factory &GetInstance()
    {
        static Factory Instance;
        return Instance;
    } 

private:
    // コマンドリスト
    map< string, function<IObject*(void)> > cbList;
};  


#endif //FACTORY_H