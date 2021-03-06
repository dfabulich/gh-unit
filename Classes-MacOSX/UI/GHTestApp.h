//
//  GHTestApp.h
//  GHUnit
//
//  Created by Gabriel Handford on 1/20/09.
//  Copyright 2009. All rights reserved.
//

#import "GHTestWindowController.h"

#import "GHTestRunner.h"

@interface GHTestApp : NSObject <GHTestRunnerDelegate> {
	NSMutableArray *topLevelObjects_;
	
	GHTestWindowController *windowController_;
	
	GHTestSuite *suite_;
}

- (id)initWithSuite:(GHTestSuite *)suite;

- (void)runTests;

@end
