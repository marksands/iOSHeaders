//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SBFBlockStatusProvider <NSObject>
- (double)timeIntervalUntilUnblockedSinceReferenceDate;
- (_Bool)isThermallyBlocked;
- (_Bool)isTemporarilyBlocked;
- (_Bool)isPermanentlyBlocked;
- (_Bool)isBlocked;
@end

