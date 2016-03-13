//
//  SURemoteMessagePort.h
//  Sparkle
//
//  Created by Mayur Pawashe on 3/9/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SURemoteMessagePort : NSObject

- (nullable instancetype)initWithServiceName:(NSString *)serviceName invalidationCallback:(void (^)(void))invalidationCallback;

- (void)sendMessageWithIdentifier:(int32_t)identifier data:(NSData *)data completion:(void (^)(BOOL success))completionHandler;

- (void)invalidate;

@end

NS_ASSUME_NONNULL_END
