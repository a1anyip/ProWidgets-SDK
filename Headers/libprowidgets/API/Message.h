//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

@interface PWAPIMessage : NSObject

+ (void)sendMessage:(NSString *)content recipients:(NSArray *)recipients;

@end