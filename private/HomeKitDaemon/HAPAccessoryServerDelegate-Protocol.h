//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HAPAccessoryServer, HMFOSTransaction, NSArray, NSError, NSNumber, NSString;

@protocol HAPAccessoryServerDelegate <NSObject>
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateName:(NSString *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateCategory:(NSNumber *)arg2;
- (void)accessoryServerDidUpdateStateNumber:(HAPAccessoryServer *)arg1;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateHasPairings:(_Bool)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateValuesForCharacteristics:(NSArray *)arg2 stateNumber:(NSNumber *)arg3 broadcast:(_Bool)arg4;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 isBlockedWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didDiscoverAccessories:(NSArray *)arg2 transaction:(HMFOSTransaction *)arg3 error:(NSError *)arg4;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didStopPairingWithError:(NSError *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 requestUserPermission:(long long)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
@end

