//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"

@interface PWWidgetController : NSObject

@property(nonatomic, readonly) BOOL isActive;
@property(nonatomic, readonly) BOOL isAnimating;
@property(nonatomic, readonly) BOOL isPresented;
@property(nonatomic, readonly) BOOL isMinimized;

@property(nonatomic, readonly) PWWidget *widget;

+ (BOOL)isDragging;
+ (BOOL)isPresentingWidget;
+ (BOOL)isPresentingMaximizedWidget;

+ (BOOL)presentWidget:(PWWidget *)widget userInfo:(NSDictionary *)userInfo;
+ (BOOL)presentWidgetNamed:(NSString *)name userInfo:(NSDictionary *)userInfo;
+ (BOOL)presentWidgetFromBundle:(NSBundle *)bundle userInfo:(NSDictionary *)userInfo;

+ (NSSet *)allControllers;
+ (instancetype)activeController;
+ (instancetype)controllerForPresentedWidget:(PWWidget *)widget;
+ (instancetype)controllerForPresentedWidgetNamed:(NSString *)name;
+ (instancetype)controllerForPresentedWidgetWithPrincipalClass:(Class)principalClass;

+ (void)dismissAllControllers:(BOOL)force;
+ (void)minimizeAllControllers;

- (BOOL)dismiss;

- (BOOL)minimize;
- (BOOL)maximize;

@end