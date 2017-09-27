//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface FCForYouGroupsConfiguration : NSObject
{
    NSString *_configuration;
    double _weekendGreatStoriesYouMissedTimeRange;
    NSDictionary *_groupConfiguration;
    NSMutableDictionary *_cachedGroupConfigurations;
}

@property(copy, nonatomic) NSMutableDictionary *cachedGroupConfigurations; // @synthesize cachedGroupConfigurations=_cachedGroupConfigurations;
@property(copy, nonatomic) NSDictionary *groupConfiguration; // @synthesize groupConfiguration=_groupConfiguration;
@property(readonly, nonatomic) double weekendGreatStoriesYouMissedTimeRange; // @synthesize weekendGreatStoriesYouMissedTimeRange=_weekendGreatStoriesYouMissedTimeRange;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_identifierForGroupType:(long long)arg1;
- (_Bool)_defaultAllowsNativeAdsValueForGroupType:(long long)arg1;
- (unsigned long long)_defaultGroupPositionValueForGroupType:(long long)arg1;
- (unsigned long long)_defaultProceedingGroupsCount:(long long)arg1;
- (id)configurationForGroupType:(long long)arg1;
- (id)initWithJSONConfiguration:(id)arg1;

@end

