TARGET = :clang
ARCHS = armv7 arm64

BUNDLE_NAME = Dictionary
Dictionary_FILES = Dictionary.m
Dictionary_INSTALL_PATH = /Library/ProWidgets/Widgets/
Dictionary_FRAMEWORKS = UIKit CoreGraphics QuartzCore
Dictionary_LIBRARIES = prowidgets
Dictionary_BUNDLE_EXTENSION = widget

SUBPROJECTS = preference

include theos/makefiles/common.mk
include $(THEOS_MAKE_PATH)/bundle.mk
include $(THEOS_MAKE_PATH)/aggregate.mk