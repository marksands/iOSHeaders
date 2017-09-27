//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@class NSSet;

@interface CADContactEventsPredicate : EKPredicate
{
    NSSet *_contactEmailAddresses;
    NSSet *_contactNameComponents;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSSet *contactNameComponents; // @synthesize contactNameComponents=_contactNameComponents;
@property(retain) NSSet *contactEmailAddresses; // @synthesize contactEmailAddresses=_contactEmailAddresses;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contacts:(id)arg4;
- (_Bool)_isCandidate:(void *)arg1 allowAllDayEvent:(_Bool)arg2;
-     // Error parsing type: @24@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}16, name: copyMatchingItemsWithDatabase:

@end

