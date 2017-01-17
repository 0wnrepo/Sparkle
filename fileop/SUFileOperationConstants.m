//
//  SUFileOperationConstants.m
//  Sparkle
//
//  Created by Mayur Pawashe on 6/5/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import "SUFileOperationConstants.h"

#ifdef _APPKITDEFINES_H
#error This is a "core" class and should NOT import AppKit
#endif

char * const SUFileOpRemoveQuarantineCommand = "xattr-d-apple-quarantine";
char * const SUFileOpCopyCommand = "cp";
char * const SUFileOpMoveCommand = "mv";
char * const SUFileOpChangeOwnerAndGroupCommand = "chown";
char * const SUFileOpUpdateModificationAndAccessTimeCommand = "touch";
char * const SUFileOpMakeDirectoryCommand = "mkdir";
char * const SUFileOpRemoveCommand = "rm";
char * const SUFileOpInstallCommand = "installer";
