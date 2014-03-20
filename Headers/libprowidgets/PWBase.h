//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"
#import "PWAlertView.h"

@interface PWBase : NSObject

@property(nonatomic) BOOL requiresProtectedDataAccess;

@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSBundle *bundle;
@property(nonatomic, readonly) NSDictionary *info;
@property(nonatomic, readonly) NSDictionary *userInfo;

@property(nonatomic, readonly) NSString *preferencePlistPath;
@property(nonatomic, readonly) NSMutableDictionary *preferenceDict;

/**
 * Preference
 * Public API
 **/

// Getters

// object types
- (NSString *)stringValueForPreferenceKey:(NSString *)key defaultValue:(NSString *)defaultValue;
- (NSArray *)arrayValueForPreferenceKey:(NSString *)key defaultValue:(NSArray *)defaultValue;
- (NSDictionary *)dictionaryValueForPreferenceKey:(NSString *)key defaultValue:(NSDictionary *)defaultValue;
- (NSDate *)dateValueForPreferenceKey:(NSString *)key defaultValue:(NSDate *)defaultValue;

// primitive types
- (NSInteger)intValueForPreferenceKey:(NSString *)key defaultValue:(NSInteger)defaultValue;
- (CGFloat)doubleValueForPreferenceKey:(NSString *)key defaultValue:(CGFloat)defaultValue;
- (BOOL)boolValueForPreferenceKey:(NSString *)key defaultValue:(BOOL)defaultValue;

// Setter
- (BOOL)setValue:(id)value forPreferenceKey:(NSString *)key;

// show message in alert view
- (void)showMessage:(NSString *)message;
- (void)showMessage:(NSString *)message title:(NSString *)title;
- (void)showMessage:(NSString *)message title:(NSString *)title handler:(void(^)(void))handler;

// show message with a text input in alert view
- (void)prompt:(NSString *)message buttonTitle:(NSString *)buttonTitle defaultValue:(NSString *)defaultValue style:(UIAlertViewStyle)style completion:(PWAlertViewCompletionHandler)completion;
- (void)prompt:(NSString *)message title:(NSString *)title buttonTitle:(NSString *)buttonTitle defaultValue:(NSString *)defaultValue style:(UIAlertViewStyle)style completion:(PWAlertViewCompletionHandler)completion;

@end