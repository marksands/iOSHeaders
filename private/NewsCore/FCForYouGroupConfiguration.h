//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FCForYouGroupConfiguration : NSObject
{
    _Bool _allowsNativeAds;
    long long _groupType;
    NSString *_identifier;
    unsigned long long _groupPosition;
    unsigned long long _precedingGroupsCount;
}

@property(nonatomic) unsigned long long precedingGroupsCount; // @synthesize precedingGroupsCount=_precedingGroupsCount;
@property(nonatomic) unsigned long long groupPosition; // @synthesize groupPosition=_groupPosition;
@property(nonatomic) _Bool allowsNativeAds; // @synthesize allowsNativeAds=_allowsNativeAds;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
- (void).cxx_destruct;

@end

