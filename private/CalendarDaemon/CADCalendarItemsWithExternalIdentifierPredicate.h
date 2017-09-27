//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarDaemon/CADEventPredicate.h>

#import "NSSecureCoding.h"

@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <NSSecureCoding>
{
    int _entityType;
    NSString *_externalIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
- (void).cxx_destruct;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1 entityType:(int)arg2;
-     // Error parsing type: @24@0:8^{CalDatabase={__CFRuntimeBase=QAQ}i^{CPRecordStore}^{CalEventOccurrenceCache}^{CalScheduledTaskCache}^{__CFDictionary}^{__CFDictionary}{_opaque_pthread_mutex_t=q[56c]}II^{__CFArray}^{__CFString}^{__CFArray}ii^{__CFString}^{__CFString}^{__CFString}i@?{_opaque_pthread_mutex_t=q[56c]}B^{__CFArray}^{__CFArray}^{__CFArray}^{__CFArray}B@B}16, name: copyMatchingItemsWithDatabase:

@end

