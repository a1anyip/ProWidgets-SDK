//
//  @@PROJECTNAME@@.m
//  @@FULLPROJECTNAME@@
//
//  Created by @@USER@@ on @@DATE@@.
//  Copyright (c) @@YEAR@@ @@USER@@. All rights reserved.
//

#import "@@PROJECTNAME@@.h"

@implementation PWWidget@@PROJECTNAME@@

- (void)configure {
	[super configure];
}

- (void)load {
	[super load];
	// load resources here
}

- (void)willPresent {
	// pre-fetch data and configure default item view controller here
}

- (void)submitEventHandler:(NSDictionary *)values {
	// show an alert view when user presses action (submit) button
	NSString *value = values[@"textfield"];
	[self showMessage:value title:@"Submitted"];
}

- (void)dealloc {
	// release everything here
	[super dealloc];
}

@end