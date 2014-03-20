//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "item.h"

typedef NS_ENUM(NSUInteger, PWWidgetItemRecipientType) {
	PWWidgetItemRecipientTypeMessageContact,
	PWWidgetItemRecipientTypeMailContact,
};

@interface MFComposeRecipient : NSObject
@end

@interface PWWidgetItemRecipient : PWWidgetItem

@property(nonatomic) PWWidgetItemRecipientType recipientType;

- (NSArray *)addresses;
- (void)setAddresses:(NSArray *)addresses;
- (void)addAddress:(NSString *)address;
- (void)removeAddress:(NSString *)address;

- (NSArray *)recipients;
- (void)setRecipients:(NSArray *)recipients;
- (void)addRecipient:(MFComposeRecipient *)recipient;
- (void)removeRecipient:(MFComposeRecipient *)recipient;

@end

@interface PWWidgetItemRecipientCell : PWWidgetItemCell

@end