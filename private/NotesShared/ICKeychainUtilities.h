//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICKeychainUtilities : NSObject
{
}

+ (_Bool)removeItemForIdentifier:(id)arg1 error:(id *)arg2;
+ (id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id *)arg3;
+ (_Bool)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 error:(id *)arg4;
+ (id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id *)arg2;
+ (_Bool)addItemWithoutGuardian:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (_Bool)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (_Bool)addTouchIDGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
+ (_Bool)touchIDIsEnrolled;
+ (_Bool)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1;
+ (void)endEvaluatePolicyReplyBlock;
+ (void)beginEvaluatePolicyReplyBlock;

@end

