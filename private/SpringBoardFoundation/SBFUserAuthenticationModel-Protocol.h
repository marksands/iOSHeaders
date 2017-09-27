//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SBFMobileKeyBagState;

@protocol SBFUserAuthenticationModel <NSObject>
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
@property(nonatomic) id <SBFUserAuthenticationModelDelegate> delegate;
- (void)synchronize;
- (void)notePasscodeUnlockFailedWithError:(NSError *)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)performPasswordTest:(void (^)(_Bool *))arg1;

@optional
- (void)noteNewMkbDeviceLockState:(SBFMobileKeyBagState *)arg1;
- (void)refreshBlockedState;
- (void)clearBlockedState;
@end

