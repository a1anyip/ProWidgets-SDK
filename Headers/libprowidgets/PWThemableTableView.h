//  ProWidgets
//  Revolutionary widget suite and framework for iOS
//  Copyright 2014 Alan Yip. All rights reserved.

#import "header.h"
#import "PWTheme.h"

@interface PWThemableTableView : UITableView

- (instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style theme:(PWTheme *)theme;

@end