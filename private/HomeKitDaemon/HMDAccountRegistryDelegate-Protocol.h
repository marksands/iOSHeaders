//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDAccount, HMDAccountRegistry, HMDDevice;

@protocol HMDAccountRegistryDelegate <NSObject>
- (void)accountRegistry:(HMDAccountRegistry *)arg1 didUpdateCurrentDevice:(HMDDevice *)arg2;
- (void)accountRegistry:(HMDAccountRegistry *)arg1 didRemoveAccount:(HMDAccount *)arg2;
- (void)accountRegistry:(HMDAccountRegistry *)arg1 didAddAccount:(HMDAccount *)arg2;
@end

