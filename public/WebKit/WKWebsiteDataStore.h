//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "WKObject.h"

@class NSString, WKHTTPCookieStore;

@interface WKWebsiteDataStore : NSObject <WKObject, NSCoding>
{
    struct ObjectStorage<API::WebsiteDataStore> _websiteDataStore;
}

+ (id)allWebsiteDataTypes;
+ (id)nonPersistentDataStore;
+ (id)defaultDataStore;
+ (id)_allWebsiteDataTypesIncludingPrivate;
@property(readonly) struct Object *_apiObject;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) WKHTTPCookieStore *httpCookieStore;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_setResourceLoadStatisticsTestingCallback:(CDUnknownBlockType)arg1;
- (void)_resourceLoadStatisticsResetToConsistentState;
- (void)_resourceLoadStatisticsClearInMemoryAndPersistentStoreModifiedSinceHours:(unsigned int)arg1;
- (void)_resourceLoadStatisticsClearInMemoryAndPersistentStore;
- (void)_resourceLoadStatisticsSetShouldSubmitTelemetry:(_Bool)arg1;
- (void)_resourceLoadStatisticsSetNotifyPagesWhenTelemetryWasCaptured:(_Bool)arg1;
- (void)_resourceLoadStatisticsSetShouldClassifyResourcesBeforeDataRecordsRemoval:(_Bool)arg1;
- (void)_resourceLoadStatisticsSetNotifyPagesWhenDataRecordsWereScanned:(_Bool)arg1;
- (void)_resourceLoadStatisticsSubmitTelemetry;
- (void)_resourceLoadStatisticsSetShouldPartitionCookies:(_Bool)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsUpdateCookiePartitioning;
- (void)_resourceLoadStatisticsProcessStatisticsAndDataRecords;
- (void)_resourceLoadStatisticsSetPruneEntriesDownTo:(unsigned long long)arg1;
- (void)_resourceLoadStatisticsSetMaxStatisticsEntries:(unsigned long long)arg1;
- (void)_resourceLoadStatisticsSetGrandfatheringTime:(double)arg1;
- (void)_resourceLoadStatisticsSetMinimumTimeBetweenDataRecordsRemoval:(double)arg1;
- (void)_resourceLoadStatisticsSetTimeToLiveCookiePartitionFree:(double)arg1;
- (void)_resourceLoadStatisticsSetTimeToLiveUserInteraction:(double)arg1;
- (void)_resourceLoadStatisticsSetSubresourceUniqueRedirectTo:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetSubresourceUnderTopFrameOrigin:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetSubframeUnderTopFrameOrigin:(id)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsIsGrandfathered:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resourceLoadStatisticsSetIsGrandfathered:(_Bool)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsHadUserInteraction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resourceLoadStatisticsSetHadUserInteraction:(_Bool)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsIsPrevalentResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resourceLoadStatisticsSetIsPrevalentResource:(_Bool)arg1 forHost:(id)arg2;
- (void)_resourceLoadStatisticsSetLastSeen:(double)arg1 forHost:(id)arg2;
@property(nonatomic, setter=_setResourceLoadStatisticsEnabled:) _Bool _resourceLoadStatisticsEnabled;
- (void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

