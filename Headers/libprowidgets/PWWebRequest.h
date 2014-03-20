//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"

typedef void (^PWWebRequestBlock)(BOOL success, int statusCode, NSDictionary *headers, NSString *response, NSError *error);

@interface PWWebRequest : NSObject

// helper methods
+ (NSString *)encodeURIComponent:(NSString *)string;
+ (NSString *)decodeURIComponent:(NSString *)string;

+ (instancetype)sendRequestWithURL:(NSURL *)url;
+ (instancetype)sendRequestWithURL:(NSURL *)url completionHandler:(PWWebRequestBlock)completionHandler;
+ (instancetype)sendRequestWithURL:(NSURL *)url method:(NSString *)method completionHandler:(PWWebRequestBlock)completionHandler;
+ (instancetype)sendRequestWithURL:(NSURL *)url method:(NSString *)method params:(id)params completionHandler:(PWWebRequestBlock)completionHandler;
+ (instancetype)sendRequestWithURL:(NSURL *)url method:(NSString *)method params:(id)params headers:(NSDictionary *)headers completionHandler:(PWWebRequestBlock)completionHandler;

- (void)cancel;

@end