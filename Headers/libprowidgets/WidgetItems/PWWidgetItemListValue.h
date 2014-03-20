//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "item.h"

@interface PWWidgetItemListValue : PWWidgetItem

@property(nonatomic, readonly) NSArray *listItemTitles;
@property(nonatomic, readonly) NSArray *listItemValues;
@property(nonatomic) NSInteger noneIndex;
@property(nonatomic) NSUInteger maximumNumberOfSelection;

- (void)setListItemTitles:(NSArray *)titles values:(NSArray *)values;

/**
 *  In subclass, override this method to return custom display text
 *
 *  @param values The selected values
 */
- (NSString *)displayTextForValues:(NSArray *)values;

@end

@interface PWWidgetItemListValueCell : PWWidgetItemCell

@end