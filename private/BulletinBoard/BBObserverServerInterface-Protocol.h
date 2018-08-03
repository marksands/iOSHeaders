//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BBResponse, BBThumbnailSizeConstraints, NSArray, NSDate, NSSet, NSString, NSUUID;

@protocol BBObserverServerInterface
- (void)getBulletinsForPublisherMatchIDs:(NSArray *)arg1 sectionID:(NSString *)arg2 withHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(NSDate *)arg1 withHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getBulletinsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getUniversalSectionIDForSectionID:(NSString *)arg1 withHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getAspectRatioForAttachmentUUID:(NSUUID *)arg1 bulletinID:(NSString *)arg2 isPrimary:(_Bool)arg3 withHandler:(void (^)(float, NSError *))arg4;
- (void)getPNGDataForAttachmentUUID:(NSUUID *)arg1 bulletinID:(NSString *)arg2 isPrimary:(_Bool)arg3 sizeConstraints:(BBThumbnailSizeConstraints *)arg4 withHandler:(void (^)(NSData *, NSError *))arg5;
- (void)getDataForAttachmentUUID:(NSUUID *)arg1 bulletinID:(NSString *)arg2 isPrimary:(_Bool)arg3 withHandler:(void (^)(NSData *, NSError *))arg4;
- (void)getSectionParametersForSectionID:(NSString *)arg1 withHandler:(void (^)(BBSectionParameters *, NSError *))arg2;
- (void)getSectionInfoForSectionIDs:(NSSet *)arg1 withHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getSectionInfoForActiveSectionsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getSectionInfoWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)requestNoticesBulletinsForAllSections;
- (void)requestNoticesBulletinsForSectionID:(NSString *)arg1;
- (void)removeBulletins:(NSSet *)arg1 inSection:(NSString *)arg2 fromFeeds:(unsigned long long)arg3;
- (void)clearBulletinIDs:(NSSet *)arg1 inSection:(NSString *)arg2;
- (void)clearBulletinsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 inSections:(NSSet *)arg3;
- (void)clearSection:(NSString *)arg1;
- (void)finishedWithBulletinID:(NSString *)arg1 transactionID:(unsigned long long)arg2;
- (void)handleResponse:(BBResponse *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(NSString *)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(NSString *)arg2;
@end

