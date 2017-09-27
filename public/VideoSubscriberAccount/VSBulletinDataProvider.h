//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"
#import "VSBulletinServiceProtocol.h"

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface VSBulletinDataProvider : NSObject <VSBulletinServiceProtocol, BBRemoteDataProvider>
{
    BBDataProviderConnection *_dataProviderConnection;
    BBDataProviderProxy *_dataProviderProxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_bulletins;
    NSString *_authenticationBulletinRecordID;
}

@property(copy, nonatomic) NSString *authenticationBulletinRecordID; // @synthesize authenticationBulletinRecordID=_authenticationBulletinRecordID;
@property(retain, nonatomic) NSMutableDictionary *bulletins; // @synthesize bulletins=_bulletins;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) BBDataProviderProxy *dataProviderProxy; // @synthesize dataProviderProxy=_dataProviderProxy;
@property(retain, nonatomic) BBDataProviderConnection *dataProviderConnection; // @synthesize dataProviderConnection=_dataProviderConnection;
- (void).cxx_destruct;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)sectionParameters;
- (id)sortDescriptors;
- (id)defaultSectionInfo;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (void)postAuthenticationBulletinWithAppStoreRoomURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeBulletinWithRecordID:(id)arg1;
- (void)_removeBulletin:(id)arg1;
- (void)_addBulletinRequest:(id)arg1;
- (id)_bulletinRequestWithMessage:(id)arg1 actionURL:(id)arg2;
- (void)_prepareDataProviderProxyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

