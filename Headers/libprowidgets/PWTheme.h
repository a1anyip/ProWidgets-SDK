//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"

@interface PWTheme : NSObject

@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSBundle *bundle;
@property(nonatomic, readonly) PWWidget *widget;
@property(nonatomic, readonly) BOOL disabledBlur;

/**
 *  Initiailize a theme instance
 *
 *  @param name         The name of the theme.
 *  @param bundle       The bundle of the theme.
 *  @param widget       The widget instance that this theme will apply to.
 *  @param disabledBlur
 *
 *  @return Initialized theme instance
 */
- (instancetype)initWithName:(NSString *)name bundle:(NSBundle *)bundle widget:(PWWidget *)widget disabledBlur:(BOOL)disabledBlur;

- (UIView *)backgroundView;
- (UIView *)containerView;
- (UINavigationController *)navigationController;
- (UINavigationBar *)navigationBar;
- (UIColor *)preferredTintColor;
- (UIColor *)preferredBarTextColor;

/**
 * Public API
 **/

- (UIImage *)imageNamed:(NSString *)name;
- (UIImage *)imageNamed:(NSString *)name withCapInsets:(UIEdgeInsets)insets;

+ (UIColor *)parseColorString:(NSString *)string;
+ (NSString *)hexCodeFromColor:(UIColor *)color;
+ (NSString *)RGBAFromColor:(UIColor *)color;
+ (UIImage *)imageFromColor:(UIColor *)color;
+ (UIImage *)tintImage:(UIImage *)image withColor:(UIColor *)color;
+ (UIColor *)adjustColorBrightness:(UIColor *)color colorAdjustment:(CGFloat)adjustment alphaMultiplier:(CGFloat)alphaMultiplier;
+ (UIColor *)darkenColor:(UIColor *)color;
+ (UIColor *)lightenColor:(UIColor *)color;
+ (UIColor *)translucentColor:(UIColor *)color;

/**
 * Override these methods to configure the theme
 **/

/**
 *  If the theme contains blur view, you must override this method to replace it with a plain background view, or the blur view will become transparent during minimization.
 */
- (void)enterSnapshotMode;

/**
 *  Revert the changes you made in enterSnapshotMode
 */
- (void)exitSnapshotMode;

/**
 *  Override this method to add custom views to the container view or navigation bar.
 *  Set their bounds and frame in adjustLayout
 */
- (void)setupTheme;

/**
 *  Override this method to remove every views from their superview and release all views and resources.
 */
- (void)removeTheme;

/**
 *  Override this method to adjust layout of custom views.
 */
- (void)adjustLayout;

/**
 * Override these methods to customize the theme
 **/

///////////////////////////
////////// Style //////////
///////////////////////////

- (BOOL)wantsDarkKeyboard;

////////////////////////////
////////// Images //////////
////////////////////////////

// Determines the background image of the sheet
// If nil, then background color will be used instead
- (UIImage *)sheetBackgroundImageForOrientation:(PWWidgetOrientation)orientation;

// Determines the background image of the navigation bar
// If nil, then background color will be used instead
- (UIImage *)navigationBarBackgroundImageForOrientation:(PWWidgetOrientation)orientation;

// Determine the background image of the cells
//
// Not including the cells in custom table views that do not follow
// values from theme
//
// If nil, then background color will be used instead
- (UIImage *)cellBackgroundImageForOrientation:(PWWidgetOrientation)orientation;
- (UIImage *)cellSelectedBackgroundImageForOrientation:(PWWidgetOrientation)orientation;

////////////////////////////
////////// Colors //////////
////////////////////////////

- (UIColor *)tintColor;

// Determines the background color of the sheet
// If nil, then default background color will be used instead
- (UIColor *)sheetForegroundColor;
- (UIColor *)sheetBackgroundColor;

// Determines different colors in the navigation bar
// If nil, then default colors will be used instead
- (UIColor *)navigationBarBackgroundColor;
- (UIColor *)navigationTitleTextColor;
- (UIColor *)navigationButtonTextColor;

// Determine different colors in the cells
// If nil, then default colors will be used instead
- (UIColor *)cellSeparatorColor;
- (UIColor *)cellBackgroundColor;
- (UIColor *)cellTitleTextColor;
- (UIColor *)cellValueTextColor;
- (UIColor *)cellButtonTextColor;
- (UIColor *)cellInputTextColor;
- (UIColor *)cellInputPlaceholderTextColor;
- (UIColor *)cellPlainTextColor;

- (UIColor *)cellSelectedBackgroundColor;
- (UIColor *)cellSelectedTitleTextColor;
- (UIColor *)cellSelectedValueTextColor;
- (UIColor *)cellSelectedButtonTextColor;

- (UIColor *)cellHeaderFooterViewBackgroundColor;
- (UIColor *)cellHeaderFooterViewTitleTextColor;

- (UIColor *)switchThumbColor;
- (UIColor *)switchOnColor;
- (UIColor *)switchOffColor;

//////////////////////////////////////////
////////// Sizes and Dimensions //////////
//////////////////////////////////////////

// Determines the corner radius of the sheet
- (CGFloat)cornerRadius;

// Determines the height of an item cell in item table view
- (CGFloat)heightOfCellOfType:(PWWidgetCellType)type forOrientation:(PWWidgetOrientation)orientation;

//////////////////////////////////////////////////////////////////////

/**
 * Default theme values
 **/

+ (UIColor *)defaultTintColor;

+ (UIColor *)defaultSheetForegroundColor;
+ (UIColor *)defaultSheetBackgroundColor;

+ (UIColor *)defaultNavigationBarBackgroundColor;
+ (UIColor *)defaultNavigationTitleTextColor;
+ (UIColor *)defaultNavigationButtonTextColor;

+ (UIColor *)defaultCellSeparatorColor;
+ (UIColor *)defaultCellBackgroundColor;
+ (UIColor *)defaultCellTitleTextColor;
+ (UIColor *)defaultCellValueTextColor;
+ (UIColor *)defaultCellButtonTextColor;
+ (UIColor *)defaultCellInputTextColor;
+ (UIColor *)defaultCellInputPlaceholderTextColor;
+ (UIColor *)defaultCellPlainTextColor;

+ (UIColor *)defaultCellSelectedBackgroundColor;
+ (UIColor *)defaultCellSelectedTitleTextColor;
+ (UIColor *)defaultCellSelectedValueTextColor;
+ (UIColor *)defaultCellSelectedButtonTextColor;

+ (UIColor *)defaultCellHeaderFooterViewBackgroundColor;
+ (UIColor *)defaultCellHeaderFooterViewTitleTextColor;

+ (UIColor *)defaultSwitchThumbColor;
+ (UIColor *)defaultSwitchOnColor;
+ (UIColor *)defaultSwitchOffColor;

+ (CGFloat)defaultCornerRadius;
+ (CGFloat)defaultHeightOfCellOfType:(PWWidgetCellType)type forOrientation:(PWWidgetOrientation)orientation;

//////////////////////////////////////////////////////////////////////

/**
 * System colors
 **/

+ (UIColor *)systemBlueColor;

@end