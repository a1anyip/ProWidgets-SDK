//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"

@interface PWController : UIViewController

@property(nonatomic, assign) BOOL interfaceOrientationIsLocked;
@property(nonatomic, assign) UIInterfaceOrientation lockedInterfaceOrientation;

@property(nonatomic, readonly) NSBundle *baseBundle;
@property(nonatomic, readonly) NSBundle *localizationBundle;
@property(nonatomic, readonly) NSBundle *resourceBundle;

// Preference
@property(nonatomic, readonly) NSArray *visibleWidgetOrder;
@property(nonatomic, readonly) NSArray *hiddenWidgetOrder;
@property(nonatomic, readonly) NSString *defaultThemeName;
@property(nonatomic, readonly) NSUInteger preferredSource; // 0 is iCloud, 1 is Local

+ (instancetype)sharedInstance;

+ (NSBundle *)bundleNamed:(NSString *)name ofType:(NSString *)type extension:(NSString *)extension;
+ (NSBundle *)widgetBundleNamed:(NSString *)name;
+ (NSBundle *)scriptBundleNamed:(NSString *)name;
+ (NSBundle *)themeBundleNamed:(NSString *)name;
+ (NSBundle *)activationMethodBundleNamed:(NSString *)name;

+ (BOOL)protectedDataAvailable;
+ (NSString *)deviceModel;
+ (int)version;
+ (NSBundle *)baseBundle;
+ (NSString *)basePath;
+ (NSBundle *)localizationBundle;

+ (BOOL)isIPad;
+ (BOOL)isPortrait;
+ (BOOL)isLandscape;

// retrieve current orientation (either portrait or landscape)
+ (PWWidgetOrientation)currentOrientation;
- (PWWidgetOrientation)currentOrientation;

// retrieve current interface orientation (four orientations)
+ (UIInterfaceOrientation)currentInterfaceOrientation;
- (UIInterfaceOrientation)currentInterfaceOrientation;

- (CGFloat)availableWidthInOrientation:(PWWidgetOrientation)orientation fullscreen:(BOOL)fullscreen;
- (CGFloat)availableHeightInOrientation:(PWWidgetOrientation)orientation fullscreen:(BOOL)fullscreen withKeyboard:(BOOL)withKeyboard;
- (CGFloat)heightOfNavigationBarInOrientation:(PWWidgetOrientation)orientation;
- (CGFloat)defaultHeightOfKeyboardInOrientation:(PWWidgetOrientation)orientation;

- (UIImage *)imageResourceNamed:(NSString *)name;
- (NSString *)commonLocalizedStringForPreferences:(NSArray *)preferences key:(NSString *)key;

/**
 * Theme
 **/

- (PWTheme *)loadDefaultThemeForWidget:(PWWidget *)widget;
- (PWTheme *)loadThemeNamed:(NSString *)name forWidget:(PWWidget *)widget;

/**
 * Public API
 **/

// widget
- (NSDictionary *)infoOfWidgetNamed:(NSString *)name;
- (NSDictionary *)infoOfWidgetInBundle:(NSBundle *)bundle;
- (NSDictionary *)infoOfEnabledWidgetInBundle:(NSBundle *)bundle;

// theme
- (NSDictionary *)infoOfThemeNamed:(NSString *)name;
- (NSDictionary *)infoOfThemeInBundle:(NSBundle *)bundle;

// activation method
- (NSDictionary *)infoOfActivationMethodNamed:(NSString *)name;
- (NSDictionary *)infoOfActivationMethodInBundle:(NSBundle *)bundle;

- (UIImage *)iconOfWidgetNamed:(NSString *)name;
- (UIImage *)iconOfWidgetInBundle:(NSBundle *)bundle;
- (UIImage *)iconOfThemeNamed:(NSString *)name;
- (UIImage *)iconOfThemeInBundle:(NSBundle *)bundle;

- (UIImage *)maskOfWidgetNamed:(NSString *)name;
- (UIImage *)maskOfWidgetInBundle:(NSBundle *)bundle;

- (NSArray *)installedWidgets;
- (NSArray *)enabledWidgets;
- (NSDictionary *)enabledWidgetsWithCategories;
- (NSArray *)visibleWidgets; // visible widgets in Activation Methods
- (NSArray *)hiddenWidgets; // hidden widgets in Activation Methods
- (NSArray *)installedThemes;
- (NSArray *)activationMethods;

@end