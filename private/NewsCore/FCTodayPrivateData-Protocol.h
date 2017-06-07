//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSMutableCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class NSArray, NSNumber, NSSet, NSString;
@protocol FCDerivedPersonalizationData><NSCoding;

@protocol FCTodayPrivateData <NSObject, NSMutableCopying>
@property(readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property(readonly, copy, nonatomic) NSString *feldsparID;
@property(readonly, copy, nonatomic) NSArray *recentlyReadHistoryItems;
@property(readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property(readonly, copy, nonatomic) NSArray *rankedPersonalSubscribedTagIDs;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property(readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property(readonly, copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@end

