 /*################################################################################
#   TargomanBuildSystem
#
#   Copyright(c) 2021 by Targoman Intelligent Processing <http://tip.co.ir>
#
#   Redistribution and use in source and binary forms are allowed under the
#   terms of BSD License 2.0. See LICENSE file
################################################################################*/

#include <QSharedData>

namespace DummyLib2 {
namespace Private {

class clsSamplePrivate : public QSharedData{
public:
    QString SampleString;
};

}
}
