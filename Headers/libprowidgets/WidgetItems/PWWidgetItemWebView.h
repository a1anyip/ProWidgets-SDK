//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "item.h"

@interface PWWidgetItemWebView : PWWidgetItem

- (void)loadData:(NSData *)data MIMEType:(NSString *)MIMEType textEncodingName:(NSString *)encodingName baseURL:(NSURL *)baseURL;
- (void)loadHTMLString:(NSString *)string baseURL:(NSURL *)baseURL;
- (void)loadRequest:(NSURLRequest *)request;

@end

@interface PWWidgetItemWebViewCell : PWWidgetItemCell

@property(nonatomic, readonly) UIWebView *webView;

@end