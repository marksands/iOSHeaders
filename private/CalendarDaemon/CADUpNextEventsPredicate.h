//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@interface CADUpNextEventsPredicate : EKPredicate
{
    double _startDateRestrictionThreshold;
}

+ (_Bool)supportsSecureCoding;
+ (id)_descriptionForOccurrence:(struct CalEventOccurrence *)arg1 ofEvent:(void *)arg2;
+ (_Bool)_occurrencePassesFilter:(struct CalEventOccurrence *)arg1 event:(void *)arg2;
@property(nonatomic) double startDateRestrictionThreshold; // @synthesize startDateRestrictionThreshold=_startDateRestrictionThreshold;
- (_Bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
-     // Error parsing type: @24@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}16, name: copyMatchingItemsWithDatabase:

@end

