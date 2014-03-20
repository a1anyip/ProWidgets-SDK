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
	// load resources here and push the root view controller here
	// initialize the root view controller (must use initForWidget:)
	_viewController = [[PWWidget@@PROJECTNAME@@ViewController alloc] initForWidget:self];
	[self pushViewController:_viewController animated:NO];
}

- (void)willPresent {
	// pre-fetch data here
}

- (void)dealloc {
	// release everything here
	[_viewController release];
	[super dealloc];
}

@end