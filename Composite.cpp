#include<iostream>
#include<vector>
using namespace std;

/*******************************************************
 * Compositeパターン
 * 1つのインターフェイスの様々なインスタンスを
 * 1つのインスタンスであるかのように扱えるのが特徴
 * LMのElementGroupとElementの関係
 */
/*******************************************************/

/*******************************************************/
// インターフェイス
/*******************************************************/
class IComponent
{
public:
    virtual void Something() = 0;
};



/*******************************************************/
// 普通のコンポーネント1
/*******************************************************/
class ComponentString: public IComponent
{
public:
    void Something() override
    {
        cout << "ComponentString" << endl;
    }
};

/*******************************************************/
// 普通のコンポーネント2
/*******************************************************/
class ComponentBarcode: public IComponent
{
public:
    void Something() override
    {
        cout << "ComponentBarcode" << endl;
    }
};

/*******************************************************/
// コンポーネントを束ねるインスタンス且つ、自分も1つのインスタンスとして
// 認識させる。(Compositeパターン)
/*******************************************************/
class ComponentGroup: public IComponent
{
public:
    void Something() override
    {
        cout << "ComponentGroup" << endl;

        for(IComponent* Component : ComponentList)
        {
            Component->Something();
        }
    }

    void AddComponent(IComponent* component)
    {
        ComponentList.push_back(component);
    }

    void RemoveComponent()
    {
        ComponentList.pop_back();
    }

private:
    // 任意の要素の操作するなら、VectorからListに変更する。
    vector<IComponent*> ComponentList;
};


/*******************************************************/
// プログラム
/*******************************************************/
int main()
{
    auto components = new ComponentGroup();
    components->AddComponent(new ComponentString());
    components->AddComponent(new ComponentBarcode());
    components->Something();

    return 0;
}