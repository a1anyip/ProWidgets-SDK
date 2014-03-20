//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "item.h"

typedef NS_ENUM(NSUInteger, TonePickerType) {
	TonePickerTypeBoth = 1,
	TonePickerTypeOnlyAlertTone = 2,
	TonePickerTypeOnlyRingTone = 3
};

typedef NS_ENUM(NSUInteger, ToneType) {
	ToneTypeRingtone = 1,
	ToneTypeMediaItem = 2
};

@interface PWWidgetItemToneValue : PWWidgetItem

@property(nonatomic) TonePickerType tonePickerType;
@property(nonatomic, readonly) NSString *selectedToneIdentifier;
@property(nonatomic, readonly) ToneType selectedToneType;

- (void)setSelectedToneIdentifier:(NSString *)identifier toneType:(ToneType)toneType;

@end

@interface PWWidgetItemToneValueCell : PWWidgetItemCell

@end