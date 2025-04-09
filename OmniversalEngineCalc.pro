QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    FormCalculator/twstandardhiddenpanel.cpp \
    FormCalculator\formcalculatordateandtime.cpp \
    FormCalculator\formcalculatorgraph.cpp \
    FormCalculator\formcalculatorprogrammer.cpp \
    FormCalculator\formcalculatorscientific.cpp \
    FormCalculator\formcalculatorstandard.cpp \
    FormConverter\formconverterangle.cpp \
    FormConverter\formconvertercurrencyexchange.cpp \
    FormConverter\formconverterdata.cpp \
    FormConverter\formconverterenergy.cpp \
    FormConverter\formconverterlengthandareaandvolume.cpp \
    FormConverter\formconverterpower.cpp \
    FormConverter\formconverterpressure.cpp \
    FormConverter\formconverterspeed.cpp \
    FormConverter\formconvertertemperature.cpp \
    FormConverter\formconverterweightandmass.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    FormCalculator/twstandardhiddenpanel.h \
    FormCalculator\formcalculatordateandtime.h \
    FormCalculator\formcalculatorgraph.h \
    FormCalculator\formcalculatorprogrammer.h \
    FormCalculator\formcalculatorscientific.h \
    FormCalculator\formcalculatorstandard.h \
    FormConverter\formconverterangle.h \
    FormConverter\formconvertercurrencyexchange.h \
    FormConverter\formconverterdata.h \
    FormConverter\formconverterenergy.h \
    FormConverter\formconverterlengthandareaandvolume.h \
    FormConverter\formconverterpower.h \
    FormConverter\formconverterpressure.h \
    FormConverter\formconverterspeed.h \
    FormConverter\formconvertertemperature.h \
    FormConverter\formconverterweightandmass.h \
    mainwindow.h

FORMS += \
    FormCalculator/twstandardhiddenpanel.ui \
    FormCalculator\formcalculatordateandtime.ui \
    FormCalculator\formcalculatorgraph.ui \
    FormCalculator\formcalculatorprogrammer.ui \
    FormCalculator\formcalculatorscientific.ui \
    FormCalculator\formcalculatorstandard.ui \
    FormConverter\formconverterangle.ui \
    FormConverter\formconvertercurrencyexchange.ui \
    FormConverter\formconverterdata.ui \
    FormConverter\formconverterenergy.ui \
    FormConverter\formconverterlengthandareaandvolume.ui \
    FormConverter\formconverterpower.ui \
    FormConverter\formconverterpressure.ui \
    FormConverter\formconverterspeed.ui \
    FormConverter\formconvertertemperature.ui \
    FormConverter\formconverterweightandmass.ui \
    mainwindow.ui

DISTFILES += \      # 이미지 파일들
    icon/delete_button.png \
    icon/refresh_button.png

# 배포에 대한 기본값
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
