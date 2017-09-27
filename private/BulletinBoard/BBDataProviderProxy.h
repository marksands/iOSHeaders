//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProviderClientProxy.h"

@class BBDataProviderIdentity, NSObject<OS_dispatch_queue>, NSString;

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy>
{
    id <BBRemoteDataProvider> _dataProvider;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    BBDataProviderIdentity *_identity;
    _Bool _dataProviderDidLoad;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    id <BBRemoteDataProviderServerProxy> _serverProxy;
    _Bool _connected;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) BBDataProviderIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (void)deliverBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dataProviderDidLoad;
- (void)updateSectionInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)updateSectionInfoWithHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateClearedInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)reloadDefaultSectionInfo;
- (void)reloadSectionParameters;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;
- (void)modifyBulletin:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)addBulletin:(id)arg1 interrupt:(_Bool)arg2;
- (void)invalidateBulletins;
- (void)_makeClientRequest:(CDUnknownBlockType)arg1;
- (void)_makeServerRequest:(CDUnknownBlockType)arg1;
- (void)setServerProxy:(id)arg1;
- (void)updateIdentity:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

