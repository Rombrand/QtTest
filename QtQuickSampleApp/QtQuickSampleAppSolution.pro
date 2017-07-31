# qmake generates a Makefile with all specified subdirectories and runs a make with the new Makefile 
TEMPLATE = subdirs  
# The SUBDIRS variable is used to contain a list of all the subdirectories to be processed:
SUBDIRS += QtQuickSampleApp \
    QtQuickSampleTest \
    QtQuickSampleLib

