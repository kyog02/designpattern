#ifndef OBJECT_H
#define OBJECT_H

#include "IObject.h"

// Factoryで生成するオブジェクトの一例。
// IObjectを継承しているクラスがたくさんいて、
// それらの生成を切り替えて行う必要がある時に有効なパターン
class Object : public IObject
{
public:
    virtual void Method() override;
};

#endif // OBJECT_H