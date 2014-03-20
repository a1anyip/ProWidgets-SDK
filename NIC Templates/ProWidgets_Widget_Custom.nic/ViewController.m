//
//  ViewController.m
//  @@FULLPROJECTNAME@@
//
//  Created by @@USER@@ on @@DATE@@.
//  Copyright (c) @@YEAR@@ @@USER@@. All rights reserved.
//

#import "ViewController.h"

@implementation PWWidget@@PROJECTNAME@@ViewController

- (void)load {
	
	// load resources and configure this view controller here
	self.wantsFullscreen = NO;
	self.shouldMaximizeContentHeight = YES;
	self.shouldAutoConfigureStandardButtons = NO;
	self.requiresKeyboard = NO;
	
	// or, you may load a plist for this view controller here, if any
	// [self loadPlist:@"filename"];
	
	// retrieve the foreground color from the theme associated with the widget
	PWTheme *theme = self.theme;
	UIColor *textColor = [theme sheetForegroundColor];
	
	// add a custom label to the view
	UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 80.0)];
	label.textColor = textColor;
	label.text = @"This is a test label in\ncustom view controller.";
	label.numberOfLines = 0;
	label.textAlignment = NSTextAlignmentCenter;
	[self.view addSubview:label];
	[label release];
}

- (CGFloat)contentHeightForOrientation:(PWWidgetOrientation)orientation {
	// this method is unnecessary if either wantsFullscreen or shouldMaximizeContentHeight is YES.
	return 200.0;
}

- (void)willBePresentedInNavigationController:(UINavigationController *)navigationController {
	// since this view controller only requires close button, therefore:
	// 1) set "shouldAutoConfigureStandardButtons" to NO
	// 2) configure the required buttons here
	[self configureCloseButton];
}

- (void)dealloc {
	// release everything here
	[super dealloc];
}

@end