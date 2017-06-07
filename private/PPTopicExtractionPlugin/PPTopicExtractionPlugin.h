//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PPTopicExtractionPlugin/FIAPPlugin-Protocol.h>

@class NSString, PPMTopicDonation, PPMTopicDonationError, PPMTopicItemDonation;

@interface PPTopicExtractionPlugin : NSObject <FIAPPlugin>
{
    PPMTopicDonation *topicDonationTracker;
    PPMTopicItemDonation *topicItemDonationTracker;
    PPMTopicDonationError *errorTracker;
    unsigned long long blacklistHash;
    _Bool started;
    _Bool donated;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)processSearchableItem:(id)arg1;
- (void)extractAndDonateTopicsForText:(id)arg1 isReader:(_Bool)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 weight:(double)arg6;
- (void)checkBlacklist;
- (unsigned long long)hashForBlacklist:(id)arg1;
- (id)checkTopicsAreNew:(id)arg1 bundleId:(id)arg2;
- (void)logDonationErrorForReason:(struct PPMTopicDonationErrorReason_)arg1;
- (void)logDonationForTopics:(id)arg1 isReader:(_Bool)arg2 bundleId:(id)arg3 areNew:(id)arg4;
- (id)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

