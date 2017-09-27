//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TUPrivacyManager : NSObject
{
}

+ (id)sharedPrivacyManager;
- (id)allBlacklistRules;
- (_Bool)isIncomingCommunicationBlockedForEmailAddress:(id)arg1;
- (_Bool)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1;
- (void)removeRule:(id)arg1;
- (void)addRule:(id)arg1;
- (void)setBlockIncomingCommunication:(_Bool)arg1 forEmailAddress:(id)arg2;
- (void)setBlockIncomingCommunication:(_Bool)arg1 forPhoneNumber:(id)arg2;
- (void)_handleBlockListChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

