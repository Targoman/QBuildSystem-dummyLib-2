/*################################################################################
#   TargomanBuildSystem
#
#   Copyright(c) 2021 by Targoman Intelligent Processing <http://tip.co.ir>
#
#   Redistribution and use in source and binary forms are allowed under the
#   terms of BSD License 2.0. See LICENSE file
################################################################################*/
/**
 * @author S. Mohammad M. Ziabary <ziabary@targoman.com>
 */
#include <QSharedDataPointer>
#include "libDummyLib-1/clsSample.h"

namespace DummyLib2 {
namespace Private {
class clsSamplePrivate;
}
class clsSample{
public:
    clsSample(const QString& _sampleString);
    ~clsSample();

    QString info();

public:
    QSharedDataPointer<Private::clsSamplePrivate> Data;
    DummyLib1::clsSample SampleFromDummyLib1;
};

}
