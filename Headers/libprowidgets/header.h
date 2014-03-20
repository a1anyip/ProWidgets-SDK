//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#ifndef __HEADER__
#define __HEADER__

#import "objc/objc.h"
#import "objc/runtime.h"

typedef enum {
	PWWidgetOrientationPortrait,
	PWWidgetOrientationLandscape
} PWWidgetOrientation;

typedef enum {
	PWWidgetLayoutDefault,
	PWWidgetLayoutCustom
} PWWidgetLayout;

typedef enum {
	PWWidgetCellTypeNormal,
	PWWidgetCellTypeTextArea
} PWWidgetCellType;

typedef enum {
	PWWidgetItemCellStyleNone,	// [                   ]
	PWWidgetItemCellStyleText,	// [ Title             ]
	PWWidgetItemCellStyleValue	// [ Title       Value ]
} PWWidgetItemCellStyle;

@class PWController, PWBase, PWWidgetController, PWWidget, PWWidgetItem, PWWidgetItem, PWWidgetItemCell, PWWidgetNavigationController, PWContentViewController, PWContentItemViewController, PWTheme, PWThemableSwitch, PWThemableTableView, PWThemableTableViewCell, PWThemableTextField, PWThemableTextView, PWWidgetPlistParser, PWThemePlistParser, PWWebRequest, PWAlertView;

#endif