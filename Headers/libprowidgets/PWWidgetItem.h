//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"
#import "PWContentItemViewController.h"
#import "PWWidgetItemCell.h"

@interface PWWidgetItem : NSObject<NSCopying>

@property(nonatomic, assign) PWContentItemViewController *itemViewController;
@property(nonatomic, assign) PWWidgetItemCell *activeCell;

// basic properties
@property(nonatomic, readonly) PWWidgetCellType cellType;
@property(nonatomic, readonly) NSString *type;
@property(nonatomic, copy) NSString *key;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *actionEventName;
@property(nonatomic) BOOL hideChevron;
@property(nonatomic, retain) UIImage *icon;
@property(nonatomic) BOOL shouldFillHeight;
@property(nonatomic) CGFloat minimumFillHeight;
@property(nonatomic) CGFloat overrideHeight;

/**
 *  calling setValue: will trigger setItemValue: then setCellValue:
 */
@property(nonatomic, retain) id value;

@property(nonatomic, copy) void(^itemValueChangedEventBlockHandler)(id);

/**
 *  Override this method to specify the value class of this widget item. This will be used to ensure that the value passed in setValue: is valid.
 *
 *  @return The value class of this widget item.
 */
+ (Class)valueClass;

/**
 *  Override this method to specify the default value of this widget item. For instance, return an empty string in a text field widget item.
 *  Whenever the actual value is nil, you will retrieve this default value.
 *
 *  @return The default value of this widget item.
 */
+ (id)defaultValue;

//////////////////////////////////////////////////////////////////////

/**
 *  Retrieve the widget instance associated with this widget item.
 *
 *  @return The widget instance associated with this widget item.
 */
- (PWWidget *)widget;

/**
 *  Retrieve the theme instance associated with this widget item.
 *
 *  @return The theme instance associated with this widget item.
 */
- (PWTheme *)theme;

/**
 * Override this to specify which class the cell should be
 **/

+ (Class)cellClass;

/**
 * Retrieve the identifier of table view cell
 **/

+ (NSString *)cellIdentifier;

/**
 * Retrieve the table view cell for a widget item
 **/

+ (PWWidgetItemCell *)createCell:(PWTheme *)theme;

/**
 * Shortcuts related to widget items
 **/

+ (PWWidgetItem *)createItemNamed:(NSString *)name forItemViewController:(PWContentItemViewController *)itemViewController;
+ (instancetype)createItemForItemViewController:(PWContentItemViewController *)itemViewController;

/**
 * Initialization
 **/

- (instancetype)initWithKey:(NSString *)key title:(NSString *)title actionEventName:(NSString *)actionEventName hideChevron:(BOOL)hideChevron icon:(UIImage *)icon;

/**
 * Override these methods to configure the item
 **/

- (BOOL)isSelectable;
- (void)select;

- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (void)setExtraAttributes:(NSDictionary *)attributes;
- (CGFloat)cellHeightForOrientation:(PWWidgetOrientation)orientation;

- (void)setItemValue:(id)value;
- (void)setCellValue:(id)value;

@end