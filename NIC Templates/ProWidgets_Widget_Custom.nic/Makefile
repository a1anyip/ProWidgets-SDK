TARGET = :clang
ARCHS = armv7 arm64

include @@THEOS@@/makefiles/common.mk

BUNDLE_NAME = @@PROJECTNAME@@
@@PROJECTNAME@@_FILES = @@PROJECTNAME@@.m ViewController.m
@@PROJECTNAME@@_FRAMEWORKS = Foundation UIKit
@@PROJECTNAME@@_LIBRARIES = prowidgets
@@PROJECTNAME@@_INSTALL_PATH = /Library/ProWidgets/Widgets/
@@PROJECTNAME@@_BUNDLE_EXTENSION = widget

include $(THEOS_MAKE_PATH)/bundle.mk

after-install::
	install.exec "killall -9 backboardd"