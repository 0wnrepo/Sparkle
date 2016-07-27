//
//  SUInstallerLauncherProtocol.h
//  InstallerLauncher
//
//  Created by Mayur Pawashe on 4/1/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUAuthorizationReply.h"

@protocol SUInstallerLauncherProtocol

- (void)launchInstallerAtPath:(NSString *)installerPath progressToolPath:(NSString *)progressToolPath withHostBundlePath:(NSString *)hostBundlePath authorizationPrompt:(NSString *)authorizationPrompt installationType:(NSString *)installationType allowingDriverInteraction:(BOOL)allowingDriverInteraction allowingUpdaterInteraction:(BOOL)allowingUpdaterInteraction completion:(void (^)(SUAuthorizationReply))completionHandler;
    
@end
