#-------------------------------------------------
#
# Project created by QtCreator 2010-11-17T00:08:34
#
#-------------------------------------------------
QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.5

win32:RC_FILE = MagicGameEditor/icons.rc
macx:ICON = MagicGameEditor/Icons/icons.icns
macx:QMAKE_INFO_PLIST = MagicGameEditor/Info.plist

QT += opengl

TARGET = MagicGameEditor
TEMPLATE = app
DESTDIR = ../magic3d/game

win32:OBJECTS_DIR = ./MGE_Windows
unix:!macx:OBJECTS_DIR = ./MGE_Linux
macx:OBJECTS_DIR = ./MGE_MacOS

UI_DIR = $$OBJECTS_DIR
MOC_DIR = $$OBJECTS_DIR

CONFIG += app_bundle
win32:LIBS += -lOpenAL32 #-lopengl32
unix:!macx:LIBS += -lopenal -lpng
macx:LIBS += -framework OpenAL

DEFINES += _MGE_ MAGIC3D_LOG #DEBUG

MAGIC3D = ../magic3d/

INCLUDEPATH += \
    ./MagicGameEditor \

include($$MAGIC3D/Magic3D_Base.pro)

SOURCES += \
    MagicGameEditor/*.cpp \
    MagicGameEditor/MGE/*.cpp

HEADERS  += \
    MagicGameEditor/*.h \
    MagicGameEditor/MGE/*.h

FORMS += \
    MagicGameEditor/*.ui

RESOURCES += \
    MagicGameEditor/MagicGameEditor.qrc

OTHER_FILES += \
    Project/data/shader/*.* \
    Project/mge.style \
    Project/config.xml