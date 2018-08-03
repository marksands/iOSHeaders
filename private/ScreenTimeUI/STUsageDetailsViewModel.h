//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, STUsageReport;

@interface STUsageDetailsViewModel : NSObject
{
    NSDictionary *_rawUsageItemsByStartDateByIdentifier;
    unsigned long long _selectedTimePeriod;
    NSString *_selectedItemDisplayName;
    STUsageReport *_todayUsageReport;
    STUsageReport *_weekUsageReport;
}

+ (id)keyPathsForValuesAffectingSelectedPickupInfo;
+ (id)keyPathsForValuesAffectingSelectedUsageReport;
@property(copy, nonatomic) STUsageReport *weekUsageReport; // @synthesize weekUsageReport=_weekUsageReport;
@property(copy, nonatomic) STUsageReport *todayUsageReport; // @synthesize todayUsageReport=_todayUsageReport;
@property(copy, nonatomic) NSString *selectedItemDisplayName; // @synthesize selectedItemDisplayName=_selectedItemDisplayName;
@property unsigned long long selectedTimePeriod; // @synthesize selectedTimePeriod=_selectedTimePeriod;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *rawUsageItemsByStartDateByIdentifier; // @synthesize rawUsageItemsByStartDateByIdentifier=_rawUsageItemsByStartDateByIdentifier;
@property(readonly, nonatomic) STUsageReport *selectedUsageReport;
@property(readonly, nonatomic) _Bool hasUsageData;
- (id)init;

@end

