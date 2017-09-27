//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSUserDefaults;

@interface DEDPersistence : NSObject
{
    NSMutableSet *_bugSessionIdentifiers;
    NSUserDefaults *_userDefaults;
}

+ (id)sharedInstance;
@property(retain) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain) NSMutableSet *bugSessionIdentifiers; // @synthesize bugSessionIdentifiers=_bugSessionIdentifiers;
- (void).cxx_destruct;
- (id)_indexKeyForBugSessionIdentifier:(id)arg1;
- (id)_indexKeyForBugSession:(id)arg1;
- (void)removeBugSession:(id)arg1;
- (void)updateBugSession:(id)arg1;
- (id)loadSavedBugSessions;
- (id)init;

@end

