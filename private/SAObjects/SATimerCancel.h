//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import "SATimerTimerAction.h"

@class NSString;

@interface SATimerCancel : SADomainCommand <SATimerTimerAction>
{
}

+ (id)cancelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)cancel;
- (_Bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

