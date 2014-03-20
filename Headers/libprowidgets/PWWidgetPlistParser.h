//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"

@interface PWWidgetPlistParser : NSObject

+ (void)parse:(NSDictionary *)dict forWidget:(PWWidget *)widget;
+ (void)parse:(NSDictionary *)dict forContentViewController:(PWContentViewController *)viewController;
+ (void)parse:(NSDictionary *)dict forContentItemViewController:(PWContentItemViewController *)itemViewController;

@end