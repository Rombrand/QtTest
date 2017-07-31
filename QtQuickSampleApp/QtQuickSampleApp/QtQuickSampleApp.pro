# Add more folders to ship with the application, here
folder_01.source = qml/QtQuickSampleApp
folder_01.target = qml
DEPLOYMENTFOLDERS = folder_01

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
#    MyCalculatorViewModel.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

# HEADERS += MyCalculatorViewModel.h
# wird ersetzt durch:

INCLUDEPATH += $$PWD/../QtQuickSampleLib

# Adds the QtQuickSampleLib.lib to the linker
# unix:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtQuickSampleLib/release/ -lQtQuickSampleLib
# else:unix:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtQuickSampleLib/debug/ -lQtQuickSampleLib


win32:CONFIG (release, debug|release): LIBS += -L$$OUT_PWD/../QtQuickSampleLib/release/ -lQtQuickSampleLib
else:win32:CONFIG (debug, debug|release): LIBS += -L$$OUT_PWD/../QtQuickSampleLib/debug/ -lQtQuickSampleLib
else: unix:LIBS += -L$$OUT_PWD/../QtQuickSampleLib/ -lQtQuickSampleLib


