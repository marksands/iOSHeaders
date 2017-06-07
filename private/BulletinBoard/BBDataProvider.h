//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBSectionIdentity-Protocol.h>

@class BBDataProviderIdentity, NSString;

@interface BBDataProvider : NSObject <BBSectionIdentity>
{
    BBDataProviderIdentity *_identity;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (_Bool)canPerformMigration;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)reloadIdentityWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)displayNameForFilterID:(id)arg1;
- (id)parentSectionIdentifier;
- (_Bool)canClearBulletinsByDate;
- (_Bool)canClearAllBulletins;
- (_Bool)syncsBulletinDismissal;
- (_Bool)isPushDataProvider;
- (id)sortKey;
- (id)sortDescriptors;
- (id)sectionParameters;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)defaultSubsectionInfos;
- (id)defaultSectionInfo;
- (id)universalSectionIdentifier;
- (id)sectionIdentifier;
- (void)dataProviderDidLoad;
- (void)startWatchdog;
- (_Bool)initialized;
- (void)invalidate;
@property(retain) BBDataProviderIdentity *identity;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

