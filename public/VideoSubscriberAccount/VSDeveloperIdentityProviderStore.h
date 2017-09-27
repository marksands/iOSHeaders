//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VSDeveloperServiceProtocol.h"

@class NSString, VSPersistentContainer, VSRemoteNotifier;

__attribute__((visibility("hidden")))
@interface VSDeveloperIdentityProviderStore : NSObject <VSDeveloperServiceProtocol>
{
    VSPersistentContainer *_persistentContainer;
    VSRemoteNotifier *_remoteNotifier;
}

@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
@property(retain, nonatomic) VSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (void).cxx_destruct;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_noteDidChange;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (id)_developerIdentityProviderInContext:(id)arg1;
- (id)_fetchRequest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

