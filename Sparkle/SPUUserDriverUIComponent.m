//
//  SPUUserDriverUIComponent.m
//  Sparkle
//
//  Created by Mayur Pawashe on 8/13/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import "SPUUserDriverUIComponent.h"
#import "SPUApplicationInfo.h"

@implementation SPUUserDriverUIComponent

- (instancetype)init
{
    self = [super init];
    if (self != nil) {
    }
    return self;
}

- (void)terminateApplicationForBundle:(NSBundle *)bundle
{
    NSArray<NSRunningApplication *> *runningApplications = [SPUApplicationInfo runningApplicationsWithBundle:bundle];
    for (NSRunningApplication *runningApplication in runningApplications) {
        [runningApplication terminate];
    }
}

- (BOOL)applicationIsAliveForBundle:(NSBundle *)bundle
{
    return ([SPUApplicationInfo runningApplicationWithBundle:bundle] != nil);
}

@end
