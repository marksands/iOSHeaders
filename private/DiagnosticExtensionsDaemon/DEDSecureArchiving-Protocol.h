//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSSet;

@protocol DEDSecureArchiving <NSObject>
+ (NSSet *)archivedClasses;

@optional
+ (id)secureUnarchiveWithData:(NSData *)arg1;
- (NSData *)secureArchive;
@end

