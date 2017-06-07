//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding>
{
    // Error parsing type: , name: _outOfAppLaunchBoundaryDonationsCountByBundleId
    // Error parsing type: , name: _filteredDuetEventsUUIDsByBundleId
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (void)setNumberOfOutOfAppLaunchBoundaryDonations:(long long)arg1 forBundleId:(id)arg2;
- (void)setFilteredDuetEventsUUIDs:(id)arg1 forBundleId:(id)arg2;
- (id)copyWithZone:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1;
- (id)init;
@property(nonatomic, readonly) NSDictionary *filteredDuetEventsUUIDsByBundleId;
@property(nonatomic, readonly) NSDictionary *outOfAppLaunchBoundaryDonationsCountByBundleId;
@property(nonatomic, copy) NSDictionary *_filteredDuetEventsUUIDsByBundleId; // @synthesize _filteredDuetEventsUUIDsByBundleId;
@property(nonatomic, copy) NSDictionary *_outOfAppLaunchBoundaryDonationsCountByBundleId; // @synthesize _outOfAppLaunchBoundaryDonationsCountByBundleId;

@end

