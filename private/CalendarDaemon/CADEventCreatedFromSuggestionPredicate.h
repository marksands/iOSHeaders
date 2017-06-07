//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class NSString;

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate <EKDefaultPropertiesLoading>
{
    NSString *_opaqueKey;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *opaqueKey; // @synthesize opaqueKey=_opaqueKey;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)predicateFormat;
- (id)initWithOpaqueKey:(id)arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
