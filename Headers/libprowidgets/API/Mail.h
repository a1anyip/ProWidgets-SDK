//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

@interface PWAPIMail : NSObject

+ (BOOL)canSendMail;

+ (void)sendMailWithHTMLContent:(NSString *)htmlContent subject:(NSString *)subject sender:(NSString *)sender to:(NSArray *)to;
+ (void)sendMailWithHTMLContent:(NSString *)htmlContent subject:(NSString *)subject sender:(NSString *)sender to:(NSArray *)to cc:(NSArray *)cc bcc:(NSArray *)bcc;

+ (NSDictionary *)defaultSenderAccount;
+ (NSArray *)availableSenderAccounts;
+ (NSString *)fullNameForSenderAddress:(NSString *)address;

@end