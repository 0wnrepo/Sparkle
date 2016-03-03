//
//  SURemoteUpdateSettingsWindowController.h
//  Sparkle
//
//  Created by Mayur Pawashe on 3/2/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Sparkle/Sparkle.h>

@protocol SUSparkleUserDriverDelegate;

@interface SURemoteUpdateSettingsWindowController : NSWindowController <SUSparkleUserDriverDelegate>

- (NSApplicationTerminateReply)sendTerminationSignal;

@end
