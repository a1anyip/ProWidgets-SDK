//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"
#import "PWTheme.h"

@interface PWThemableTableViewCell : UITableViewCell

@property(nonatomic, retain) PWTheme *theme;

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier theme:(PWTheme *)theme;

/**
 *  Override these methods to do the corresponding theming in your cell.
 */

// Normal
- (void)setBackgroundImage:(UIImage *)image forOrientation:(PWWidgetOrientation)orientation;
- (void)setBackgroundColor:(UIColor *)color;
- (void)setTitleTextColor:(UIColor *)color;
- (void)setValueTextColor:(UIColor *)color;
- (void)setButtonTextColor:(UIColor *)color;
- (void)setInputTextColor:(UIColor *)color;
- (void)setInputPlaceholderTextColor:(UIColor *)color;
- (void)setPlainTextColor:(UIColor *)color;

// Selected
- (void)setSelectedBackgroundImage:(UIImage *)image forOrientation:(PWWidgetOrientation)orientation;
- (void)setSelectedBackgroundColor:(UIColor *)color;
- (void)setSelectedTitleTextColor:(UIColor *)color;
- (void)setSelectedValueTextColor:(UIColor *)color;
- (void)setSelectedButtonTextColor:(UIColor *)color;

// Switch
- (void)setSwitchThumbColor:(UIColor *)color;
- (void)setSwitchOnColor:(UIColor *)color;
- (void)setSwitchOffColor:(UIColor *)color;

@end