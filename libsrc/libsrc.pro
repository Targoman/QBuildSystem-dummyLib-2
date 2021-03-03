################################################################################
#   TargomanBuildSystem
#
#   Copyright(c) 2021 by Targoman Intelligent Processing <http://tip.co.ir>
#
#   Redistribution and use in source and binary forms are allowed under the 
#   terms of BSD License 2.0. See LICENSE file
################################################################################
# +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-#
DIST_HEADERS += \
    libDummyLib-2/clsSample.h \

# +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-#
PRIVATE_HEADERS += \
    libDummyLib-2/Private/clsSample_p.hpp \

# +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-#
SOURCES += \
    libDummyLib-2/clsSample.cpp
    
# +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-#
OTHER_FILES += \

################################################################################
include($$QBUILD_PATH/templates/libConfigs.pri)

