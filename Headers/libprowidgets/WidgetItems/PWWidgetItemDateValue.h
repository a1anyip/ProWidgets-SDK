//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "item.h"

@interface PWWidgetItemDateValue : PWWidgetItem

@property(nonatomic) BOOL hideDateText;
@property(nonatomic) BOOL hideTimeText;
@property(nonatomic) UIDatePickerMode datePickerMode;
@property(nonatomic) NSUInteger minuteInterval;

@end

@interface PWWidgetItemDateValueCell : PWWidgetItemCell

@property(nonatomic, readonly) UIDatePicker *datePicker;

@end