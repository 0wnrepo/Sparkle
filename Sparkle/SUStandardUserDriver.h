//
//  SUStandardUserDriver.h
//  Sparkle
//
//  Created by Mayur Pawashe on 2/14/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SUUserDriver.h"
#import "SUStandardUserDriverProtocol.h"
#import "SUExport.h"

NS_ASSUME_NONNULL_BEGIN

@protocol SUStandardUserDriverDelegate;

/*!
 Sparkle's standard built-in user driver for updater interactions
 */
SU_EXPORT @interface SUStandardUserDriver : NSObject <SUUserDriver, SUStandardUserDriver>

/*!
 Initializes a Sparkle's standard user driver for user update interactions
 
 @param hostBundle The target bundle of the host that is being updated
 @param delegate The delegate to this user driver. Pass nil if you don't want to provide one.
 */
- (instancetype)initWithHostBundle:(NSBundle *)hostBundle delegate:(_Nullable id <SUStandardUserDriverDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
